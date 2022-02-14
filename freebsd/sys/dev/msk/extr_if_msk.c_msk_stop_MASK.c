
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msk_txdesc {int * tx_m; int tx_dmamap; } ;
struct msk_softc {int msk_intrmask; int msk_intrhwemask; } ;
struct msk_rxdesc {int * rx_m; int rx_dmamap; } ;
struct TYPE_2__ {int msk_tx_tag; struct msk_txdesc* msk_txdesc; int msk_jumbo_rx_tag; struct msk_rxdesc* msk_jumbo_rxdesc; int msk_rx_tag; struct msk_rxdesc* msk_rxdesc; } ;
struct msk_if_softc {scalar_t__ msk_port; int msk_flags; TYPE_1__ msk_cdata; int msk_rxq; int msk_if_dev; int msk_txq; scalar_t__ msk_watchdog_timer; int msk_tick_ch; struct ifnet* msk_ifp; struct msk_softc* msk_softc; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct msk_softc*,int ) ;
 int FUNC_1 (struct msk_softc*,int ) ;
 int FUNC_2 (struct msk_softc*,int ,int) ;
 int FUNC_3 (struct msk_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct msk_softc*,scalar_t__,int ) ;
 int FUNC_6 (struct msk_softc*,scalar_t__,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (scalar_t__,int ) ;
 int VAR_17 ;
 int FUNC_8 (struct msk_if_softc*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_9 (int ,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_10 (int ,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct msk_if_softc*,int ,int ,int ) ;
 int FUNC_18 (struct msk_if_softc*) ;

__attribute__((used)) static void
FUNC_19(struct msk_if_softc *VAR_41)
{
 struct msk_softc *VAR_42;
 struct msk_txdesc *VAR_43;
 struct msk_rxdesc *VAR_44;
 struct msk_rxdesc *VAR_45;
 struct ifnet *VAR_46;
 uint32_t VAR_47;
 int VAR_48;

 FUNC_8(VAR_41);
 VAR_42 = VAR_41->msk_softc;
 VAR_46 = VAR_41->msk_ifp;

 FUNC_14(&VAR_41->msk_tick_ch);
 VAR_41->msk_watchdog_timer = 0;


 if (VAR_41->msk_port == VAR_19) {
  VAR_42->msk_intrmask &= ~VAR_39;
  VAR_42->msk_intrhwemask &= ~VAR_37;
 } else {
  VAR_42->msk_intrmask &= ~VAR_40;
  VAR_42->msk_intrhwemask &= ~VAR_38;
 }
 FUNC_3(VAR_42, VAR_0, VAR_42->msk_intrhwemask);
 FUNC_1(VAR_42, VAR_0);
 FUNC_3(VAR_42, VAR_1, VAR_42->msk_intrmask);
 FUNC_1(VAR_42, VAR_1);


 VAR_47 = FUNC_5(VAR_42, VAR_41->msk_port, VAR_14);
 VAR_47 &= ~(VAR_12 | VAR_13);
 FUNC_6(VAR_42, VAR_41->msk_port, VAR_14, VAR_47);

 FUNC_5(VAR_42, VAR_41->msk_port, VAR_14);

 FUNC_18(VAR_41);


 FUNC_3(VAR_42, FUNC_9(VAR_41->msk_txq, VAR_27), VAR_5);
 VAR_47 = FUNC_1(VAR_42, FUNC_9(VAR_41->msk_txq, VAR_27));
 for (VAR_48 = 0; VAR_48 < VAR_21; VAR_48++) {
  if ((VAR_47 & (VAR_5 | VAR_3)) == 0) {
   FUNC_3(VAR_42, FUNC_9(VAR_41->msk_txq, VAR_27),
       VAR_5);
   VAR_47 = FUNC_1(VAR_42, FUNC_9(VAR_41->msk_txq, VAR_27));
  } else
   break;
  FUNC_4(1);
 }
 if (VAR_48 == VAR_21)
  FUNC_15(VAR_41->msk_if_dev, "Tx BMU stop failed\n");
 FUNC_2(VAR_42, FUNC_10(VAR_41->msk_txq, VAR_30),
     VAR_32 | VAR_31);


 FUNC_2(VAR_42, FUNC_7(VAR_41->msk_port, VAR_9), 0);

 FUNC_17(VAR_41, VAR_23, VAR_24, 0);


 FUNC_2(VAR_42, FUNC_7(VAR_41->msk_port, VAR_34), VAR_35);


 FUNC_3(VAR_42, FUNC_9(VAR_41->msk_txq, VAR_27),
     VAR_4 | VAR_2);


 FUNC_3(VAR_42, FUNC_11(VAR_41->msk_txq, VAR_25),
     VAR_26);


 FUNC_2(VAR_42, FUNC_10(VAR_41->msk_txq, VAR_30), VAR_32);


 FUNC_3(VAR_42, FUNC_7(VAR_41->msk_port, VAR_36), VAR_11);

 FUNC_3(VAR_42, FUNC_7(VAR_41->msk_port, VAR_8), VAR_10);
 FUNC_2(VAR_42, FUNC_10(VAR_41->msk_rxq, VAR_30), VAR_31);
 for (VAR_48 = 0; VAR_48 < VAR_21; VAR_48++) {
  if (FUNC_0(VAR_42, FUNC_10(VAR_41->msk_rxq, VAR_29)) ==
      FUNC_0(VAR_42, FUNC_10(VAR_41->msk_rxq, VAR_28)))
   break;
  FUNC_4(1);
 }
 if (VAR_48 == VAR_21)
  FUNC_15(VAR_41->msk_if_dev, "Rx BMU stop failed\n");
 FUNC_3(VAR_42, FUNC_9(VAR_41->msk_rxq, VAR_27),
     VAR_4 | VAR_2);

 FUNC_3(VAR_42, FUNC_11(VAR_41->msk_rxq, VAR_25),
     VAR_26);

 FUNC_2(VAR_42, FUNC_10(VAR_41->msk_rxq, VAR_30), VAR_32);

 FUNC_3(VAR_42, FUNC_7(VAR_41->msk_port, VAR_33), VAR_11);


 for (VAR_48 = 0; VAR_48 < VAR_20; VAR_48++) {
  VAR_44 = &VAR_41->msk_cdata.msk_rxdesc[VAR_48];
  if (VAR_44->rx_m != ((void*)0)) {
   FUNC_12(VAR_41->msk_cdata.msk_rx_tag,
       VAR_44->rx_dmamap, VAR_6);
   FUNC_13(VAR_41->msk_cdata.msk_rx_tag,
       VAR_44->rx_dmamap);
   FUNC_16(VAR_44->rx_m);
   VAR_44->rx_m = ((void*)0);
  }
 }
 for (VAR_48 = 0; VAR_48 < VAR_18; VAR_48++) {
  VAR_45 = &VAR_41->msk_cdata.msk_jumbo_rxdesc[VAR_48];
  if (VAR_45->rx_m != ((void*)0)) {
   FUNC_12(VAR_41->msk_cdata.msk_jumbo_rx_tag,
       VAR_45->rx_dmamap, VAR_6);
   FUNC_13(VAR_41->msk_cdata.msk_jumbo_rx_tag,
       VAR_45->rx_dmamap);
   FUNC_16(VAR_45->rx_m);
   VAR_45->rx_m = ((void*)0);
  }
 }
 for (VAR_48 = 0; VAR_48 < VAR_22; VAR_48++) {
  VAR_43 = &VAR_41->msk_cdata.msk_txdesc[VAR_48];
  if (VAR_43->tx_m != ((void*)0)) {
   FUNC_12(VAR_41->msk_cdata.msk_tx_tag,
       VAR_43->tx_dmamap, VAR_7);
   FUNC_13(VAR_41->msk_cdata.msk_tx_tag,
       VAR_43->tx_dmamap);
   FUNC_16(VAR_43->tx_m);
   VAR_43->tx_m = ((void*)0);
  }
 }




 VAR_46->if_drv_flags &= ~(VAR_16 | VAR_15);
 VAR_41->msk_flags &= ~VAR_17;
}
