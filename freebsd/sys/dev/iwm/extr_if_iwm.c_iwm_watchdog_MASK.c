
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_oerrors; } ;
struct iwm_softc {scalar_t__ sc_attached; scalar_t__ sc_tx_timer; int sc_watchdog_to; struct ieee80211com sc_ic; int sc_dev; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct iwm_softc*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct ieee80211com*) ;
 int FUNC_4 (struct iwm_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct iwm_softc *VAR_2 = VAR_1;
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;

 if (VAR_2->sc_attached == 0)
  return;

 if (VAR_2->sc_tx_timer > 0) {
  if (--VAR_2->sc_tx_timer == 0) {
   FUNC_2(VAR_2->sc_dev, "device timeout\n");



   FUNC_3(VAR_3);
   FUNC_1(VAR_2->sc_ic.ic_oerrors, 1);
   return;
  }
  FUNC_0(&VAR_2->sc_watchdog_to, VAR_0, FUNC_5, VAR_2);
 }
}
