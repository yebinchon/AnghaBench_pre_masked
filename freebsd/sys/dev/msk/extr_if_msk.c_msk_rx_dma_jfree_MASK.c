
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msk_rxdesc {int * rx_dmamap; } ;
struct TYPE_4__ {int * msk_jumbo_rx_tag; int * msk_jumbo_rx_sparemap; struct msk_rxdesc* msk_jumbo_rxdesc; int * msk_jumbo_rx_ring_tag; int msk_jumbo_rx_ring_map; } ;
struct TYPE_3__ {scalar_t__ msk_jumbo_rx_ring_paddr; int * msk_jumbo_rx_ring; } ;
struct msk_if_softc {TYPE_2__ msk_cdata; TYPE_1__ msk_rdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct msk_if_softc *VAR_1)
{
 struct msk_rxdesc *VAR_2;
 int VAR_3;


 if (VAR_1->msk_cdata.msk_jumbo_rx_ring_tag) {
  if (VAR_1->msk_rdata.msk_jumbo_rx_ring_paddr)
   FUNC_2(VAR_1->msk_cdata.msk_jumbo_rx_ring_tag,
       VAR_1->msk_cdata.msk_jumbo_rx_ring_map);
  if (VAR_1->msk_rdata.msk_jumbo_rx_ring)
   FUNC_3(VAR_1->msk_cdata.msk_jumbo_rx_ring_tag,
       VAR_1->msk_rdata.msk_jumbo_rx_ring,
       VAR_1->msk_cdata.msk_jumbo_rx_ring_map);
  VAR_1->msk_rdata.msk_jumbo_rx_ring = ((void*)0);
  VAR_1->msk_rdata.msk_jumbo_rx_ring_paddr = 0;
  FUNC_0(VAR_1->msk_cdata.msk_jumbo_rx_ring_tag);
  VAR_1->msk_cdata.msk_jumbo_rx_ring_tag = ((void*)0);
 }

 if (VAR_1->msk_cdata.msk_jumbo_rx_tag) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   VAR_2 = &VAR_1->msk_cdata.msk_jumbo_rxdesc[VAR_3];
   if (VAR_2->rx_dmamap) {
    FUNC_1(
        VAR_1->msk_cdata.msk_jumbo_rx_tag,
        VAR_2->rx_dmamap);
    VAR_2->rx_dmamap = ((void*)0);
   }
  }
  if (VAR_1->msk_cdata.msk_jumbo_rx_sparemap) {
   FUNC_1(VAR_1->msk_cdata.msk_jumbo_rx_tag,
       VAR_1->msk_cdata.msk_jumbo_rx_sparemap);
   VAR_1->msk_cdata.msk_jumbo_rx_sparemap = 0;
  }
  FUNC_0(VAR_1->msk_cdata.msk_jumbo_rx_tag);
  VAR_1->msk_cdata.msk_jumbo_rx_tag = ((void*)0);
 }
}
