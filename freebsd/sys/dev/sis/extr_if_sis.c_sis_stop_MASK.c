
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_txdesc {int * tx_m; int tx_dmamap; } ;
struct sis_softc {int sis_tx_tag; struct sis_txdesc* sis_txdesc; int sis_rx_tag; struct sis_rxdesc* sis_rxdesc; int sis_flags; int sis_stat_ch; scalar_t__ sis_watchdog_timer; struct ifnet* sis_ifp; } ;
struct sis_rxdesc {int * rx_m; int rx_dmamap; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (struct sis_softc*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct sis_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct sis_softc*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct sis_softc *VAR_15)
{
 struct ifnet *VAR_16;
 struct sis_rxdesc *VAR_17;
 struct sis_txdesc *VAR_18;
 int VAR_19;

 FUNC_3(VAR_15);

 VAR_16 = VAR_15->sis_ifp;
 VAR_15->sis_watchdog_timer = 0;

 FUNC_7(&VAR_15->sis_stat_ch);

 VAR_16->if_drv_flags &= ~(VAR_3 | VAR_2);
 FUNC_1(VAR_15, VAR_8, 0);
 FUNC_1(VAR_15, VAR_9, 0);
 FUNC_0(VAR_15, VAR_10);
 FUNC_4(VAR_15, VAR_4, VAR_6|VAR_5);
 FUNC_2(1000);
 FUNC_1(VAR_15, VAR_13, 0);
 FUNC_1(VAR_15, VAR_11, 0);

 VAR_15->sis_flags &= ~VAR_7;




 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
  VAR_17 = &VAR_15->sis_rxdesc[VAR_19];
  if (VAR_17->rx_m != ((void*)0)) {
   FUNC_5(VAR_15->sis_rx_tag, VAR_17->rx_dmamap,
       VAR_0);
   FUNC_6(VAR_15->sis_rx_tag, VAR_17->rx_dmamap);
   FUNC_8(VAR_17->rx_m);
   VAR_17->rx_m = ((void*)0);
  }
 }




 for (VAR_19 = 0; VAR_19 < VAR_14; VAR_19++) {
  VAR_18 = &VAR_15->sis_txdesc[VAR_19];
  if (VAR_18->tx_m != ((void*)0)) {
   FUNC_5(VAR_15->sis_tx_tag, VAR_18->tx_dmamap,
       VAR_1);
   FUNC_6(VAR_15->sis_tx_tag, VAR_18->tx_dmamap);
   FUNC_8(VAR_18->tx_m);
   VAR_18->tx_m = ((void*)0);
  }
 }
}
