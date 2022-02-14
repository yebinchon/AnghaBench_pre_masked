
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct run_softc {int cmdq_key_set; int cmdq_task; TYPE_1__* cmdq; int cmdq_store; } ;
struct ieee80211vap {scalar_t__ iv_opmode; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct run_softc* ic_softc; } ;
struct ieee80211_key {int wk_macaddr; } ;
struct TYPE_2__ {int mac; struct ieee80211_key* k; struct ieee80211vap* arg1; int * arg0; int func; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct run_softc*,int ,char*,size_t) ;
 int FUNC_3 (struct run_softc*) ;
 int FUNC_4 (struct run_softc*) ;
 int FUNC_5 (struct ieee80211com*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct ieee80211vap *VAR_4, struct ieee80211_key *VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_4->iv_ic;
 struct run_softc *VAR_7 = VAR_6->ic_softc;
 uint32_t VAR_8;

 VAR_8 = FUNC_1(&VAR_7->cmdq_store);
 FUNC_2(VAR_7, VAR_2, "cmdq_store=%d\n", VAR_8);
 VAR_7->cmdq[VAR_8].func = VAR_3;
 VAR_7->cmdq[VAR_8].arg0 = ((void*)0);
 VAR_7->cmdq[VAR_8].arg1 = VAR_4;
 VAR_7->cmdq[VAR_8].k = VAR_5;
 FUNC_0(VAR_7->cmdq[VAR_8].mac, VAR_5->wk_macaddr);
 FUNC_5(VAR_6, &VAR_7->cmdq_task);





 if (VAR_4->iv_opmode == VAR_0) {
  FUNC_3(VAR_7);
  VAR_7->cmdq_key_set = VAR_1;
  FUNC_4(VAR_7);
 }

 return (1);
}
