
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct alc_txdesc {int * tx_dmamap; } ;
struct TYPE_4__ {int * alc_parent_tag; int * alc_buffer_tag; int * alc_smb_tag; int alc_smb_map; int * alc_cmb_tag; int alc_cmb_map; int * alc_rr_ring_tag; int alc_rr_ring_map; int * alc_rx_ring_tag; int alc_rx_ring_map; int * alc_tx_ring_tag; int alc_tx_ring_map; int * alc_rx_tag; int * alc_rx_sparemap; struct alc_rxdesc* alc_rxdesc; int * alc_tx_tag; struct alc_txdesc* alc_txdesc; } ;
struct TYPE_3__ {scalar_t__ alc_tx_ring_paddr; scalar_t__ alc_rx_ring_paddr; scalar_t__ alc_rr_ring_paddr; scalar_t__ alc_cmb_paddr; scalar_t__ alc_smb_paddr; int * alc_smb; int * alc_cmb; int * alc_rr_ring; int * alc_rx_ring; int * alc_tx_ring; } ;
struct alc_softc {TYPE_2__ alc_cdata; TYPE_1__ alc_rdata; } ;
struct alc_rxdesc {int * rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct alc_softc *VAR_2)
{
 struct alc_txdesc *VAR_3;
 struct alc_rxdesc *VAR_4;
 int VAR_5;


