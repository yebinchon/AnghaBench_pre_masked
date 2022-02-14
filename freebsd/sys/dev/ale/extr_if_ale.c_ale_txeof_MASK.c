
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct ale_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {scalar_t__ ale_tx_cnt; size_t* ale_tx_cmb; size_t ale_tx_cons; int ale_tx_tag; struct ale_txdesc* ale_txdesc; int ale_tx_cmb_map; int ale_tx_cmb_tag; int ale_tx_ring_map; int ale_tx_ring_tag; } ;
struct ale_softc {int ale_flags; scalar_t__ ale_watchdog_timer; TYPE_1__ ale_cdata; struct ifnet* ale_ifp; } ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ale_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (struct ale_softc*,int ) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ale_softc *VAR_7)
{
 struct ifnet *VAR_8;
 struct ale_txdesc *VAR_9;
 uint32_t VAR_10, VAR_11;
 int VAR_12;

 FUNC_1(VAR_7);

 VAR_8 = VAR_7->ale_ifp;

 if (VAR_7->ale_cdata.ale_tx_cnt == 0)
  return;

 FUNC_3(VAR_7->ale_cdata.ale_tx_ring_tag,
     VAR_7->ale_cdata.ale_tx_ring_map,
     VAR_3 | VAR_4);
 if ((VAR_7->ale_flags & VAR_0) == 0) {
  FUNC_3(VAR_7->ale_cdata.ale_tx_cmb_tag,
      VAR_7->ale_cdata.ale_tx_cmb_map,
      VAR_3 | VAR_4);
  VAR_11 = *VAR_7->ale_cdata.ale_tx_cmb & VAR_6;
 } else
  VAR_11 = FUNC_2(VAR_7, VAR_1);
 VAR_10 = VAR_7->ale_cdata.ale_tx_cons;




 for (VAR_12 = 0; VAR_10 != VAR_11; VAR_12++,
     FUNC_0(VAR_10, VAR_2)) {
  if (VAR_7->ale_cdata.ale_tx_cnt <= 0)
   break;
  VAR_12++;
  VAR_8->if_drv_flags &= ~VAR_5;
  VAR_7->ale_cdata.ale_tx_cnt--;
  VAR_9 = &VAR_7->ale_cdata.ale_txdesc[VAR_10];
  if (VAR_9->tx_m != ((void*)0)) {

   FUNC_3(VAR_7->ale_cdata.ale_tx_tag,
       VAR_9->tx_dmamap, VAR_4);
   FUNC_4(VAR_7->ale_cdata.ale_tx_tag,
       VAR_9->tx_dmamap);
   FUNC_5(VAR_9->tx_m);
   VAR_9->tx_m = ((void*)0);
  }
 }

 if (VAR_12 > 0) {
  VAR_7->ale_cdata.ale_tx_cons = VAR_10;




  if (VAR_7->ale_cdata.ale_tx_cnt == 0)
   VAR_7->ale_watchdog_timer = 0;
 }
}
