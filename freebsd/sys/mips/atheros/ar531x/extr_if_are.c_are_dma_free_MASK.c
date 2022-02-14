
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct are_txdesc {int * tx_dmamap; } ;
struct TYPE_4__ {int * are_parent_tag; int * are_rx_tag; int * are_rx_sparemap; struct are_rxdesc* are_rxdesc; int * are_tx_tag; struct are_txdesc* are_txdesc; int * are_rx_ring_tag; int are_rx_ring_map; int * are_tx_ring_tag; int are_tx_ring_map; } ;
struct TYPE_3__ {scalar_t__ are_rx_ring_paddr; int * are_rx_ring; scalar_t__ are_tx_ring_paddr; int * are_tx_ring; } ;
struct are_softc {TYPE_2__ are_cdata; TYPE_1__ are_rdata; } ;
struct are_rxdesc {int * rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct are_softc *VAR_2)
{
 struct are_txdesc *VAR_3;
 struct are_rxdesc *VAR_4;
 int VAR_5;


 if (VAR_2->are_cdata.are_tx_ring_tag) {
  if (VAR_2->are_rdata.are_tx_ring_paddr)
   FUNC_2(VAR_2->are_cdata.are_tx_ring_tag,
       VAR_2->are_cdata.are_tx_ring_map);
  if (VAR_2->are_rdata.are_tx_ring)
   FUNC_3(VAR_2->are_cdata.are_tx_ring_tag,
       VAR_2->are_rdata.are_tx_ring,
       VAR_2->are_cdata.are_tx_ring_map);
  VAR_2->are_rdata.are_tx_ring = ((void*)0);
  VAR_2->are_rdata.are_tx_ring_paddr = 0;
  FUNC_0(VAR_2->are_cdata.are_tx_ring_tag);
  VAR_2->are_cdata.are_tx_ring_tag = ((void*)0);
 }

 if (VAR_2->are_cdata.are_rx_ring_tag) {
  if (VAR_2->are_rdata.are_rx_ring_paddr)
   FUNC_2(VAR_2->are_cdata.are_rx_ring_tag,
       VAR_2->are_cdata.are_rx_ring_map);
  if (VAR_2->are_rdata.are_rx_ring)
   FUNC_3(VAR_2->are_cdata.are_rx_ring_tag,
       VAR_2->are_rdata.are_rx_ring,
       VAR_2->are_cdata.are_rx_ring_map);
  VAR_2->are_rdata.are_rx_ring = ((void*)0);
  VAR_2->are_rdata.are_rx_ring_paddr = 0;
  FUNC_0(VAR_2->are_cdata.are_rx_ring_tag);
  VAR_2->are_cdata.are_rx_ring_tag = ((void*)0);
 }

 if (VAR_2->are_cdata.are_tx_tag) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_3 = &VAR_2->are_cdata.are_txdesc[VAR_5];
   if (VAR_3->tx_dmamap) {
    FUNC_1(VAR_2->are_cdata.are_tx_tag,
        VAR_3->tx_dmamap);
    VAR_3->tx_dmamap = ((void*)0);
   }
  }
  FUNC_0(VAR_2->are_cdata.are_tx_tag);
  VAR_2->are_cdata.are_tx_tag = ((void*)0);
 }

 if (VAR_2->are_cdata.are_rx_tag) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4 = &VAR_2->are_cdata.are_rxdesc[VAR_5];
   if (VAR_4->rx_dmamap) {
    FUNC_1(VAR_2->are_cdata.are_rx_tag,
        VAR_4->rx_dmamap);
    VAR_4->rx_dmamap = ((void*)0);
   }
  }
  if (VAR_2->are_cdata.are_rx_sparemap) {
   FUNC_1(VAR_2->are_cdata.are_rx_tag,
       VAR_2->are_cdata.are_rx_sparemap);
   VAR_2->are_cdata.are_rx_sparemap = 0;
  }
  FUNC_0(VAR_2->are_cdata.are_rx_tag);
  VAR_2->are_cdata.are_rx_tag = ((void*)0);
 }

 if (VAR_2->are_cdata.are_parent_tag) {
  FUNC_0(VAR_2->are_cdata.are_parent_tag);
  VAR_2->are_cdata.are_parent_tag = ((void*)0);
 }
}
