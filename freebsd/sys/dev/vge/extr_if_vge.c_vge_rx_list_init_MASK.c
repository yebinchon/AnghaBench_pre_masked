
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vge_rx_commit; int vge_rx_ring_map; int vge_rx_ring_tag; struct vge_rxdesc* vge_rxdesc; int * vge_tail; int * vge_head; scalar_t__ vge_rx_prodidx; } ;
struct vge_ring_data {int * vge_rx_ring; } ;
struct vge_softc {TYPE_1__ vge_cdata; struct vge_ring_data vge_rdata; } ;
struct vge_rxdesc {struct vge_rxdesc* rxd_prev; int * rx_desc; int * rx_m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vge_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct vge_softc*,int) ;

__attribute__((used)) static int
FUNC_4(struct vge_softc *VAR_5)
{
 struct vge_ring_data *VAR_6;
 struct vge_rxdesc *VAR_7;
 int VAR_8;

 FUNC_0(VAR_5);

 VAR_5->vge_cdata.vge_rx_prodidx = 0;
 VAR_5->vge_cdata.vge_head = ((void*)0);
 VAR_5->vge_cdata.vge_tail = ((void*)0);
 VAR_5->vge_cdata.vge_rx_commit = 0;

 VAR_6 = &VAR_5->vge_rdata;
 FUNC_2(VAR_6->vge_rx_ring, VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = &VAR_5->vge_cdata.vge_rxdesc[VAR_8];
  VAR_7->rx_m = ((void*)0);
  VAR_7->rx_desc = &VAR_6->vge_rx_ring[VAR_8];
  if (VAR_8 == 0)
   VAR_7->rxd_prev =
       &VAR_5->vge_cdata.vge_rxdesc[VAR_3 - 1];
  else
   VAR_7->rxd_prev = &VAR_5->vge_cdata.vge_rxdesc[VAR_8 - 1];
  if (FUNC_3(VAR_5, VAR_8) != 0)
   return (VAR_2);
 }

 FUNC_1(VAR_5->vge_cdata.vge_rx_ring_tag,
     VAR_5->vge_cdata.vge_rx_ring_map,
     VAR_0 | VAR_1);

 VAR_5->vge_cdata.vge_rx_commit = 0;

 return (0);
}
