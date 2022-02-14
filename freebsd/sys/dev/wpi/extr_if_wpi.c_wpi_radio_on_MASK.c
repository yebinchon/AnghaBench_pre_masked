
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_vaps; } ;
struct wpi_softc {int watchdog_rfkill; int sc_dev; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int dummy; } ;


 struct ieee80211vap* FUNC_0 (int *) ;
 int FUNC_1 (struct wpi_softc*) ;
 int FUNC_2 (struct wpi_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0, int VAR_1)
{
 struct wpi_softc *VAR_2 = VAR_0;
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;
 struct ieee80211vap *VAR_4 = FUNC_0(&VAR_3->ic_vaps);

 FUNC_4(VAR_2->sc_dev, "RF switch: radio enabled\n");

 FUNC_1(VAR_2);
 FUNC_3(&VAR_2->watchdog_rfkill);
 FUNC_2(VAR_2);

 if (VAR_4 != ((void*)0))
  FUNC_5(VAR_4);
}
