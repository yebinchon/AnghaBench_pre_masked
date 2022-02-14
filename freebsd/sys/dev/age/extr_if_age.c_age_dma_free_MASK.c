
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct age_txdesc {int * tx_dmamap; } ;
struct TYPE_4__ {int * age_parent_tag; int * age_buffer_tag; int * age_smb_block_tag; int age_smb_block_map; int * age_cmb_block_tag; int age_cmb_block_map; int * age_rr_ring_tag; int age_rr_ring_map; int * age_rx_ring_tag; int age_rx_ring_map; int * age_tx_ring_tag; int age_tx_ring_map; int * age_rx_tag; int * age_rx_sparemap; struct age_rxdesc* age_rxdesc; int * age_tx_tag; struct age_txdesc* age_txdesc; } ;
struct TYPE_3__ {scalar_t__ age_tx_ring_paddr; scalar_t__ age_rx_ring_paddr; scalar_t__ age_rr_ring_paddr; scalar_t__ age_cmb_block_paddr; scalar_t__ age_smb_block_paddr; int * age_smb_block; int * age_cmb_block; int * age_rr_ring; int * age_rx_ring; int * age_tx_ring; } ;
struct age_softc {TYPE_2__ age_cdata; TYPE_1__ age_rdata; } ;
struct age_rxdesc {int * rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct age_softc *VAR_2)
{
 struct age_txdesc *VAR_3;
 struct age_rxdesc *VAR_4;
 int VAR_5;


