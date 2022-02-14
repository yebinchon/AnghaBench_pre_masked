
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct bwn_softc {int sc_snd; int sc_mem_res; int sc_mem_rid; int sc_tq; int sc_watchdog_ch; int sc_task_ch; int sc_rfswitch_ch; int sc_led_blink_ch; int sc_dev; int sc_flags; struct ieee80211com sc_ic; struct bwn_mac* sc_curmac; } ;
struct bwn_mac {int mac_res_irq; int mac_rid_irq; int * mac_intrhand; int mac_intrtask; int mac_txpower; int mac_hwreset; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_softc*) ;
 int FUNC_1 (struct bwn_softc*) ;
 int FUNC_2 (struct bwn_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (struct bwn_mac*) ;
 int FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (struct bwn_softc*) ;
 int FUNC_9 (struct bwn_mac*) ;
 int FUNC_10 (struct bwn_softc*) ;
 int FUNC_11 (int *) ;
 struct bwn_softc* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct ieee80211com*,int *) ;
 int FUNC_15 (struct ieee80211com*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_3)
{
 struct bwn_softc *VAR_4 = FUNC_12(VAR_3);
 struct bwn_mac *VAR_5 = VAR_4->sc_curmac;
 struct ieee80211com *VAR_6 = &VAR_4->sc_ic;

 VAR_4->sc_flags |= VAR_0;

 if (FUNC_13(VAR_4->sc_dev)) {
  FUNC_0(VAR_4);
  FUNC_10(VAR_4);
  FUNC_2(VAR_4);
  FUNC_6(VAR_5);
  FUNC_11(&VAR_4->sc_led_blink_ch);
  FUNC_11(&VAR_4->sc_rfswitch_ch);
  FUNC_11(&VAR_4->sc_task_ch);
  FUNC_11(&VAR_4->sc_watchdog_ch);
  FUNC_7(VAR_5);
  FUNC_14(VAR_6, &VAR_5->mac_hwreset);
  FUNC_14(VAR_6, &VAR_5->mac_txpower);
  FUNC_15(VAR_6);
 }
 FUNC_17(VAR_4->sc_tq, &VAR_5->mac_intrtask);
 FUNC_18(VAR_4->sc_tq);

 if (VAR_5->mac_intrhand != ((void*)0)) {
  FUNC_5(VAR_3, VAR_5->mac_res_irq, VAR_5->mac_intrhand);
  VAR_5->mac_intrhand = ((void*)0);
 }

 FUNC_3(VAR_3);
 FUNC_4(VAR_3, VAR_2, VAR_4->sc_mem_rid,
     VAR_4->sc_mem_res);
 FUNC_4(VAR_3, VAR_1, VAR_5->mac_rid_irq,
     VAR_5->mac_res_irq);
 FUNC_16(&VAR_4->sc_snd);
 FUNC_9(VAR_5);
 FUNC_1(VAR_4);

 FUNC_8(VAR_4);

 return (0);
}
