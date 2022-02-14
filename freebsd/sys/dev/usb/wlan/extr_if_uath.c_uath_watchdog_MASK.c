
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_oerrors; } ;
struct uath_softc {scalar_t__ sc_tx_timer; int watchdog_ch; int sc_dev; struct ieee80211com sc_ic; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct uath_softc*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct uath_softc *VAR_2 = VAR_1;
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;

 if (VAR_2->sc_tx_timer > 0) {
  if (--VAR_2->sc_tx_timer == 0) {
   FUNC_2(VAR_2->sc_dev, "device timeout\n");
   FUNC_1(VAR_3->ic_oerrors, 1);
   FUNC_3(VAR_3);
   return;
  }
  FUNC_0(&VAR_2->watchdog_ch, VAR_0, FUNC_4, VAR_2);
 }
}