 if (VAR_2->alc_cdata.alc_tx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_3 = &VAR_2->alc_cdata.alc_txdesc[VAR_5];
   if (VAR_3->tx_dmamap != ((void*)0)) {
    FUNC_1(VAR_2->alc_cdata.alc_tx_tag,
        VAR_3->tx_dmamap);
    VAR_3->tx_dmamap = ((void*)0);
   }
  }
  FUNC_0(VAR_2->alc_cdata.alc_tx_tag);
  VAR_2->alc_cdata.alc_tx_tag = ((void*)0);
 }

 if (VAR_2->alc_cdata.alc_rx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4 = &VAR_2->alc_cdata.alc_rxdesc[VAR_5];
   if (VAR_4->rx_dmamap != ((void*)0)) {
    FUNC_1(VAR_2->alc_cdata.alc_rx_tag,
        VAR_4->rx_dmamap);
    VAR_4->rx_dmamap = ((void*)0);
   }
  }
  if (VAR_2->alc_cdata.alc_rx_sparemap != ((void*)0)) {
   FUNC_1(VAR_2->alc_cdata.alc_rx_tag,
       VAR_2->alc_cdata.alc_rx_sparemap);
   VAR_2->alc_cdata.alc_rx_sparemap = ((void*)0);
  }
  FUNC_0(VAR_2->alc_cdata.alc_rx_tag);
  VAR_2->alc_cdata.alc_rx_tag = ((void*)0);
 }

 if (VAR_2->alc_cdata.alc_tx_ring_tag != ((void*)0)) {
  if (VAR_2->alc_rdata.alc_tx_ring_paddr != 0)
   FUNC_2(VAR_2->alc_cdata.alc_tx_ring_tag,
       VAR_2->alc_cdata.alc_tx_ring_map);
  if (VAR_2->alc_rdata.alc_tx_ring != ((void*)0))
   FUNC_3(VAR_2->alc_cdata.alc_tx_ring_tag,
       VAR_2->alc_rdata.alc_tx_ring,
       VAR_2->alc_cdata.alc_tx_ring_map);
  VAR_2->alc_rdata.alc_tx_ring_paddr = 0;
  VAR_2->alc_rdata.alc_tx_ring = ((void*)0);
  FUNC_0(VAR_2->alc_cdata.alc_tx_ring_tag);
  VAR_2->alc_cdata.alc_tx_ring_tag = ((void*)0);
 }

 if (VAR_2->alc_cdata.alc_rx_ring_tag != ((void*)0)) {
  if (VAR_2->alc_rdata.alc_rx_ring_paddr != 0)
   FUNC_2(VAR_2->alc_cdata.alc_rx_ring_tag,
       VAR_2->alc_cdata.alc_rx_ring_map);
  if (VAR_2->alc_rdata.alc_rx_ring != ((void*)0))
   FUNC_3(VAR_2->alc_cdata.alc_rx_ring_tag,
       VAR_2->alc_rdata.alc_rx_ring,
       VAR_2->alc_cdata.alc_rx_ring_map);
  VAR_2->alc_rdata.alc_rx_ring_paddr = 0;
  VAR_2->alc_rdata.alc_rx_ring = ((void*)0);
  FUNC_0(VAR_2->alc_cdata.alc_rx_ring_tag);
  VAR_2->alc_cdata.alc_rx_ring_tag = ((void*)0);
 }

 if (VAR_2->alc_cdata.alc_rr_ring_tag != ((void*)0)) {
  if (VAR_2->alc_rdata.alc_rr_ring_paddr != 0)
   FUNC_2(VAR_2->alc_cdata.alc_rr_ring_tag,
       VAR_2->alc_cdata.alc_rr_ring_map);
  if (VAR_2->alc_rdata.alc_rr_ring != ((void*)0))
   FUNC_3(VAR_2->alc_cdata.alc_rr_ring_tag,
       VAR_2->alc_rdata.alc_rr_ring,
       VAR_2->alc_cdata.alc_rr_ring_map);
  VAR_2->alc_rdata.alc_rr_ring_paddr = 0;
  VAR_2->alc_rdata.alc_rr_ring = ((void*)0);
  FUNC_0(VAR_2->alc_cdata.alc_rr_ring_tag);
  VAR_2->alc_cdata.alc_rr_ring_tag = ((void*)0);
 }

 if (VAR_2->alc_cdata.alc_cmb_tag != ((void*)0)) {
  if (VAR_2->alc_rdata.alc_cmb_paddr != 0)
   FUNC_2(VAR_2->alc_cdata.alc_cmb_tag,
       VAR_2->alc_cdata.alc_cmb_map);
  if (VAR_2->alc_rdata.alc_cmb != ((void*)0))
   FUNC_3(VAR_2->alc_cdata.alc_cmb_tag,
       VAR_2->alc_rdata.alc_cmb,
       VAR_2->alc_cdata.alc_cmb_map);
  VAR_2->alc_rdata.alc_cmb_paddr = 0;
  VAR_2->alc_rdata.alc_cmb = ((void*)0);
  FUNC_0(VAR_2->alc_cdata.alc_cmb_tag);
  VAR_2->alc_cdata.alc_cmb_tag = ((void*)0);
 }

 if (VAR_2->alc_cdata.alc_smb_tag != ((void*)0)) {
  if (VAR_2->alc_rdata.alc_smb_paddr != 0)
   FUNC_2(VAR_2->alc_cdata.alc_smb_tag,
       VAR_2->alc_cdata.alc_smb_map);
  if (VAR_2->alc_rdata.alc_smb != ((void*)0))
   FUNC_3(VAR_2->alc_cdata.alc_smb_tag,
       VAR_2->alc_rdata.alc_smb,
       VAR_2->alc_cdata.alc_smb_map);
  VAR_2->alc_rdata.alc_smb_paddr = 0;
  VAR_2->alc_rdata.alc_smb = ((void*)0);
  FUNC_0(VAR_2->alc_cdata.alc_smb_tag);
  VAR_2->alc_cdata.alc_smb_tag = ((void*)0);
 }
 if (VAR_2->alc_cdata.alc_buffer_tag != ((void*)0)) {
  FUNC_0(VAR_2->alc_cdata.alc_buffer_tag);
  VAR_2->alc_cdata.alc_buffer_tag = ((void*)0);
 }
 if (VAR_2->alc_cdata.alc_parent_tag != ((void*)0)) {
  FUNC_0(VAR_2->alc_cdata.alc_parent_tag);
  VAR_2->alc_cdata.alc_parent_tag = ((void*)0);
 }
}
