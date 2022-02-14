
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct rtwn_softc {int sc_flags; scalar_t__ sc_tx_timer; int sc_watchdog_to; struct ieee80211com sc_ic; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,void (*) (void*),struct rtwn_softc*) ;
 int VAR_1 ;
 int FUNC_3 (struct ieee80211com*,char*) ;
 int FUNC_4 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct rtwn_softc *VAR_3 = VAR_2;
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;

 FUNC_1(VAR_3);

 FUNC_0(VAR_3->sc_flags & VAR_0, ("not running"));

 if (VAR_3->sc_tx_timer != 0 && --VAR_3->sc_tx_timer == 0) {
  FUNC_3(VAR_4, "device timeout\n");
  FUNC_4(VAR_4);
  return;
 }
 FUNC_2(&VAR_3->sc_watchdog_to, VAR_1, FUNC_5, VAR_3);
}
