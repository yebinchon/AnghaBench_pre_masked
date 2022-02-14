
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_data {int mii_media_status; int mii_media_active; } ;
struct jme_txdesc {scalar_t__ tx_ndesc; int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {scalar_t__ jme_tx_cnt; scalar_t__ jme_rx_cons; int jme_tx_tag; struct jme_txdesc* jme_txdesc; int * jme_rxhead; } ;
struct jme_softc {int jme_flags; int jme_rxcsr; int jme_txcsr; int jme_tq; int jme_tick_ch; scalar_t__ jme_morework; TYPE_1__ jme_cdata; int jme_int_task; scalar_t__ jme_watchdog_timer; struct ifnet* jme_ifp; int jme_miibus; } ;
struct ifnet {int if_drv_flags; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct jme_softc*) ;
 int FUNC_6 (struct jme_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (struct jme_softc*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (struct jme_softc*,int ) ;
 int VAR_22 ;
 int FUNC_9 (struct jme_softc*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int ,int ,struct jme_softc*) ;
 int FUNC_13 (int *) ;
 struct mii_data* FUNC_14 (int ) ;
 int VAR_26 ;
 int FUNC_15 (struct ifnet*,int ,int) ;
 int FUNC_16 (struct jme_softc*) ;
 int FUNC_17 (struct jme_softc*) ;
 int FUNC_18 (struct jme_softc*) ;
 int FUNC_19 (struct jme_softc*) ;
 int FUNC_20 (struct jme_softc*) ;
 int FUNC_21 (struct jme_softc*) ;
 int VAR_27 ;
 int FUNC_22 (struct jme_softc*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static void
FUNC_27(void *VAR_28, int VAR_29)
{
 struct jme_softc *VAR_30;
 struct mii_data *VAR_31;
 struct ifnet *VAR_32;
 struct jme_txdesc *VAR_33;
 bus_addr_t VAR_34;
 int VAR_35;

 VAR_30 = (struct jme_softc *)VAR_28;

 FUNC_5(VAR_30);
 VAR_31 = FUNC_14(VAR_30->jme_miibus);
 VAR_32 = VAR_30->jme_ifp;
 if (VAR_31 == ((void*)0) || VAR_32 == ((void*)0) ||
     (VAR_32->if_drv_flags & VAR_5) == 0) {
  FUNC_9(VAR_30);
  return;
 }

 VAR_30->jme_flags &= ~VAR_8;
 if ((VAR_31->mii_media_status & VAR_6) != 0) {
  switch (FUNC_2(VAR_31->mii_media_active)) {
  case 128:
  case 129:
   VAR_30->jme_flags |= VAR_8;
   break;
  case 130:
   if ((VAR_30->jme_flags & VAR_7) != 0)
    break;
   VAR_30->jme_flags |= VAR_8;
   break;
  default:
   break;
  }
 }
 FUNC_24(VAR_30->jme_tq);

 FUNC_1(VAR_30, VAR_14, VAR_13);
 VAR_32->if_drv_flags &= ~(VAR_5 | VAR_4);
 FUNC_13(&VAR_30->jme_tick_ch);
 VAR_30->jme_watchdog_timer = 0;


 FUNC_20(VAR_30);
 FUNC_21(VAR_30);


 FUNC_9(VAR_30);
 FUNC_25(VAR_30->jme_tq, &VAR_30->jme_int_task);
 FUNC_5(VAR_30);

 if (VAR_30->jme_cdata.jme_rxhead != ((void*)0))
  FUNC_23(VAR_30->jme_cdata.jme_rxhead);
 FUNC_6(VAR_30);
 FUNC_22(VAR_30);
 if (VAR_30->jme_cdata.jme_tx_cnt != 0) {

  for (VAR_35 = 0; VAR_35 < VAR_22; VAR_35++) {
   VAR_33 = &VAR_30->jme_cdata.jme_txdesc[VAR_35];
   if (VAR_33->tx_m != ((void*)0)) {
    FUNC_10(
        VAR_30->jme_cdata.jme_tx_tag,
        VAR_33->tx_dmamap,
        VAR_0);
    FUNC_11(
        VAR_30->jme_cdata.jme_tx_tag,
        VAR_33->tx_dmamap);
    FUNC_23(VAR_33->tx_m);
    VAR_33->tx_m = ((void*)0);
    VAR_33->tx_ndesc = 0;
    FUNC_15(VAR_32, VAR_3, 1);
   }
  }
 }





 VAR_30->jme_cdata.jme_rx_cons = 0;
 VAR_30->jme_morework = 0;
 FUNC_17(VAR_30);

 FUNC_16(VAR_30);


 if ((VAR_30->jme_flags & VAR_8) != 0) {
  FUNC_18(VAR_30);
  FUNC_19(VAR_30);

  FUNC_1(VAR_30, VAR_16, VAR_30->jme_rxcsr);
  FUNC_1(VAR_30, VAR_19, VAR_30->jme_txcsr);


  VAR_34 = FUNC_8(VAR_30, 0);
  FUNC_1(VAR_30, VAR_20, FUNC_3(VAR_34));
  FUNC_1(VAR_30, VAR_21, FUNC_4(VAR_34));


  VAR_34 = FUNC_7(VAR_30, 0);
  FUNC_1(VAR_30, VAR_17, FUNC_3(VAR_34));
  FUNC_1(VAR_30, VAR_18, FUNC_4(VAR_34));


  FUNC_1(VAR_30, VAR_16, VAR_30->jme_rxcsr | VAR_24 |
      VAR_23);
  FUNC_1(VAR_30, VAR_19, VAR_30->jme_txcsr | VAR_25);

  if ((VAR_30->jme_flags & VAR_10) != 0)
   FUNC_1(VAR_30, VAR_11,
       FUNC_0(VAR_30, VAR_11) & ~VAR_1);
  if ((VAR_30->jme_flags & VAR_9) != 0)
   FUNC_1(VAR_30, VAR_12,
       FUNC_0(VAR_30, VAR_12) & ~VAR_2);
 }

 VAR_32->if_drv_flags |= VAR_5;
 VAR_32->if_drv_flags &= ~VAR_4;
 FUNC_12(&VAR_30->jme_tick_ch, VAR_26, VAR_27, VAR_30);

 FUNC_26(VAR_30->jme_tq);

 FUNC_1(VAR_30, VAR_15, VAR_13);

 FUNC_9(VAR_30);
}
