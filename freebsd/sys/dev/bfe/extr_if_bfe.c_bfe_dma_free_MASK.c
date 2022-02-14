
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfe_tx_data {int * bfe_map; } ;
struct bfe_softc {scalar_t__ bfe_tx_dma; scalar_t__ bfe_rx_dma; int * bfe_parent_tag; int * bfe_rxmbuf_tag; int * bfe_rx_sparemap; struct bfe_rx_data* bfe_rx_ring; int * bfe_txmbuf_tag; struct bfe_tx_data* bfe_tx_ring; int * bfe_rx_tag; int * bfe_rx_list; int bfe_rx_map; int * bfe_tx_tag; int * bfe_tx_list; int bfe_tx_map; } ;
struct bfe_rx_data {int * bfe_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfe_softc *VAR_2)
{
 struct bfe_tx_data *VAR_3;
 struct bfe_rx_data *VAR_4;
 int VAR_5;


 if (VAR_2->bfe_tx_tag != ((void*)0)) {
  if (VAR_2->bfe_tx_dma != 0)
   FUNC_2(VAR_2->bfe_tx_tag, VAR_2->bfe_tx_map);
  if (VAR_2->bfe_tx_list != ((void*)0))
   FUNC_3(VAR_2->bfe_tx_tag, VAR_2->bfe_tx_list,
       VAR_2->bfe_tx_map);
  VAR_2->bfe_tx_dma = 0;
  VAR_2->bfe_tx_list = ((void*)0);
  FUNC_0(VAR_2->bfe_tx_tag);
  VAR_2->bfe_tx_tag = ((void*)0);
 }


 if (VAR_2->bfe_rx_tag != ((void*)0)) {
  if (VAR_2->bfe_rx_dma != 0)
   FUNC_2(VAR_2->bfe_rx_tag, VAR_2->bfe_rx_map);
  if (VAR_2->bfe_rx_list != ((void*)0))
   FUNC_3(VAR_2->bfe_rx_tag, VAR_2->bfe_rx_list,
       VAR_2->bfe_rx_map);
  VAR_2->bfe_rx_dma = 0;
  VAR_2->bfe_rx_list = ((void*)0);
  FUNC_0(VAR_2->bfe_rx_tag);
  VAR_2->bfe_rx_tag = ((void*)0);
 }


 if (VAR_2->bfe_txmbuf_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_3 = &VAR_2->bfe_tx_ring[VAR_5];
   if (VAR_3->bfe_map != ((void*)0)) {
    FUNC_1(VAR_2->bfe_txmbuf_tag,
        VAR_3->bfe_map);
    VAR_3->bfe_map = ((void*)0);
   }
  }
  FUNC_0(VAR_2->bfe_txmbuf_tag);
  VAR_2->bfe_txmbuf_tag = ((void*)0);
 }


 if (VAR_2->bfe_rxmbuf_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4 = &VAR_2->bfe_rx_ring[VAR_5];
   if (VAR_4->bfe_map != ((void*)0)) {
    FUNC_1(VAR_2->bfe_rxmbuf_tag,
        VAR_4->bfe_map);
    VAR_4->bfe_map = ((void*)0);
   }
  }
  if (VAR_2->bfe_rx_sparemap != ((void*)0)) {
   FUNC_1(VAR_2->bfe_rxmbuf_tag,
       VAR_2->bfe_rx_sparemap);
   VAR_2->bfe_rx_sparemap = ((void*)0);
  }
  FUNC_0(VAR_2->bfe_rxmbuf_tag);
  VAR_2->bfe_rxmbuf_tag = ((void*)0);
 }

 if (VAR_2->bfe_parent_tag != ((void*)0)) {
  FUNC_0(VAR_2->bfe_parent_tag);
  VAR_2->bfe_parent_tag = ((void*)0);
 }
}
