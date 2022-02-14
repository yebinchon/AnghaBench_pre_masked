
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct run_vap {int * beacon_mbuf; } ;
struct run_softc {int cmdq_task; TYPE_1__* cmdq; int cmdq_store; } ;
struct ieee80211_beacon_offsets {int bo_flags; } ;
struct ieee80211vap {struct ieee80211_node* iv_bss; struct ieee80211_beacon_offsets iv_bcn_off; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct run_softc* ic_softc; } ;
struct ieee80211_node {int dummy; } ;
struct TYPE_2__ {struct ieee80211vap* arg0; int func; } ;





 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct run_softc*,int ,char*,size_t) ;
 struct run_vap* FUNC_2 (struct ieee80211vap*) ;
 int * FUNC_3 (struct ieee80211_node*) ;
 int FUNC_4 (struct ieee80211_node*,int *,int) ;
 int FUNC_5 (struct ieee80211com*,int *) ;
 int VAR_1 ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (struct ieee80211com*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(struct ieee80211vap *VAR_2, int VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_2->iv_ic;
 struct ieee80211_beacon_offsets *VAR_5 = &VAR_2->iv_bcn_off;
 struct ieee80211_node *VAR_6 = VAR_2->iv_bss;
 struct run_softc *VAR_7 = VAR_4->ic_softc;
 struct run_vap *VAR_8 = FUNC_2(VAR_2);
 int VAR_9 = 0;
 uint32_t VAR_10;

 switch (VAR_3) {
 case 130:
  FUNC_7(VAR_4);
  break;
 case 129:
  FUNC_6(VAR_4);
  break;
 case 128:
  VAR_9 = 1;
  break;
 default:
  break;
 }

 FUNC_8(VAR_5->bo_flags, VAR_3);
 if (VAR_8->beacon_mbuf == ((void*)0)) {
  VAR_8->beacon_mbuf = FUNC_3(VAR_6);
  if (VAR_8->beacon_mbuf == ((void*)0))
   return;
 }
 FUNC_4(VAR_6, VAR_8->beacon_mbuf, VAR_9);

 VAR_10 = FUNC_0(&VAR_7->cmdq_store);
 FUNC_1(VAR_7, VAR_0, "cmdq_store=%d\n", VAR_10);
 VAR_7->cmdq[VAR_10].func = VAR_1;
 VAR_7->cmdq[VAR_10].arg0 = VAR_2;
 FUNC_5(VAR_4, &VAR_7->cmdq_task);

 return;
}
