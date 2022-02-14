
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rl_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {int rl_tx_desc_cnt; int rl_rx_desc_cnt; int rl_jrx_mtag; struct rl_rxdesc* rl_jrx_desc; int rl_rx_mtag; struct rl_rxdesc* rl_rx_desc; int rl_tx_mtag; struct rl_txdesc* rl_tx_desc; } ;
struct rl_softc {int rl_flags; TYPE_1__ rl_ldata; int * rl_tail; int * rl_head; int rl_dev; int rl_txstart; int rl_stat_callout; scalar_t__ rl_watchdog_timer; struct ifnet* rl_ifp; } ;
struct rl_rxdesc {int * rx_m; int rx_dmamap; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ) ;
 int FUNC_2 (struct rl_softc*,int ,int) ;
 int FUNC_3 (struct rl_softc*,int ,int) ;
 int FUNC_4 (struct rl_softc*,int ,int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct rl_softc*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct rl_softc *VAR_25)
{
 int VAR_26;
 struct ifnet *VAR_27;
 struct rl_txdesc *VAR_28;
 struct rl_rxdesc *VAR_29;

 FUNC_6(VAR_25);

 VAR_27 = VAR_25->rl_ifp;

 VAR_25->rl_watchdog_timer = 0;
 FUNC_9(&VAR_25->rl_stat_callout);
 VAR_27->if_drv_flags &= ~(VAR_3 | VAR_2);







 FUNC_4(VAR_25, VAR_16, FUNC_1(VAR_25, VAR_16) &
     ~(VAR_17 | VAR_19 | VAR_20 |
     VAR_18));

 if ((VAR_25->rl_flags & VAR_8) != 0) {

  FUNC_4(VAR_25, VAR_15, FUNC_1(VAR_25, VAR_15) |
      0x00080000);
 }

 if ((VAR_25->rl_flags & VAR_12) != 0) {
  for (VAR_26 = VAR_21; VAR_26 > 0; VAR_26--) {
   if ((FUNC_0(VAR_25, VAR_25->rl_txstart) &
       VAR_24) == 0)
    break;
   FUNC_5(20);
  }
  if (VAR_26 == 0)
   FUNC_10(VAR_25->rl_dev,
       "stopping TX poll timed out!\n");
  FUNC_2(VAR_25, VAR_7, 0x00);
 } else if ((VAR_25->rl_flags & VAR_9) != 0) {
  FUNC_2(VAR_25, VAR_7, VAR_5 | VAR_6 |
      VAR_4);
  if ((VAR_25->rl_flags & VAR_10) != 0) {
   for (VAR_26 = VAR_21; VAR_26 > 0; VAR_26--) {
    if ((FUNC_1(VAR_25, VAR_22) &
        VAR_23) != 0)
     break;
    FUNC_5(100);
   }
   if (VAR_26 == 0)
    FUNC_10(VAR_25->rl_dev,
       "stopping TXQ timed out!\n");
  }
 } else
  FUNC_2(VAR_25, VAR_7, 0x00);
 FUNC_5(1000);
 FUNC_3(VAR_25, VAR_13, 0x0000);
 FUNC_3(VAR_25, VAR_14, 0xFFFF);

 if (VAR_25->rl_head != ((void*)0)) {
  FUNC_11(VAR_25->rl_head);
  VAR_25->rl_head = VAR_25->rl_tail = ((void*)0);
 }


 for (VAR_26 = 0; VAR_26 < VAR_25->rl_ldata.rl_tx_desc_cnt; VAR_26++) {
  VAR_28 = &VAR_25->rl_ldata.rl_tx_desc[VAR_26];
  if (VAR_28->tx_m != ((void*)0)) {
   FUNC_7(VAR_25->rl_ldata.rl_tx_mtag,
       VAR_28->tx_dmamap, VAR_1);
   FUNC_8(VAR_25->rl_ldata.rl_tx_mtag,
       VAR_28->tx_dmamap);
   FUNC_11(VAR_28->tx_m);
   VAR_28->tx_m = ((void*)0);
  }
 }


 for (VAR_26 = 0; VAR_26 < VAR_25->rl_ldata.rl_rx_desc_cnt; VAR_26++) {
  VAR_29 = &VAR_25->rl_ldata.rl_rx_desc[VAR_26];
  if (VAR_29->rx_m != ((void*)0)) {
   FUNC_7(VAR_25->rl_ldata.rl_rx_mtag,
       VAR_29->rx_dmamap, VAR_0);
   FUNC_8(VAR_25->rl_ldata.rl_rx_mtag,
       VAR_29->rx_dmamap);
   FUNC_11(VAR_29->rx_m);
   VAR_29->rx_m = ((void*)0);
  }
 }

 if ((VAR_25->rl_flags & VAR_11) != 0) {
  for (VAR_26 = 0; VAR_26 < VAR_25->rl_ldata.rl_rx_desc_cnt; VAR_26++) {
   VAR_29 = &VAR_25->rl_ldata.rl_jrx_desc[VAR_26];
   if (VAR_29->rx_m != ((void*)0)) {
    FUNC_7(VAR_25->rl_ldata.rl_jrx_mtag,
        VAR_29->rx_dmamap, VAR_0);
    FUNC_8(VAR_25->rl_ldata.rl_jrx_mtag,
        VAR_29->rx_dmamap);
    FUNC_11(VAR_29->rx_m);
    VAR_29->rx_m = ((void*)0);
   }
  }
 }
}
