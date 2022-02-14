
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct age_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {int age_tx_tag; struct age_txdesc* age_txdesc; int age_rx_tag; struct age_rxdesc* age_rxdesc; int * age_rxhead; } ;
struct age_softc {TYPE_1__ age_cdata; int age_dev; scalar_t__ age_watchdog_timer; int age_tick_ch; int age_flags; struct ifnet* age_ifp; } ;
struct age_rxdesc {int * rx_m; int rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct age_softc*) ;
 int VAR_6 ;
 int FUNC_1 (struct age_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct age_softc*,int ) ;
 int FUNC_3 (struct age_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct age_softc*) ;
 int FUNC_6 (struct age_softc*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct age_softc *VAR_19)
{
 struct ifnet *VAR_20;
 struct age_txdesc *VAR_21;
 struct age_rxdesc *VAR_22;
 uint32_t VAR_23;
 int VAR_24;

 FUNC_0(VAR_19);



 VAR_20 = VAR_19->age_ifp;
 VAR_20->if_drv_flags &= ~(VAR_16 | VAR_15);
 VAR_19->age_flags &= ~VAR_2;
 FUNC_9(&VAR_19->age_tick_ch);
 VAR_19->age_watchdog_timer = 0;




 FUNC_3(VAR_19, VAR_4, 0);
 FUNC_3(VAR_19, VAR_5, 0xFFFFFFFF);

 FUNC_3(VAR_19, VAR_0, 0);

 FUNC_5(VAR_19);
 FUNC_6(VAR_19);

 FUNC_3(VAR_19, VAR_1,
     FUNC_2(VAR_19, VAR_1) & ~(VAR_13 | VAR_14));

 FUNC_3(VAR_19, VAR_9,
     FUNC_2(VAR_19, VAR_9) & ~VAR_18);
 FUNC_3(VAR_19, VAR_7,
     FUNC_2(VAR_19, VAR_7) & ~VAR_17);
 for (VAR_24 = VAR_6; VAR_24 > 0; VAR_24--) {
  if ((VAR_23 = FUNC_2(VAR_19, VAR_3)) == 0)
   break;
  FUNC_4(10);
 }
 if (VAR_24 == 0)
  FUNC_10(VAR_19->age_dev,
      "stopping Rx/Tx MACs timed out(0x%08x)!\n", VAR_23);


 if (VAR_19->age_cdata.age_rxhead != ((void*)0))
  FUNC_11(VAR_19->age_cdata.age_rxhead);
 FUNC_1(VAR_19);



 for (VAR_24 = 0; VAR_24 < VAR_8; VAR_24++) {
  VAR_22 = &VAR_19->age_cdata.age_rxdesc[VAR_24];
  if (VAR_22->rx_m != ((void*)0)) {
   FUNC_7(VAR_19->age_cdata.age_rx_tag,
       VAR_22->rx_dmamap, VAR_11);
   FUNC_8(VAR_19->age_cdata.age_rx_tag,
       VAR_22->rx_dmamap);
   FUNC_11(VAR_22->rx_m);
   VAR_22->rx_m = ((void*)0);
  }
        }
 for (VAR_24 = 0; VAR_24 < VAR_10; VAR_24++) {
  VAR_21 = &VAR_19->age_cdata.age_txdesc[VAR_24];
  if (VAR_21->tx_m != ((void*)0)) {
   FUNC_7(VAR_19->age_cdata.age_tx_tag,
       VAR_21->tx_dmamap, VAR_12);
   FUNC_8(VAR_19->age_cdata.age_tx_tag,
       VAR_21->tx_dmamap);
   FUNC_11(VAR_21->tx_m);
   VAR_21->tx_m = ((void*)0);
  }
        }
}
