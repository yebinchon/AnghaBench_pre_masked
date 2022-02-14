
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct vte_txdesc {int tx_flags; int * tx_m; int tx_dmamap; TYPE_1__* tx_desc; } ;
struct TYPE_4__ {scalar_t__ vte_tx_cnt; int vte_tx_cons; int vte_tx_tag; struct vte_txdesc* vte_txdesc; int vte_tx_ring_map; int vte_tx_ring_tag; } ;
struct vte_softc {scalar_t__ vte_watchdog_timer; TYPE_2__ vte_cdata; struct ifnet* vte_ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_3__ {int dtst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct vte_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct vte_softc *VAR_6)
{
 struct ifnet *VAR_7;
 struct vte_txdesc *VAR_8;
 uint16_t VAR_9;
 int VAR_10, VAR_11;

 FUNC_1(VAR_6);

 VAR_7 = VAR_6->vte_ifp;

 if (VAR_6->vte_cdata.vte_tx_cnt == 0)
  return;
 FUNC_2(VAR_6->vte_cdata.vte_tx_ring_tag,
     VAR_6->vte_cdata.vte_tx_ring_map, VAR_0 |
     VAR_1);
 VAR_10 = VAR_6->vte_cdata.vte_tx_cons;




 for (VAR_11 = 0; VAR_6->vte_cdata.vte_tx_cnt > 0; VAR_11++) {
  VAR_8 = &VAR_6->vte_cdata.vte_txdesc[VAR_10];
  VAR_9 = FUNC_4(VAR_8->tx_desc->dtst);
  if ((VAR_9 & VAR_3) != 0)
   break;
  VAR_6->vte_cdata.vte_tx_cnt--;

  FUNC_2(VAR_6->vte_cdata.vte_tx_tag, VAR_8->tx_dmamap,
      VAR_1);
  FUNC_3(VAR_6->vte_cdata.vte_tx_tag, VAR_8->tx_dmamap);
  if ((VAR_8->tx_flags & VAR_4) == 0)
   FUNC_5(VAR_8->tx_m);
  VAR_8->tx_flags &= ~VAR_4;
  VAR_8->tx_m = ((void*)0);
  VAR_11++;
  FUNC_0(VAR_10, VAR_5);
 }

 if (VAR_11 > 0) {
  VAR_7->if_drv_flags &= ~VAR_2;
  VAR_6->vte_cdata.vte_tx_cons = VAR_10;




  if (VAR_6->vte_cdata.vte_tx_cnt == 0)
   VAR_6->vte_watchdog_timer = 0;
 }
}
