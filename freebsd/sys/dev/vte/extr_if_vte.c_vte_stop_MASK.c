
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vte_txdesc {int tx_flags; int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {int ** vte_txmbufs; int vte_tx_tag; struct vte_txdesc* vte_txdesc; int vte_rx_tag; struct vte_rxdesc* vte_rxdesc; } ;
struct vte_softc {TYPE_1__ vte_cdata; scalar_t__ vte_watchdog_timer; int vte_tick_ch; int vte_flags; struct ifnet* vte_ifp; } ;
struct vte_rxdesc {int * rx_m; int rx_dmamap; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vte_softc*,int ) ;
 int FUNC_1 (struct vte_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct vte_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vte_softc*) ;
 int FUNC_8 (struct vte_softc*) ;

__attribute__((used)) static void
FUNC_9(struct vte_softc *VAR_11)
{
 struct ifnet *VAR_12;
 struct vte_txdesc *VAR_13;
 struct vte_rxdesc *VAR_14;
 int VAR_15;

 FUNC_2(VAR_11);



 VAR_12 = VAR_11->vte_ifp;
 VAR_12->if_drv_flags &= ~(VAR_3 | VAR_2);
 VAR_11->vte_flags &= ~VAR_4;
 FUNC_5(&VAR_11->vte_tick_ch);
 VAR_11->vte_watchdog_timer = 0;
 FUNC_7(VAR_11);

 FUNC_1(VAR_11, VAR_6, 0);
 FUNC_1(VAR_11, VAR_5, 0);

 FUNC_8(VAR_11);

 FUNC_0(VAR_11, VAR_7);



 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  VAR_14 = &VAR_11->vte_cdata.vte_rxdesc[VAR_15];
  if (VAR_14->rx_m != ((void*)0)) {
   FUNC_3(VAR_11->vte_cdata.vte_rx_tag,
       VAR_14->rx_dmamap, VAR_0);
   FUNC_4(VAR_11->vte_cdata.vte_rx_tag,
       VAR_14->rx_dmamap);
   FUNC_6(VAR_14->rx_m);
   VAR_14->rx_m = ((void*)0);
  }
 }
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  VAR_13 = &VAR_11->vte_cdata.vte_txdesc[VAR_15];
  if (VAR_13->tx_m != ((void*)0)) {
   FUNC_3(VAR_11->vte_cdata.vte_tx_tag,
       VAR_13->tx_dmamap, VAR_1);
   FUNC_4(VAR_11->vte_cdata.vte_tx_tag,
       VAR_13->tx_dmamap);
   if ((VAR_13->tx_flags & VAR_9) == 0)
    FUNC_6(VAR_13->tx_m);
   VAR_13->tx_m = ((void*)0);
   VAR_13->tx_flags &= ~VAR_9;
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  if (VAR_11->vte_cdata.vte_txmbufs[VAR_15] != ((void*)0)) {
   FUNC_6(VAR_11->vte_cdata.vte_txmbufs[VAR_15]);
   VAR_11->vte_cdata.vte_txmbufs[VAR_15] = ((void*)0);
  }
 }
}
