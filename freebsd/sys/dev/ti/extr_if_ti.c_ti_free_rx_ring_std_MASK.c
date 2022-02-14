
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ti_rx_std_ring_map; int ti_rx_std_ring_tag; int ** ti_rx_std_chain; int ti_rx_std_tag; int * ti_rx_std_maps; } ;
struct TYPE_3__ {int ti_rx_std_ring; } ;
struct ti_softc {TYPE_2__ ti_cdata; TYPE_1__ ti_rdata; } ;
typedef int bus_dmamap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ti_softc *VAR_4)
{
 bus_dmamap_t VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_4->ti_cdata.ti_rx_std_chain[VAR_6] != ((void*)0)) {
   VAR_5 = VAR_4->ti_cdata.ti_rx_std_maps[VAR_6];
   FUNC_0(VAR_4->ti_cdata.ti_rx_std_tag, VAR_5,
       VAR_0);
   FUNC_1(VAR_4->ti_cdata.ti_rx_std_tag, VAR_5);
   FUNC_3(VAR_4->ti_cdata.ti_rx_std_chain[VAR_6]);
   VAR_4->ti_cdata.ti_rx_std_chain[VAR_6] = ((void*)0);
  }
 }
 FUNC_2(VAR_4->ti_rdata.ti_rx_std_ring, VAR_3);
 FUNC_0(VAR_4->ti_cdata.ti_rx_std_ring_tag,
     VAR_4->ti_cdata.ti_rx_std_ring_map, VAR_1);
}
