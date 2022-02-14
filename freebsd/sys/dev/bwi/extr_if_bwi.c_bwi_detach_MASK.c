
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct bwi_softc {int sc_nmac; int sc_snd; int sc_tq; int * sc_mac; int sc_watchdog_timer; int sc_calib_ch; int sc_led_blink_ch; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct bwi_softc*) ;
 int FUNC_1 (struct bwi_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bwi_softc*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ieee80211com*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct bwi_softc *VAR_0)
{
 struct ieee80211com *VAR_1 = &VAR_0->sc_ic;
 int VAR_2;

 FUNC_3(VAR_0, 1);
 FUNC_4(&VAR_0->sc_led_blink_ch);
 FUNC_4(&VAR_0->sc_calib_ch);
 FUNC_4(&VAR_0->sc_watchdog_timer);
 FUNC_5(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0->sc_nmac; ++VAR_2)
  FUNC_2(&VAR_0->sc_mac[VAR_2]);
 FUNC_1(VAR_0);
 FUNC_7(VAR_0->sc_tq);
 FUNC_6(&VAR_0->sc_snd);

 FUNC_0(VAR_0);

 return (0);
}
