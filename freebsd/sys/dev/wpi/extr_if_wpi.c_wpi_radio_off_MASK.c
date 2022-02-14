
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
 int FUNC_3 (int *,int ,int ,struct wpi_softc*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int FUNC_5 (struct ieee80211com*,int ) ;
 int FUNC_6 (struct ieee80211vap*) ;
 int FUNC_7 (struct wpi_softc*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, int VAR_3)
{
 struct wpi_softc *VAR_4 = VAR_2;
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;
 struct ieee80211vap *VAR_6 = FUNC_0(&VAR_5->ic_vaps);

 FUNC_4(VAR_4->sc_dev, "RF switch: radio disabled\n");

 FUNC_5(VAR_5, 0);
 FUNC_7(VAR_4);
 if (VAR_6 != ((void*)0))
  FUNC_6(VAR_6);

 FUNC_1(VAR_4);
 FUNC_3(&VAR_4->watchdog_rfkill, VAR_0, VAR_1, VAR_4);
 FUNC_2(VAR_4);
}
