
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vr_rx_ring_map; int vr_rx_ring_tag; struct vr_rxdesc* vr_rxdesc; scalar_t__ vr_rx_cons; } ;
struct vr_ring_data {TYPE_2__* vr_rx_ring; } ;
struct vr_softc {TYPE_1__ vr_cdata; struct vr_ring_data vr_rdata; } ;
struct vr_rxdesc {TYPE_2__* desc; int * rx_m; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {int vr_nextphys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vr_softc*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct vr_softc*,int) ;

__attribute__((used)) static int
FUNC_6(struct vr_softc *VAR_5)
{
 struct vr_ring_data *VAR_6;
 struct vr_rxdesc *VAR_7;
 bus_addr_t VAR_8;
 int VAR_9;

 VAR_5->vr_cdata.vr_rx_cons = 0;

 VAR_6 = &VAR_5->vr_rdata;
 FUNC_3(VAR_6->vr_rx_ring, VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7 = &VAR_5->vr_cdata.vr_rxdesc[VAR_9];
  VAR_7->rx_m = ((void*)0);
  VAR_7->desc = &VAR_6->vr_rx_ring[VAR_9];
  if (VAR_9 == VAR_3 - 1)
   VAR_8 = FUNC_1(VAR_5, 0);
  else
   VAR_8 = FUNC_1(VAR_5, VAR_9 + 1);
  VAR_6->vr_rx_ring[VAR_9].vr_nextphys = FUNC_4(FUNC_0(VAR_8));
  if (FUNC_5(VAR_5, VAR_9) != 0)
   return (VAR_2);
 }

 FUNC_2(VAR_5->vr_cdata.vr_rx_ring_tag,
     VAR_5->vr_cdata.vr_rx_ring_map,
     VAR_0 | VAR_1);

 return (0);
}
