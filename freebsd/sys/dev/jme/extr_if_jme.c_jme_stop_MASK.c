
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jme_txdesc {scalar_t__ tx_ndesc; int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {int jme_tx_tag; struct jme_txdesc* jme_txdesc; int jme_rx_tag; struct jme_rxdesc* jme_rxdesc; int * jme_rxhead; } ;
struct jme_softc {TYPE_1__ jme_cdata; scalar_t__ jme_watchdog_timer; int jme_tick_ch; int jme_flags; struct ifnet* jme_ifp; } ;
struct jme_rxdesc {int * rx_m; int rx_dmamap; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct jme_softc*) ;
 int FUNC_3 (struct jme_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct jme_softc*,int) ;
 int FUNC_8 (struct jme_softc*) ;
 int FUNC_9 (struct jme_softc*) ;
 int FUNC_10 (struct jme_softc*) ;
 int FUNC_11 (struct jme_softc*) ;
 int FUNC_12 (struct jme_softc*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(struct jme_softc *VAR_12)
{
 struct ifnet *VAR_13;
 struct jme_txdesc *VAR_14;
 struct jme_rxdesc *VAR_15;
 int VAR_16;

 FUNC_2(VAR_12);



 VAR_13 = VAR_12->jme_ifp;
 VAR_13->if_drv_flags &= ~(VAR_3 | VAR_2);
 VAR_12->jme_flags &= ~VAR_4;
 FUNC_6(&VAR_12->jme_tick_ch);
 VAR_12->jme_watchdog_timer = 0;




 FUNC_1(VAR_12, VAR_6, VAR_5);
 FUNC_1(VAR_12, VAR_7, 0xFFFFFFFF);


 FUNC_1(VAR_12, VAR_9,
     FUNC_0(VAR_12, VAR_9) & ~VAR_11);


 FUNC_10(VAR_12);
 FUNC_11(VAR_12);


 FUNC_7(VAR_12, VAR_8);
 if (VAR_12->jme_cdata.jme_rxhead != ((void*)0))
  FUNC_13(VAR_12->jme_cdata.jme_rxhead);
 FUNC_3(VAR_12);
 FUNC_12(VAR_12);



 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
  VAR_15 = &VAR_12->jme_cdata.jme_rxdesc[VAR_16];
  if (VAR_15->rx_m != ((void*)0)) {
   FUNC_4(VAR_12->jme_cdata.jme_rx_tag,
       VAR_15->rx_dmamap, VAR_0);
   FUNC_5(VAR_12->jme_cdata.jme_rx_tag,
       VAR_15->rx_dmamap);
   FUNC_13(VAR_15->rx_m);
   VAR_15->rx_m = ((void*)0);
  }
        }
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_14 = &VAR_12->jme_cdata.jme_txdesc[VAR_16];
  if (VAR_14->tx_m != ((void*)0)) {
   FUNC_4(VAR_12->jme_cdata.jme_tx_tag,
       VAR_14->tx_dmamap, VAR_1);
   FUNC_5(VAR_12->jme_cdata.jme_tx_tag,
       VAR_14->tx_dmamap);
   FUNC_13(VAR_14->tx_m);
   VAR_14->tx_m = ((void*)0);
   VAR_14->tx_ndesc = 0;
  }
        }
 FUNC_9(VAR_12);
 FUNC_8(VAR_12);
}
