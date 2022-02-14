
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct urtw_softc {int sc_flags; int sc_mtx; int sc_snd; int * sc_xfer; int sc_rx_inactive; int sc_rx_active; int sc_tx_pending; int sc_tx_inactive; int sc_tx_active; int sc_watchdog_ch; int sc_led_ch; int sc_led_task; int sc_updateslot_task; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct urtw_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct urtw_softc*) ;
 int FUNC_3 (int *) ;
 struct urtw_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211com*,int *) ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct urtw_softc*) ;
 int FUNC_10 (struct urtw_softc*) ;
 int FUNC_11 (struct urtw_softc*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,unsigned int) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_4)
{
 struct urtw_softc *VAR_5 = FUNC_4(VAR_4);
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;
 unsigned int VAR_7;
 unsigned int VAR_8;


 FUNC_1(VAR_5);
 VAR_5->sc_flags |= VAR_2;
 FUNC_11(VAR_5);
 FUNC_2(VAR_5);

 FUNC_5(VAR_6, &VAR_5->sc_updateslot_task);
 FUNC_5(VAR_6, &VAR_5->sc_led_task);

 FUNC_12(&VAR_5->sc_led_ch);
 FUNC_3(&VAR_5->sc_watchdog_ch);

 VAR_8 = (VAR_5->sc_flags & VAR_3) ?
     VAR_0 : VAR_1;


 FUNC_1(VAR_5);
 FUNC_0(&VAR_5->sc_tx_active);
 FUNC_0(&VAR_5->sc_tx_inactive);
 FUNC_0(&VAR_5->sc_tx_pending);

 FUNC_0(&VAR_5->sc_rx_active);
 FUNC_0(&VAR_5->sc_rx_inactive);
 FUNC_2(VAR_5);


 for (VAR_7 = 0; VAR_7 != VAR_8; VAR_7++)
  FUNC_13(VAR_5->sc_xfer[VAR_7]);


 FUNC_1(VAR_5);
 FUNC_10(VAR_5);
 FUNC_9(VAR_5);
 FUNC_2(VAR_5);


 FUNC_14(VAR_5->sc_xfer, VAR_8);

 FUNC_6(VAR_6);
 FUNC_7(&VAR_5->sc_snd);
 FUNC_8(&VAR_5->sc_mtx);
 return (0);
}
