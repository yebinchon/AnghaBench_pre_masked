
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * ti_parent_tag; int ti_gib_map; int ti_gib_tag; int ti_event_ring_map; int ti_event_ring_tag; int ti_status_map; int ti_status_tag; int ti_tx_ring_map; int ti_tx_ring_tag; int ti_rx_return_ring_map; int ti_rx_return_ring_tag; int ti_rx_mini_ring_map; int ti_rx_mini_ring_tag; int ti_rx_jumbo_ring_map; int ti_rx_jumbo_ring_tag; int ti_rx_std_ring_map; int ti_rx_std_ring_tag; int * ti_tx_tag; TYPE_2__* ti_txdesc; int * ti_rx_mini_tag; int * ti_rx_mini_sparemap; int ** ti_rx_mini_maps; int * ti_rx_jumbo_tag; int * ti_rx_jumbo_sparemap; int ** ti_rx_jumbo_maps; int * ti_rx_std_tag; int * ti_rx_std_sparemap; int ** ti_rx_std_maps; } ;
struct TYPE_4__ {int ti_info_paddr; int ti_info; int ti_event_ring_paddr; int ti_event_ring; int ti_status_paddr; int ti_status; int ti_tx_ring_paddr; int ti_tx_ring; int ti_rx_return_ring_paddr; int ti_rx_return_ring; int ti_rx_mini_ring_paddr; int ti_rx_mini_ring; int ti_rx_jumbo_ring_paddr; int ti_rx_jumbo_ring; int ti_rx_std_ring_paddr; int ti_rx_std_ring; } ;
struct ti_softc {TYPE_3__ ti_cdata; TYPE_1__ ti_rdata; } ;
struct TYPE_5__ {int * tx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ti_softc*,int *,void*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct ti_softc *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4->ti_cdata.ti_rx_std_maps[VAR_5]) {
   FUNC_1(VAR_4->ti_cdata.ti_rx_std_tag,
       VAR_4->ti_cdata.ti_rx_std_maps[VAR_5]);
   VAR_4->ti_cdata.ti_rx_std_maps[VAR_5] = ((void*)0);
  }
 }
 if (VAR_4->ti_cdata.ti_rx_std_sparemap) {
  FUNC_1(VAR_4->ti_cdata.ti_rx_std_tag,
      VAR_4->ti_cdata.ti_rx_std_sparemap);
  VAR_4->ti_cdata.ti_rx_std_sparemap = ((void*)0);
 }
 if (VAR_4->ti_cdata.ti_rx_std_tag) {
  FUNC_0(VAR_4->ti_cdata.ti_rx_std_tag);
  VAR_4->ti_cdata.ti_rx_std_tag = ((void*)0);
 }


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->ti_cdata.ti_rx_jumbo_maps[VAR_5]) {
   FUNC_1(VAR_4->ti_cdata.ti_rx_jumbo_tag,
       VAR_4->ti_cdata.ti_rx_jumbo_maps[VAR_5]);
   VAR_4->ti_cdata.ti_rx_jumbo_maps[VAR_5] = ((void*)0);
  }
 }
 if (VAR_4->ti_cdata.ti_rx_jumbo_sparemap) {
  FUNC_1(VAR_4->ti_cdata.ti_rx_jumbo_tag,
      VAR_4->ti_cdata.ti_rx_jumbo_sparemap);
  VAR_4->ti_cdata.ti_rx_jumbo_sparemap = ((void*)0);
 }
 if (VAR_4->ti_cdata.ti_rx_jumbo_tag) {
  FUNC_0(VAR_4->ti_cdata.ti_rx_jumbo_tag);
  VAR_4->ti_cdata.ti_rx_jumbo_tag = ((void*)0);
 }


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4->ti_cdata.ti_rx_mini_maps[VAR_5]) {
   FUNC_1(VAR_4->ti_cdata.ti_rx_mini_tag,
       VAR_4->ti_cdata.ti_rx_mini_maps[VAR_5]);
   VAR_4->ti_cdata.ti_rx_mini_maps[VAR_5] = ((void*)0);
  }
 }
 if (VAR_4->ti_cdata.ti_rx_mini_sparemap) {
  FUNC_1(VAR_4->ti_cdata.ti_rx_mini_tag,
      VAR_4->ti_cdata.ti_rx_mini_sparemap);
  VAR_4->ti_cdata.ti_rx_mini_sparemap = ((void*)0);
 }
 if (VAR_4->ti_cdata.ti_rx_mini_tag) {
  FUNC_0(VAR_4->ti_cdata.ti_rx_mini_tag);
  VAR_4->ti_cdata.ti_rx_mini_tag = ((void*)0);
 }


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4->ti_cdata.ti_txdesc[VAR_5].tx_dmamap) {
   FUNC_1(VAR_4->ti_cdata.ti_tx_tag,
       VAR_4->ti_cdata.ti_txdesc[VAR_5].tx_dmamap);
   VAR_4->ti_cdata.ti_txdesc[VAR_5].tx_dmamap = ((void*)0);
  }
 }
 if (VAR_4->ti_cdata.ti_tx_tag) {
  FUNC_0(VAR_4->ti_cdata.ti_tx_tag);
  VAR_4->ti_cdata.ti_tx_tag = ((void*)0);
 }


 FUNC_2(VAR_4, &VAR_4->ti_cdata.ti_rx_std_ring_tag,
     (void *)&VAR_4->ti_rdata.ti_rx_std_ring,
     VAR_4->ti_cdata.ti_rx_std_ring_map,
     &VAR_4->ti_rdata.ti_rx_std_ring_paddr);

 FUNC_2(VAR_4, &VAR_4->ti_cdata.ti_rx_jumbo_ring_tag,
     (void *)&VAR_4->ti_rdata.ti_rx_jumbo_ring,
     VAR_4->ti_cdata.ti_rx_jumbo_ring_map,
     &VAR_4->ti_rdata.ti_rx_jumbo_ring_paddr);

 FUNC_2(VAR_4, &VAR_4->ti_cdata.ti_rx_mini_ring_tag,
     (void *)&VAR_4->ti_rdata.ti_rx_mini_ring,
     VAR_4->ti_cdata.ti_rx_mini_ring_map,
     &VAR_4->ti_rdata.ti_rx_mini_ring_paddr);

 FUNC_2(VAR_4, &VAR_4->ti_cdata.ti_rx_return_ring_tag,
     (void *)&VAR_4->ti_rdata.ti_rx_return_ring,
     VAR_4->ti_cdata.ti_rx_return_ring_map,
     &VAR_4->ti_rdata.ti_rx_return_ring_paddr);

 FUNC_2(VAR_4, &VAR_4->ti_cdata.ti_tx_ring_tag,
     (void *)&VAR_4->ti_rdata.ti_tx_ring, VAR_4->ti_cdata.ti_tx_ring_map,
     &VAR_4->ti_rdata.ti_tx_ring_paddr);

 FUNC_2(VAR_4, &VAR_4->ti_cdata.ti_status_tag,
     (void *)&VAR_4->ti_rdata.ti_status, VAR_4->ti_cdata.ti_status_map,
     &VAR_4->ti_rdata.ti_status_paddr);

 FUNC_2(VAR_4, &VAR_4->ti_cdata.ti_event_ring_tag,
     (void *)&VAR_4->ti_rdata.ti_event_ring,
     VAR_4->ti_cdata.ti_event_ring_map, &VAR_4->ti_rdata.ti_event_ring_paddr);

 FUNC_2(VAR_4, &VAR_4->ti_cdata.ti_gib_tag,
     (void *)&VAR_4->ti_rdata.ti_info, VAR_4->ti_cdata.ti_gib_map,
     &VAR_4->ti_rdata.ti_info_paddr);


 if (VAR_4->ti_cdata.ti_parent_tag) {
  FUNC_0(VAR_4->ti_cdata.ti_parent_tag);
  VAR_4->ti_cdata.ti_parent_tag = ((void*)0);
 }
}
