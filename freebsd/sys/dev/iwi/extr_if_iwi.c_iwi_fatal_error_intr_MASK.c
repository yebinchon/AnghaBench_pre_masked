
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_vaps; } ;
struct iwi_softc {scalar_t__ sc_busy_timer; int flags; int sc_restarttask; int sc_dev; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int dummy; } ;


 int VAR_0 ;
 struct ieee80211vap* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211com*,int *) ;
 int FUNC_4 (struct iwi_softc*) ;

__attribute__((used)) static void
FUNC_5(struct iwi_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;
 struct ieee80211vap *VAR_3 = FUNC_0(&VAR_2->ic_vaps);

 FUNC_1(VAR_1->sc_dev, "firmware error\n");
 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_3);
 FUNC_3(VAR_2, &VAR_1->sc_restarttask);

 VAR_1->flags &= ~VAR_0;
 VAR_1->sc_busy_timer = 0;
 FUNC_4(VAR_1);
}
