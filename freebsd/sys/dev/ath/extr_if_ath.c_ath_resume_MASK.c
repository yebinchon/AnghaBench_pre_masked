
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int * ic_curchan; } ;
struct ath_softc {int sc_rx_stopped; int sc_rx_resetted; scalar_t__ sc_resume_up; struct ath_hal* sc_ah; scalar_t__ sc_tdma; scalar_t__ sc_hasenforcetxop; int * sc_curchan; int sc_opmode; int sc_cur_rxchainmask; int sc_cur_txchainmask; struct ieee80211com sc_ic; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_STATUS ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct ath_softc*,int *) ;
 int FUNC_5 (struct ath_softc*,int *) ;
 int FUNC_6 (struct ath_hal*,int ,int ) ;
 int FUNC_7 (struct ath_hal*,int ,int *,int ,int ,int *) ;
 int FUNC_8 (struct ath_hal*,int ,int ) ;
 int FUNC_9 (struct ath_hal*,int) ;
 int FUNC_10 (struct ath_hal*,int ) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (struct ath_softc*) ;
 int FUNC_13 (struct ath_softc*,int ) ;
 int FUNC_14 (struct ath_softc*,int ,int) ;
 int FUNC_15 (struct ath_softc*,int ) ;
 int FUNC_16 (struct ath_softc*) ;
 int FUNC_17 (struct ath_softc*,int *) ;
 int FUNC_18 (struct ath_softc*,int *) ;
 int FUNC_19 (struct ieee80211com*) ;

void
FUNC_20(struct ath_softc *VAR_4)
{
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;
 struct ath_hal *VAR_6 = VAR_4->sc_ah;
 HAL_STATUS VAR_7;

 FUNC_6(VAR_6, 0, 0);





 FUNC_18(VAR_4,
     VAR_4->sc_curchan != ((void*)0) ? VAR_4->sc_curchan : VAR_5->ic_curchan);
 FUNC_8(VAR_4->sc_ah, VAR_4->sc_cur_txchainmask,
     VAR_4->sc_cur_rxchainmask);


 FUNC_0(VAR_4);
 FUNC_15(VAR_4, VAR_2);
 FUNC_13(VAR_4, VAR_2);
 FUNC_14(VAR_4, VAR_2, 1);
 FUNC_3(VAR_4);

 FUNC_7(VAR_6, VAR_4->sc_opmode,
     VAR_4->sc_curchan != ((void*)0) ? VAR_4->sc_curchan : VAR_5->ic_curchan,
     VAR_0, VAR_3, &VAR_7);
 FUNC_16(VAR_4);

 FUNC_1(VAR_4);
 VAR_4->sc_rx_stopped = 1;
 VAR_4->sc_rx_resetted = 1;
 FUNC_2(VAR_4);


 FUNC_5(VAR_4, VAR_5->ic_curchan);


 FUNC_17(VAR_4, VAR_5->ic_curchan);




 FUNC_4(VAR_4, VAR_5->ic_curchan);





 if (VAR_4->sc_hasenforcetxop && VAR_4->sc_tdma)
  FUNC_9(VAR_4->sc_ah, 1);
 else
  FUNC_9(VAR_4->sc_ah, 0);


 FUNC_11(VAR_4);
 FUNC_10(VAR_6, VAR_1);

 if (VAR_4->sc_resume_up)
  FUNC_19(VAR_5);

 FUNC_0(VAR_4);
 FUNC_12(VAR_4);
 FUNC_3(VAR_4);


}