 if (VAR_2->age_cdata.age_tx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_3 = &VAR_2->age_cdata.age_txdesc[VAR_5];
   if (VAR_3->tx_dmamap != ((void*)0)) {
    FUNC_1(VAR_2->age_cdata.age_tx_tag,
        VAR_3->tx_dmamap);
    VAR_3->tx_dmamap = ((void*)0);
   }
  }
  FUNC_0(VAR_2->age_cdata.age_tx_tag);
  VAR_2->age_cdata.age_tx_tag = ((void*)0);
 }

 if (VAR_2->age_cdata.age_rx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4 = &VAR_2->age_cdata.age_rxdesc[VAR_5];
   if (VAR_4->rx_dmamap != ((void*)0)) {
    FUNC_1(VAR_2->age_cdata.age_rx_tag,
        VAR_4->rx_dmamap);
    VAR_4->rx_dmamap = ((void*)0);
   }
  }
  if (VAR_2->age_cdata.age_rx_sparemap != ((void*)0)) {
   FUNC_1(VAR_2->age_cdata.age_rx_tag,
       VAR_2->age_cdata.age_rx_sparemap);
   VAR_2->age_cdata.age_rx_sparemap = ((void*)0);
  }
  FUNC_0(VAR_2->age_cdata.age_rx_tag);
  VAR_2->age_cdata.age_rx_tag = ((void*)0);
 }

 if (VAR_2->age_cdata.age_tx_ring_tag != ((void*)0)) {
  if (VAR_2->age_rdata.age_tx_ring_paddr != 0)
   FUNC_2(VAR_2->age_cdata.age_tx_ring_tag,
       VAR_2->age_cdata.age_tx_ring_map);
  if (VAR_2->age_rdata.age_tx_ring != ((void*)0))
   FUNC_3(VAR_2->age_cdata.age_tx_ring_tag,
       VAR_2->age_rdata.age_tx_ring,
       VAR_2->age_cdata.age_tx_ring_map);
  VAR_2->age_rdata.age_tx_ring_paddr = 0;
  VAR_2->age_rdata.age_tx_ring = ((void*)0);
  FUNC_0(VAR_2->age_cdata.age_tx_ring_tag);
  VAR_2->age_cdata.age_tx_ring_tag = ((void*)0);
 }

 if (VAR_2->age_cdata.age_rx_ring_tag != ((void*)0)) {
  if (VAR_2->age_rdata.age_rx_ring_paddr != 0)
   FUNC_2(VAR_2->age_cdata.age_rx_ring_tag,
       VAR_2->age_cdata.age_rx_ring_map);
  if (VAR_2->age_rdata.age_rx_ring != ((void*)0))
   FUNC_3(VAR_2->age_cdata.age_rx_ring_tag,
       VAR_2->age_rdata.age_rx_ring,
       VAR_2->age_cdata.age_rx_ring_map);
  VAR_2->age_rdata.age_rx_ring_paddr = 0;
  VAR_2->age_rdata.age_rx_ring = ((void*)0);
  FUNC_0(VAR_2->age_cdata.age_rx_ring_tag);
  VAR_2->age_cdata.age_rx_ring_tag = ((void*)0);
 }

 if (VAR_2->age_cdata.age_rr_ring_tag != ((void*)0)) {
  if (VAR_2->age_rdata.age_rr_ring_paddr != 0)
   FUNC_2(VAR_2->age_cdata.age_rr_ring_tag,
       VAR_2->age_cdata.age_rr_ring_map);
  if (VAR_2->age_rdata.age_rr_ring != ((void*)0))
   FUNC_3(VAR_2->age_cdata.age_rr_ring_tag,
       VAR_2->age_rdata.age_rr_ring,
       VAR_2->age_cdata.age_rr_ring_map);
  VAR_2->age_rdata.age_rr_ring_paddr = 0;
  VAR_2->age_rdata.age_rr_ring = ((void*)0);
  FUNC_0(VAR_2->age_cdata.age_rr_ring_tag);
  VAR_2->age_cdata.age_rr_ring_tag = ((void*)0);
 }

 if (VAR_2->age_cdata.age_cmb_block_tag != ((void*)0)) {
  if (VAR_2->age_rdata.age_cmb_block_paddr != 0)
   FUNC_2(VAR_2->age_cdata.age_cmb_block_tag,
       VAR_2->age_cdata.age_cmb_block_map);
  if (VAR_2->age_rdata.age_cmb_block != ((void*)0))
   FUNC_3(VAR_2->age_cdata.age_cmb_block_tag,
       VAR_2->age_rdata.age_cmb_block,
       VAR_2->age_cdata.age_cmb_block_map);
  VAR_2->age_rdata.age_cmb_block_paddr = 0;
  VAR_2->age_rdata.age_cmb_block = ((void*)0);
  FUNC_0(VAR_2->age_cdata.age_cmb_block_tag);
  VAR_2->age_cdata.age_cmb_block_tag = ((void*)0);
 }

 if (VAR_2->age_cdata.age_smb_block_tag != ((void*)0)) {
  if (VAR_2->age_rdata.age_smb_block_paddr != 0)
   FUNC_2(VAR_2->age_cdata.age_smb_block_tag,
       VAR_2->age_cdata.age_smb_block_map);
  if (VAR_2->age_rdata.age_smb_block != ((void*)0))
   FUNC_3(VAR_2->age_cdata.age_smb_block_tag,
       VAR_2->age_rdata.age_smb_block,
       VAR_2->age_cdata.age_smb_block_map);
  VAR_2->age_rdata.age_smb_block_paddr = 0;
  VAR_2->age_rdata.age_smb_block = ((void*)0);
  FUNC_0(VAR_2->age_cdata.age_smb_block_tag);
  VAR_2->age_cdata.age_smb_block_tag = ((void*)0);
 }

 if (VAR_2->age_cdata.age_buffer_tag != ((void*)0)) {
  FUNC_0(VAR_2->age_cdata.age_buffer_tag);
  VAR_2->age_cdata.age_buffer_tag = ((void*)0);
 }
 if (VAR_2->age_cdata.age_parent_tag != ((void*)0)) {
  FUNC_0(VAR_2->age_cdata.age_parent_tag);
  VAR_2->age_cdata.age_parent_tag = ((void*)0);
 }
}
