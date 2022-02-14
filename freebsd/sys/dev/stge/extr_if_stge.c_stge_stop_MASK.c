
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct stge_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {int stge_tx_tag; struct stge_txdesc* stge_txdesc; int stge_rx_tag; struct stge_rxdesc* stge_rxdesc; } ;
struct stge_softc {scalar_t__ sc_link; struct ifnet* sc_ifp; TYPE_1__ sc_cdata; scalar_t__ sc_watchdog_timer; int sc_tick_ch; } ;
struct stge_rxdesc {int * rx_m; int rx_dmamap; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int ) ;
 int FUNC_2 (struct stge_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct stge_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct stge_softc*) ;
 int FUNC_9 (struct stge_softc*) ;
 int FUNC_10 (struct stge_softc*) ;

__attribute__((used)) static void
FUNC_11(struct stge_softc *VAR_14)
{
 struct ifnet *VAR_15;
 struct stge_txdesc *VAR_16;
 struct stge_rxdesc *VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 FUNC_3(VAR_14);



 FUNC_6(&VAR_14->sc_tick_ch);
 VAR_14->sc_watchdog_timer = 0;




 FUNC_1(VAR_14, VAR_6, 0);




 FUNC_9(VAR_14);
 FUNC_10(VAR_14);
 VAR_18 = FUNC_0(VAR_14, VAR_7) & VAR_4;
 VAR_18 |= VAR_5;
 FUNC_2(VAR_14, VAR_7, VAR_18);




 FUNC_8(VAR_14);
 FUNC_2(VAR_14, VAR_11, 0);
 FUNC_2(VAR_14, VAR_12, 0);
 FUNC_2(VAR_14, VAR_8, 0);
 FUNC_2(VAR_14, VAR_9, 0);




 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_17 = &VAR_14->sc_cdata.stge_rxdesc[VAR_19];
  if (VAR_17->rx_m != ((void*)0)) {
   FUNC_4(VAR_14->sc_cdata.stge_rx_tag,
       VAR_17->rx_dmamap, VAR_0);
   FUNC_5(VAR_14->sc_cdata.stge_rx_tag,
       VAR_17->rx_dmamap);
   FUNC_7(VAR_17->rx_m);
   VAR_17->rx_m = ((void*)0);
  }
        }
 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
  VAR_16 = &VAR_14->sc_cdata.stge_txdesc[VAR_19];
  if (VAR_16->tx_m != ((void*)0)) {
   FUNC_4(VAR_14->sc_cdata.stge_tx_tag,
       VAR_16->tx_dmamap, VAR_1);
   FUNC_5(VAR_14->sc_cdata.stge_tx_tag,
       VAR_16->tx_dmamap);
   FUNC_7(VAR_16->tx_m);
   VAR_16->tx_m = ((void*)0);
  }
        }




 VAR_15 = VAR_14->sc_ifp;
 VAR_15->if_drv_flags &= ~(VAR_3 | VAR_2);
 VAR_14->sc_link = 0;
}
