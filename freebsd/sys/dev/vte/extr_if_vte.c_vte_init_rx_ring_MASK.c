
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vte_rx_ring_map; int vte_rx_ring_tag; struct vte_rx_desc* vte_rx_ring; scalar_t__ vte_rx_ring_paddr; struct vte_rxdesc* vte_rxdesc; scalar_t__ vte_rx_cons; } ;
struct vte_softc {TYPE_1__ vte_cdata; } ;
struct vte_rxdesc {struct vte_rx_desc* rx_desc; int * rx_m; } ;
struct vte_rx_desc {int drnp; } ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vte_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct vte_rx_desc*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct vte_softc*,struct vte_rxdesc*) ;

__attribute__((used)) static int
FUNC_5(struct vte_softc *VAR_5)
{
 struct vte_rx_desc *VAR_6;
 struct vte_rxdesc *VAR_7;
 bus_addr_t VAR_8;
 int VAR_9;

 FUNC_0(VAR_5);

 VAR_5->vte_cdata.vte_rx_cons = 0;
 VAR_6 = VAR_5->vte_cdata.vte_rx_ring;
 FUNC_2(VAR_6, VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7 = &VAR_5->vte_cdata.vte_rxdesc[VAR_9];
  VAR_7->rx_m = ((void*)0);
  if (VAR_9 != VAR_3 - 1)
   VAR_8 = VAR_5->vte_cdata.vte_rx_ring_paddr +
       sizeof(struct vte_rx_desc) * (VAR_9 + 1);
  else
   VAR_8 = VAR_5->vte_cdata.vte_rx_ring_paddr +
       sizeof(struct vte_rx_desc) * 0;
  VAR_6 = &VAR_5->vte_cdata.vte_rx_ring[VAR_9];
  VAR_6->drnp = FUNC_3(VAR_8);
  VAR_7->rx_desc = VAR_6;
  if (FUNC_4(VAR_5, VAR_7) != 0)
   return (VAR_2);
 }

 FUNC_1(VAR_5->vte_cdata.vte_rx_ring_tag,
     VAR_5->vte_cdata.vte_rx_ring_map, VAR_0 |
     VAR_1);

 return (0);
}
