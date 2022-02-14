
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct run_softc {int cmdq_task; TYPE_1__* cmdq; int cmdq_store; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct run_softc* ic_softc; } ;
struct ieee80211_key {int wk_pad; int wk_keyix; int wk_flags; } ;
struct TYPE_2__ {struct ieee80211_key key; struct run_softc* arg1; int * arg0; int func; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct run_softc*,int ,char*,size_t) ;
 int FUNC_2 (struct ieee80211com*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_2, struct ieee80211_key *VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_2->iv_ic;
 struct run_softc *VAR_5 = VAR_4->ic_softc;
 struct ieee80211_key *VAR_6;
 uint32_t VAR_7;







 VAR_7 = FUNC_0(&VAR_5->cmdq_store);
 FUNC_1(VAR_5, VAR_0, "cmdq_store=%d\n", VAR_7);
 VAR_5->cmdq[VAR_7].func = VAR_1;
 VAR_5->cmdq[VAR_7].arg0 = ((void*)0);
 VAR_5->cmdq[VAR_7].arg1 = VAR_5;
 VAR_6 = &VAR_5->cmdq[VAR_7].key;
 VAR_6->wk_flags = VAR_3->wk_flags;
 VAR_6->wk_keyix = VAR_3->wk_keyix;

 VAR_6->wk_pad = VAR_3->wk_pad;
 FUNC_2(VAR_4, &VAR_5->cmdq_task);
 return (1);

}
