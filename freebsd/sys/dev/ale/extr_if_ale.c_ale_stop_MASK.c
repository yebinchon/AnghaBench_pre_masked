
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct ale_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {int ale_tx_tag; struct ale_txdesc* ale_txdesc; } ;
struct ale_softc {TYPE_1__ ale_cdata; scalar_t__ ale_watchdog_timer; int ale_tick_ch; int ale_flags; struct ifnet* ale_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ale_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ale_softc*,int ) ;
 int FUNC_2 (struct ale_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct ale_softc*) ;
 int FUNC_5 (struct ale_softc*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct ale_softc *VAR_14)
{
 struct ifnet *VAR_15;
 struct ale_txdesc *VAR_16;
 uint32_t VAR_17;
 int VAR_18;

 FUNC_0(VAR_14);



 VAR_15 = VAR_14->ale_ifp;
 VAR_15->if_drv_flags &= ~(VAR_11 | VAR_10);
 VAR_14->ale_flags &= ~VAR_1;
 FUNC_8(&VAR_14->ale_tick_ch);
 VAR_14->ale_watchdog_timer = 0;
 FUNC_4(VAR_14);

 FUNC_2(VAR_14, VAR_2, 0);
 FUNC_2(VAR_14, VAR_3, 0xFFFFFFFF);

 VAR_17 = FUNC_1(VAR_14, VAR_5);
 VAR_17 &= ~VAR_13;
 FUNC_2(VAR_14, VAR_5, VAR_17);
 VAR_17 = FUNC_1(VAR_14, VAR_4);
 VAR_17 &= ~VAR_12;
 FUNC_2(VAR_14, VAR_4, VAR_17);
 VAR_17 = FUNC_1(VAR_14, VAR_0);
 VAR_17 &= ~(VAR_9 | VAR_8);
 FUNC_2(VAR_14, VAR_0, VAR_17);
 FUNC_3(1000);

 FUNC_5(VAR_14);

 FUNC_2(VAR_14, VAR_3, 0xFFFFFFFF);




 for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++) {
  VAR_16 = &VAR_14->ale_cdata.ale_txdesc[VAR_18];
  if (VAR_16->tx_m != ((void*)0)) {
   FUNC_6(VAR_14->ale_cdata.ale_tx_tag,
       VAR_16->tx_dmamap, VAR_7);
   FUNC_7(VAR_14->ale_cdata.ale_tx_tag,
       VAR_16->tx_dmamap);
   FUNC_9(VAR_16->tx_m);
   VAR_16->tx_m = ((void*)0);
  }
        }
}
