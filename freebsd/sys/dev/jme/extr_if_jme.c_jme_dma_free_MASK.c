
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jme_txdesc {int * tx_dmamap; } ;
struct TYPE_4__ {int * jme_ring_tag; int * jme_buffer_tag; int * jme_ssb_tag; int jme_ssb_map; int * jme_rx_tag; int * jme_rx_sparemap; struct jme_rxdesc* jme_rxdesc; int * jme_tx_tag; struct jme_txdesc* jme_txdesc; int * jme_rx_ring_tag; int jme_rx_ring_map; int * jme_tx_ring_tag; int jme_tx_ring_map; } ;
struct TYPE_3__ {scalar_t__ jme_ssb_block_paddr; int * jme_ssb_block; scalar_t__ jme_rx_ring_paddr; int * jme_rx_ring; scalar_t__ jme_tx_ring_paddr; int * jme_tx_ring; } ;
struct jme_softc {TYPE_2__ jme_cdata; TYPE_1__ jme_rdata; } ;
struct jme_rxdesc {int * rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct jme_softc *VAR_2)
{
 struct jme_txdesc *VAR_3;
 struct jme_rxdesc *VAR_4;
 int VAR_5;


 if (VAR_2->jme_cdata.jme_tx_ring_tag != ((void*)0)) {
  if (VAR_2->jme_rdata.jme_tx_ring_paddr)
   FUNC_2(VAR_2->jme_cdata.jme_tx_ring_tag,
       VAR_2->jme_cdata.jme_tx_ring_map);
  if (VAR_2->jme_rdata.jme_tx_ring)
   FUNC_3(VAR_2->jme_cdata.jme_tx_ring_tag,
       VAR_2->jme_rdata.jme_tx_ring,
       VAR_2->jme_cdata.jme_tx_ring_map);
  VAR_2->jme_rdata.jme_tx_ring = ((void*)0);
  VAR_2->jme_rdata.jme_tx_ring_paddr = 0;
  FUNC_0(VAR_2->jme_cdata.jme_tx_ring_tag);
  VAR_2->jme_cdata.jme_tx_ring_tag = ((void*)0);
 }

 if (VAR_2->jme_cdata.jme_rx_ring_tag != ((void*)0)) {
  if (VAR_2->jme_rdata.jme_rx_ring_paddr)
   FUNC_2(VAR_2->jme_cdata.jme_rx_ring_tag,
       VAR_2->jme_cdata.jme_rx_ring_map);
  if (VAR_2->jme_rdata.jme_rx_ring)
   FUNC_3(VAR_2->jme_cdata.jme_rx_ring_tag,
       VAR_2->jme_rdata.jme_rx_ring,
       VAR_2->jme_cdata.jme_rx_ring_map);
  VAR_2->jme_rdata.jme_rx_ring = ((void*)0);
  VAR_2->jme_rdata.jme_rx_ring_paddr = 0;
  FUNC_0(VAR_2->jme_cdata.jme_rx_ring_tag);
  VAR_2->jme_cdata.jme_rx_ring_tag = ((void*)0);
 }

 if (VAR_2->jme_cdata.jme_tx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_3 = &VAR_2->jme_cdata.jme_txdesc[VAR_5];
   if (VAR_3->tx_dmamap != ((void*)0)) {
    FUNC_1(VAR_2->jme_cdata.jme_tx_tag,
        VAR_3->tx_dmamap);
    VAR_3->tx_dmamap = ((void*)0);
   }
  }
  FUNC_0(VAR_2->jme_cdata.jme_tx_tag);
  VAR_2->jme_cdata.jme_tx_tag = ((void*)0);
 }

 if (VAR_2->jme_cdata.jme_rx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4 = &VAR_2->jme_cdata.jme_rxdesc[VAR_5];
   if (VAR_4->rx_dmamap != ((void*)0)) {
    FUNC_1(VAR_2->jme_cdata.jme_rx_tag,
        VAR_4->rx_dmamap);
    VAR_4->rx_dmamap = ((void*)0);
   }
  }
  if (VAR_2->jme_cdata.jme_rx_sparemap != ((void*)0)) {
   FUNC_1(VAR_2->jme_cdata.jme_rx_tag,
       VAR_2->jme_cdata.jme_rx_sparemap);
   VAR_2->jme_cdata.jme_rx_sparemap = ((void*)0);
  }
  FUNC_0(VAR_2->jme_cdata.jme_rx_tag);
  VAR_2->jme_cdata.jme_rx_tag = ((void*)0);
 }


 if (VAR_2->jme_cdata.jme_ssb_tag != ((void*)0)) {
  if (VAR_2->jme_rdata.jme_ssb_block_paddr)
   FUNC_2(VAR_2->jme_cdata.jme_ssb_tag,
       VAR_2->jme_cdata.jme_ssb_map);
  if (VAR_2->jme_rdata.jme_ssb_block)
   FUNC_3(VAR_2->jme_cdata.jme_ssb_tag,
       VAR_2->jme_rdata.jme_ssb_block,
       VAR_2->jme_cdata.jme_ssb_map);
  VAR_2->jme_rdata.jme_ssb_block = ((void*)0);
  VAR_2->jme_rdata.jme_ssb_block_paddr = 0;
  FUNC_0(VAR_2->jme_cdata.jme_ssb_tag);
  VAR_2->jme_cdata.jme_ssb_tag = ((void*)0);
 }

 if (VAR_2->jme_cdata.jme_buffer_tag != ((void*)0)) {
  FUNC_0(VAR_2->jme_cdata.jme_buffer_tag);
  VAR_2->jme_cdata.jme_buffer_tag = ((void*)0);
 }
 if (VAR_2->jme_cdata.jme_ring_tag != ((void*)0)) {
  FUNC_0(VAR_2->jme_cdata.jme_ring_tag);
  VAR_2->jme_cdata.jme_ring_tag = ((void*)0);
 }
}
