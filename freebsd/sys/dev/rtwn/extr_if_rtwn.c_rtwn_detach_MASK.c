
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct rtwn_softc* ic_softc; } ;
struct rtwn_softc {int sc_detached; int cmdq_task; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;
 scalar_t__ FUNC_3 (struct rtwn_softc*) ;
 int FUNC_4 (struct ieee80211com*,int *) ;
 int FUNC_5 (struct ieee80211com*) ;
 int FUNC_6 (struct rtwn_softc*) ;

void
FUNC_7(struct rtwn_softc *VAR_0)
{
 struct ieee80211com *VAR_1 = &VAR_0->sc_ic;

 if (VAR_1->ic_softc == VAR_0) {

  FUNC_0(VAR_0);
  VAR_0->sc_detached = 1;
  FUNC_1(VAR_0);

  FUNC_4(VAR_1, &VAR_0->cmdq_task);
  FUNC_5(VAR_1);
 }

 FUNC_6(VAR_0);
 if (FUNC_3(VAR_0))
  FUNC_2(VAR_0);
}
