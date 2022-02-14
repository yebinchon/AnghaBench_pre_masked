
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct uath_softc {int sc_mtx; int sc_snd; int * sc_xfer; int sc_cmd; int watchdog_ch; int stat_ch; int sc_cmd_inactive; int sc_cmd_waiting; int sc_cmd_pending; int sc_cmd_active; int sc_tx_pending; int sc_tx_inactive; int sc_tx_active; int sc_rx_inactive; int sc_rx_active; int sc_flags; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct uath_softc*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct uath_softc*) ;
 int FUNC_3 (int *) ;
 struct uath_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211com*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct uath_softc*,int ) ;
 int FUNC_9 (struct uath_softc*) ;
 int FUNC_10 (struct uath_softc*) ;
 int FUNC_11 (struct uath_softc*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,unsigned int) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_2)
{
 struct uath_softc *VAR_3 = FUNC_4(VAR_2);
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 unsigned int VAR_5;





 FUNC_1(VAR_3);
 VAR_3->sc_flags |= VAR_0;

 FUNC_0(&VAR_3->sc_rx_active);
 FUNC_0(&VAR_3->sc_rx_inactive);

 FUNC_0(&VAR_3->sc_tx_active);
 FUNC_0(&VAR_3->sc_tx_inactive);
 FUNC_0(&VAR_3->sc_tx_pending);

 FUNC_0(&VAR_3->sc_cmd_active);
 FUNC_0(&VAR_3->sc_cmd_pending);
 FUNC_0(&VAR_3->sc_cmd_waiting);
 FUNC_0(&VAR_3->sc_cmd_inactive);

 FUNC_11(VAR_3);
 FUNC_2(VAR_3);

 FUNC_3(&VAR_3->stat_ch);
 FUNC_3(&VAR_3->watchdog_ch);


 for (VAR_5 = 0; VAR_5 != VAR_1; VAR_5++)
  FUNC_12(VAR_3->sc_xfer[VAR_5]);


 FUNC_1(VAR_3);
 FUNC_9(VAR_3);
 FUNC_10(VAR_3);
 FUNC_8(VAR_3, VAR_3->sc_cmd);
 FUNC_2(VAR_3);


 FUNC_13(VAR_3->sc_xfer, VAR_1);

 FUNC_5(VAR_4);
 FUNC_6(&VAR_3->sc_snd);
 FUNC_7(&VAR_3->sc_mtx);
 return (0);
}
