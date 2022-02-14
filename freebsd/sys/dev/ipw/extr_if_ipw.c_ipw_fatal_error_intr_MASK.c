
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_vaps; } ;
struct ipw_softc {int sc_init_task; int sc_dev; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int dummy; } ;


 int FUNC_0 (struct ipw_softc*) ;
 int FUNC_1 (struct ipw_softc*) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (struct ieee80211com*,int *) ;

__attribute__((used)) static void
FUNC_6(struct ipw_softc *VAR_0)
{
 struct ieee80211com *VAR_1 = &VAR_0->sc_ic;
 struct ieee80211vap *VAR_2 = FUNC_2(&VAR_1->ic_vaps);

 FUNC_3(VAR_0->sc_dev, "firmware error\n");
 if (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_0);
  FUNC_4(VAR_2);
  FUNC_0(VAR_0);
 }
 FUNC_5(VAR_1, &VAR_0->sc_init_task);
}
