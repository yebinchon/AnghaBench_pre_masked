
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct wpi_softc {int sc_radioon_task; int watchdog_rfkill; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct wpi_softc*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,void (*) (void*),struct wpi_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct ieee80211com*,int *) ;
 int FUNC_3 (struct wpi_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct wpi_softc *VAR_4 = VAR_3;
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;

 FUNC_0(VAR_4, VAR_1, "RFkill Watchdog: tick\n");


 if ((FUNC_3(VAR_4, VAR_0) & 0x1) == 0) {

  FUNC_1(&VAR_4->watchdog_rfkill, VAR_2, FUNC_4,
      VAR_4);
 } else
  FUNC_2(VAR_5, &VAR_4->sc_radioon_task);
}
