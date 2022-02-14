
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_oerrors; } ;
struct upgt_softc {scalar_t__ sc_tx_timer; int sc_watchdog_ch; int sc_dev; struct ieee80211com sc_ic; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct upgt_softc*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct upgt_softc *VAR_2 = VAR_1;
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;

 if (VAR_2->sc_tx_timer > 0) {
  if (--VAR_2->sc_tx_timer == 0) {
   FUNC_2(VAR_2->sc_dev, "watchdog timeout\n");

   FUNC_1(VAR_3->ic_oerrors, 1);
   return;
  }
  FUNC_0(&VAR_2->sc_watchdog_ch, VAR_0, FUNC_3, VAR_2);
 }
}
