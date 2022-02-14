
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dma_txd_busaddr; scalar_t__ dma_txs_busaddr; scalar_t__ dma_rxd_busaddr; int * dma_parent_tag; int * rxd_base_dma; int * dma_rxd_tag; int dma_rxd_map; int * txs_base; int * dma_txs_tag; int dma_txs_map; int * txd_base; int * dma_txd_tag; int dma_txd_map; } ;
typedef TYPE_1__ ae_softc_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_3(ae_softc_t *VAR_0)
{

 if (VAR_0->dma_txd_tag != ((void*)0)) {
  if (VAR_0->dma_txd_busaddr != 0)
   FUNC_1(VAR_0->dma_txd_tag, VAR_0->dma_txd_map);
  if (VAR_0->txd_base != ((void*)0))
   FUNC_2(VAR_0->dma_txd_tag, VAR_0->txd_base,
       VAR_0->dma_txd_map);
  FUNC_0(VAR_0->dma_txd_tag);
  VAR_0->dma_txd_tag = ((void*)0);
  VAR_0->txd_base = ((void*)0);
  VAR_0->dma_txd_busaddr = 0;
 }
 if (VAR_0->dma_txs_tag != ((void*)0)) {
  if (VAR_0->dma_txs_busaddr != 0)
   FUNC_1(VAR_0->dma_txs_tag, VAR_0->dma_txs_map);
  if (VAR_0->txs_base != ((void*)0))
   FUNC_2(VAR_0->dma_txs_tag, VAR_0->txs_base,
       VAR_0->dma_txs_map);
  FUNC_0(VAR_0->dma_txs_tag);
  VAR_0->dma_txs_tag = ((void*)0);
  VAR_0->txs_base = ((void*)0);
  VAR_0->dma_txs_busaddr = 0;
 }
 if (VAR_0->dma_rxd_tag != ((void*)0)) {
  if (VAR_0->dma_rxd_busaddr != 0)
   FUNC_1(VAR_0->dma_rxd_tag, VAR_0->dma_rxd_map);
  if (VAR_0->rxd_base_dma != ((void*)0))
   FUNC_2(VAR_0->dma_rxd_tag, VAR_0->rxd_base_dma,
       VAR_0->dma_rxd_map);
  FUNC_0(VAR_0->dma_rxd_tag);
  VAR_0->dma_rxd_tag = ((void*)0);
  VAR_0->rxd_base_dma = ((void*)0);
  VAR_0->dma_rxd_busaddr = 0;
 }
 if (VAR_0->dma_parent_tag != ((void*)0)) {
  FUNC_0(VAR_0->dma_parent_tag);
  VAR_0->dma_parent_tag = ((void*)0);
 }
}
