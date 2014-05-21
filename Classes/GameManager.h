#pragma once

#include "cocos2d.h"

#include "Box2D/Box2D.h"

#include "SimpleAudioEngine.h"

#include "EnemyManager.h"
#include "PlayerSprite.h"
#include "BulletManager.h"
#include "ItemManager.h"
#include "GameMap.h"
#include "GameMessage.h"
#include "GameEvents.h"

using namespace cocos2d;

class CGameManager : public CCLayer
{
public:
	// ���º���
    virtual bool init();
	
	// ����	
	static CCScene* scene();

	// ��ȡ�����
	static CPlayerSprite* getPlayer(){return m_pPlayer;}

	// ��ȡ�ӵ�������
	static CBulletManager* getBulletManager(){return m_pBulletManager;}

	// ��ȡ���˹�����
	static CEnemyManager* getEnemyManager(){return m_pEnemyManager;}

	// ��ȡ��Ʒ������
	static CItemManager* getItemManager(){return m_pItemManager;}

	// ��ȡ��ͼ��
	static CGameMap* getGameMap(){return m_pGameMap;}

	// ��������
	static CGameManager* create();

private:
	// ���º���
	void update(float dt);

	// ���ذ�ť�Ļص�����
	void back(CCObject* pSender);

	static CEnemyManager *m_pEnemyManager;		///<���˹���
	static CPlayerSprite *m_pPlayer;			///<��ҹ���
	static CBulletManager *m_pBulletManager;	///<�ӵ�����
	static CItemManager *m_pItemManager;		///<��Ʒ����
	static CGameMap *m_pGameMap;				///<��Ϸ��ͼ
	CGameMessage *m_pGameMessage;				///<�����Ϣ
};