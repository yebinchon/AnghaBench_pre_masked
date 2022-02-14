
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vte_txdesc {int * tx_dmamap; } ;
struct TYPE_2__ {scalar_t__ vte_tx_ring_paddr; scalar_t__ vte_rx_ring_paddr; int * vte_parent_tag; int * vte_buffer_tag; int * vte_rx_ring_tag; int * vte_rx_ring; int vte_rx_ring_map; int * vte_tx_ring_tag; int * vte_tx_ring; int vte_tx_ring_map; int * vte_rx_tag; int * vte_rx_sparemap; struct vte_rxdesc* vte_rxdesc; int * vte_tx_tag; struct vte_txdesc* vte_txdesc; } ;
struct vte_softc {TYPE_1__ vte_cdata; } ;
struct vte_rxdesc {int * rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct vte_softc *VAR_2)
{
 struct vte_txdesc *VAR_3;
 struct vte_rxdesc *VAR_4;
 int VAR_5;


 if (VAR_2->vte_cdata.vte_tx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_3 = &VAR_2->vte_cdata.vte_txdesc[VAR_5];
   if (VAR_3->tx_dmamap != ((void*)0)) {
    FUNC_1(VAR_2->vte_cdata.vte_tx_tag,
        VAR_3->tx_dmamap);
    VAR_3->tx_dmamap = ((void*)0);
   }
  }
  FUNC_0(VAR_2->vte_cdata.vte_tx_tag);
  VAR_2->vte_cdata.vte_tx_tag = ((void*)0);
 }

 if (VAR_2->vte_cdata.vte_rx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4 = &VAR_2->vte_cdata.vte_rxdesc[VAR_5];
   if (VAR_4->rx_dmamap != ((void*)0)) {
    FUNC_1(VAR_2->vte_cdata.vte_rx_tag,
        VAR_4->rx_dmamap);
    VAR_4->rx_dmamap = ((void*)0);
   }
  }
  if (VAR_2->vte_cdata.vte_rx_sparemap != ((void*)0)) {
   FUNC_1(VAR_2->vte_cdata.vte_rx_tag,
       VAR_2->vte_cdata.vte_rx_sparemap);
   VAR_2->vte_cdata.vte_rx_sparemap = ((void*)0);
  }
  FUNC_0(VAR_2->vte_cdata.vte_rx_tag);
  VAR_2->vte_cdata.vte_rx_tag = ((void*)0);
 }

 if (VAR_2->vte_cdata.vte_tx_ring_tag != ((void*)0)) {
  if (VAR_2->vte_cdata.vte_tx_ring_paddr != 0)
   FUNC_2(VAR_2->vte_cdata.vte_tx_ring_tag,
       VAR_2->vte_cdata.vte_tx_ring_map);
  if (VAR_2->vte_cdata.vte_tx_ring != ((void*)0))
   FUNC_3(VAR_2->vte_cdata.vte_tx_ring_tag,
       VAR_2->vte_cdata.vte_tx_ring,
       VAR_2->vte_cdata.vte_tx_ring_map);
  VAR_2->vte_cdata.vte_tx_ring = ((void*)0);
  VAR_2->vte_cdata.vte_tx_ring_paddr = 0;
  FUNC_0(VAR_2->vte_cdata.vte_tx_ring_tag);
  VAR_2->vte_cdata.vte_tx_ring_tag = ((void*)0);
 }

 if (VAR_2->vte_cdata.vte_rx_ring_tag != ((void*)0)) {
  if (VAR_2->vte_cdata.vte_rx_ring_paddr != 0)
   FUNC_2(VAR_2->vte_cdata.vte_rx_ring_tag,
       VAR_2->vte_cdata.vte_rx_ring_map);
  if (VAR_2->vte_cdata.vte_rx_ring != ((void*)0))
   FUNC_3(VAR_2->vte_cdata.vte_rx_ring_tag,
       VAR_2->vte_cdata.vte_rx_ring,
       VAR_2->vte_cdata.vte_rx_ring_map);
  VAR_2->vte_cdata.vte_rx_ring = ((void*)0);
  VAR_2->vte_cdata.vte_rx_ring_paddr = 0;
  FUNC_0(VAR_2->vte_cdata.vte_rx_ring_tag);
  VAR_2->vte_cdata.vte_rx_ring_tag = ((void*)0);
 }
 if (VAR_2->vte_cdata.vte_buffer_tag != ((void*)0)) {
  FUNC_0(VAR_2->vte_cdata.vte_buffer_tag);
  VAR_2->vte_cdata.vte_buffer_tag = ((void*)0);
 }
 if (VAR_2->vte_cdata.vte_parent_tag != ((void*)0)) {
  FUNC_0(VAR_2->vte_cdata.vte_parent_tag);
  VAR_2->vte_cdata.vte_parent_tag = ((void*)0);
 }
}
