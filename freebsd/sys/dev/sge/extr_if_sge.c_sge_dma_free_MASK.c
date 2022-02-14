
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txdesc {int * tx_dmamap; } ;
struct sge_list_data {scalar_t__ sge_rx_paddr; scalar_t__ sge_tx_paddr; int * sge_tx_ring; int * sge_rx_ring; } ;
struct sge_chain_data {int * sge_tag; int * sge_txmbuf_tag; struct sge_txdesc* sge_txdesc; int * sge_rxmbuf_tag; int * sge_rx_spare_map; struct sge_rxdesc* sge_rxdesc; int * sge_tx_tag; int sge_tx_dmamap; int * sge_rx_tag; int sge_rx_dmamap; } ;
struct sge_softc {struct sge_list_data sge_ldata; struct sge_chain_data sge_cdata; } ;
struct sge_rxdesc {int * rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct sge_softc *VAR_2)
{
 struct sge_chain_data *VAR_3;
 struct sge_list_data *VAR_4;
 struct sge_rxdesc *VAR_5;
 struct sge_txdesc *VAR_6;
 int VAR_7;

 VAR_3 = &VAR_2->sge_cdata;
 VAR_4 = &VAR_2->sge_ldata;

 if (VAR_3->sge_rx_tag != ((void*)0)) {
  if (VAR_4->sge_rx_paddr != 0)
   FUNC_2(VAR_3->sge_rx_tag, VAR_3->sge_rx_dmamap);
  if (VAR_4->sge_rx_ring != ((void*)0))
   FUNC_3(VAR_3->sge_rx_tag, VAR_4->sge_rx_ring,
       VAR_3->sge_rx_dmamap);
  VAR_4->sge_rx_ring = ((void*)0);
  VAR_4->sge_rx_paddr = 0;
  FUNC_0(VAR_3->sge_rx_tag);
  VAR_3->sge_rx_tag = ((void*)0);
 }

 if (VAR_3->sge_tx_tag != ((void*)0)) {
  if (VAR_4->sge_tx_paddr != 0)
   FUNC_2(VAR_3->sge_tx_tag, VAR_3->sge_tx_dmamap);
  if (VAR_4->sge_tx_ring != ((void*)0))
   FUNC_3(VAR_3->sge_tx_tag, VAR_4->sge_tx_ring,
       VAR_3->sge_tx_dmamap);
  VAR_4->sge_tx_ring = ((void*)0);
  VAR_4->sge_tx_paddr = 0;
  FUNC_0(VAR_3->sge_tx_tag);
  VAR_3->sge_tx_tag = ((void*)0);
 }

 if (VAR_3->sge_rxmbuf_tag != ((void*)0)) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   VAR_5 = &VAR_3->sge_rxdesc[VAR_7];
   if (VAR_5->rx_dmamap != ((void*)0)) {
    FUNC_1(VAR_3->sge_rxmbuf_tag,
        VAR_5->rx_dmamap);
    VAR_5->rx_dmamap = ((void*)0);
   }
  }
  if (VAR_3->sge_rx_spare_map != ((void*)0)) {
   FUNC_1(VAR_3->sge_rxmbuf_tag,
       VAR_3->sge_rx_spare_map);
   VAR_3->sge_rx_spare_map = ((void*)0);
  }
  FUNC_0(VAR_3->sge_rxmbuf_tag);
  VAR_3->sge_rxmbuf_tag = ((void*)0);
 }

 if (VAR_3->sge_txmbuf_tag != ((void*)0)) {
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   VAR_6 = &VAR_3->sge_txdesc[VAR_7];
   if (VAR_6->tx_dmamap != ((void*)0)) {
    FUNC_1(VAR_3->sge_txmbuf_tag,
        VAR_6->tx_dmamap);
    VAR_6->tx_dmamap = ((void*)0);
   }
  }
  FUNC_0(VAR_3->sge_txmbuf_tag);
  VAR_3->sge_txmbuf_tag = ((void*)0);
 }
 if (VAR_3->sge_tag != ((void*)0))
  FUNC_0(VAR_3->sge_tag);
 VAR_3->sge_tag = ((void*)0);
}
