
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_vaps; int ic_oerrors; } ;
struct iwi_softc {scalar_t__ sc_tx_timer; scalar_t__ sc_state_timer; scalar_t__ fw_state; scalar_t__ sc_busy_timer; int sc_wdtimer; int sc_restarttask; int sc_dev; struct ieee80211com sc_ic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwi_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct iwi_softc*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211com*,int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 struct iwi_softc *VAR_3 = VAR_2;
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;

 FUNC_0(VAR_3);

 if (VAR_3->sc_tx_timer > 0) {
  if (--VAR_3->sc_tx_timer == 0) {
   FUNC_4(VAR_3->sc_dev, "device timeout\n");
   FUNC_3(VAR_4->ic_oerrors, 1);
   FUNC_6(VAR_4, &VAR_3->sc_restarttask);
  }
 }
 if (VAR_3->sc_state_timer > 0) {
  if (--VAR_3->sc_state_timer == 0) {
   FUNC_4(VAR_3->sc_dev,
       "firmware stuck in state %d, resetting\n",
       VAR_3->fw_state);
   if (VAR_3->fw_state == VAR_0)
    FUNC_5(FUNC_1(&VAR_4->ic_vaps));
   FUNC_6(VAR_4, &VAR_3->sc_restarttask);
   VAR_3->sc_state_timer = 3;
  }
 }
 if (VAR_3->sc_busy_timer > 0) {
  if (--VAR_3->sc_busy_timer == 0) {
   FUNC_4(VAR_3->sc_dev,
       "firmware command timeout, resetting\n");
   FUNC_6(VAR_4, &VAR_3->sc_restarttask);
  }
 }
 FUNC_2(&VAR_3->sc_wdtimer, VAR_1, FUNC_7, VAR_3);
}
