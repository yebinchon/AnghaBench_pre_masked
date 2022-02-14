
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct alc_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {int alc_tx_tag; struct alc_txdesc* alc_txdesc; int alc_rx_tag; struct alc_rxdesc* alc_rxdesc; int * alc_rxhead; } ;
struct alc_softc {TYPE_1__ alc_cdata; scalar_t__ alc_watchdog_timer; int alc_tick_ch; int alc_flags; struct ifnet* alc_ifp; } ;
struct alc_rxdesc {int * rx_m; int rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct alc_softc*) ;
 int FUNC_1 (struct alc_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct alc_softc*,int ) ;
 int FUNC_3 (struct alc_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct alc_softc*,int ,int ) ;
 int FUNC_6 (struct alc_softc*) ;
 int FUNC_7 (struct alc_softc*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct alc_softc *VAR_14)
{
 struct ifnet *VAR_15;
 struct alc_txdesc *VAR_16;
 struct alc_rxdesc *VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 FUNC_0(VAR_14);



 VAR_15 = VAR_14->alc_ifp;
 VAR_15->if_drv_flags &= ~(VAR_12 | VAR_11);
 VAR_14->alc_flags &= ~VAR_1;
 FUNC_10(&VAR_14->alc_tick_ch);
 VAR_14->alc_watchdog_timer = 0;
 FUNC_6(VAR_14);

 FUNC_3(VAR_14, VAR_2, 0);
 FUNC_3(VAR_14, VAR_3, 0xFFFFFFFF);

 VAR_18 = FUNC_2(VAR_14, VAR_0);
 VAR_18 &= ~(VAR_8 | VAR_10);
 VAR_18 |= VAR_9;
 FUNC_3(VAR_14, VAR_0, VAR_18);
 FUNC_4(1000);

 FUNC_7(VAR_14);

 FUNC_3(VAR_14, VAR_3, 0xFFFFFFFF);

 FUNC_5(VAR_14, 0, VAR_13);

 if (VAR_14->alc_cdata.alc_rxhead != ((void*)0))
  FUNC_11(VAR_14->alc_cdata.alc_rxhead);
 FUNC_1(VAR_14);



 for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
  VAR_17 = &VAR_14->alc_cdata.alc_rxdesc[VAR_19];
  if (VAR_17->rx_m != ((void*)0)) {
   FUNC_8(VAR_14->alc_cdata.alc_rx_tag,
       VAR_17->rx_dmamap, VAR_6);
   FUNC_9(VAR_14->alc_cdata.alc_rx_tag,
       VAR_17->rx_dmamap);
   FUNC_11(VAR_17->rx_m);
   VAR_17->rx_m = ((void*)0);
  }
 }
 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  VAR_16 = &VAR_14->alc_cdata.alc_txdesc[VAR_19];
  if (VAR_16->tx_m != ((void*)0)) {
   FUNC_8(VAR_14->alc_cdata.alc_tx_tag,
       VAR_16->tx_dmamap, VAR_7);
   FUNC_9(VAR_14->alc_cdata.alc_tx_tag,
       VAR_16->tx_dmamap);
   FUNC_11(VAR_16->tx_m);
   VAR_16->tx_m = ((void*)0);
  }
 }
}
