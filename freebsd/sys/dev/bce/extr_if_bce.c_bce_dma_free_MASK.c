
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bce_softc {scalar_t__ status_block_paddr; scalar_t__ stats_block_paddr; int ctx_pages; scalar_t__* ctx_paddr; int tx_pages; scalar_t__* tx_bd_chain_paddr; int rx_pages; scalar_t__* rx_bd_chain_paddr; int pg_pages; scalar_t__* pg_bd_chain_paddr; int * parent_tag; int * pg_mbuf_tag; int ** pg_mbuf_map; int * rx_mbuf_tag; int ** rx_mbuf_map; int * tx_mbuf_tag; int ** tx_mbuf_map; int * pg_bd_chain_tag; int ** pg_bd_chain; int ** pg_bd_chain_map; int * rx_bd_chain_tag; int ** rx_bd_chain; int ** rx_bd_chain_map; int * tx_bd_chain_tag; int ** tx_bd_chain; int ** tx_bd_chain_map; int * ctx_tag; int ** ctx_block; int ** ctx_map; int * stats_tag; int * stats_block; int * stats_map; int * status_tag; int * status_block; int * status_map; } ;


 scalar_t__ FUNC_0 (struct bce_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_7(struct bce_softc *VAR_9)
{
 int VAR_10;

 FUNC_1(VAR_2 | VAR_3 | VAR_1);


 if (VAR_9->status_block_paddr != 0) {
  FUNC_5(
      VAR_9->status_tag,
      VAR_9->status_map);
  VAR_9->status_block_paddr = 0;
 }

 if (VAR_9->status_block != ((void*)0)) {
  FUNC_6(
     VAR_9->status_tag,
      VAR_9->status_block,
      VAR_9->status_map);
  VAR_9->status_block = ((void*)0);
 }

 if (VAR_9->status_tag != ((void*)0)) {
  FUNC_3(VAR_9->status_tag);
  VAR_9->status_tag = ((void*)0);
 }



 if (VAR_9->stats_block_paddr != 0) {
  FUNC_5(
      VAR_9->stats_tag,
      VAR_9->stats_map);
  VAR_9->stats_block_paddr = 0;
 }

 if (VAR_9->stats_block != ((void*)0)) {
  FUNC_6(
      VAR_9->stats_tag,
      VAR_9->stats_block,
      VAR_9->stats_map);
  VAR_9->stats_block = ((void*)0);
 }

 if (VAR_9->stats_tag != ((void*)0)) {
  FUNC_3(VAR_9->stats_tag);
  VAR_9->stats_tag = ((void*)0);
 }



 if (FUNC_0(VAR_9) == VAR_0) {
  for (VAR_10 = 0; VAR_10 < VAR_9->ctx_pages; VAR_10++ ) {
   if (VAR_9->ctx_paddr[VAR_10] != 0) {
    FUNC_5(
        VAR_9->ctx_tag,
        VAR_9->ctx_map[VAR_10]);
    VAR_9->ctx_paddr[VAR_10] = 0;
   }

   if (VAR_9->ctx_block[VAR_10] != ((void*)0)) {
    FUNC_6(
        VAR_9->ctx_tag,
        VAR_9->ctx_block[VAR_10],
        VAR_9->ctx_map[VAR_10]);
    VAR_9->ctx_block[VAR_10] = ((void*)0);
   }
  }


  if (VAR_9->ctx_tag != ((void*)0)) {
   FUNC_3(VAR_9->ctx_tag);
   VAR_9->ctx_tag = ((void*)0);
  }
 }



 for (VAR_10 = 0; VAR_10 < VAR_9->tx_pages; VAR_10++ ) {
  if (VAR_9->tx_bd_chain_paddr[VAR_10] != 0) {
   FUNC_5(
       VAR_9->tx_bd_chain_tag,
       VAR_9->tx_bd_chain_map[VAR_10]);
   VAR_9->tx_bd_chain_paddr[VAR_10] = 0;
  }

  if (VAR_9->tx_bd_chain[VAR_10] != ((void*)0)) {
   FUNC_6(
       VAR_9->tx_bd_chain_tag,
       VAR_9->tx_bd_chain[VAR_10],
       VAR_9->tx_bd_chain_map[VAR_10]);
   VAR_9->tx_bd_chain[VAR_10] = ((void*)0);
  }
 }


 if (VAR_9->tx_bd_chain_tag != ((void*)0)) {
  FUNC_3(VAR_9->tx_bd_chain_tag);
  VAR_9->tx_bd_chain_tag = ((void*)0);
 }



 for (VAR_10 = 0; VAR_10 < VAR_9->rx_pages; VAR_10++ ) {
  if (VAR_9->rx_bd_chain_paddr[VAR_10] != 0) {
   FUNC_5(
       VAR_9->rx_bd_chain_tag,
       VAR_9->rx_bd_chain_map[VAR_10]);
   VAR_9->rx_bd_chain_paddr[VAR_10] = 0;
  }

  if (VAR_9->rx_bd_chain[VAR_10] != ((void*)0)) {
   FUNC_6(
       VAR_9->rx_bd_chain_tag,
       VAR_9->rx_bd_chain[VAR_10],
       VAR_9->rx_bd_chain_map[VAR_10]);
   VAR_9->rx_bd_chain[VAR_10] = ((void*)0);
  }
 }


 if (VAR_9->rx_bd_chain_tag != ((void*)0)) {
  FUNC_3(VAR_9->rx_bd_chain_tag);
  VAR_9->rx_bd_chain_tag = ((void*)0);
 }



 if (VAR_8 == VAR_7) {
  for (VAR_10 = 0; VAR_10 < VAR_9->pg_pages; VAR_10++ ) {
   if (VAR_9->pg_bd_chain_paddr[VAR_10] != 0) {
    FUNC_5(
        VAR_9->pg_bd_chain_tag,
        VAR_9->pg_bd_chain_map[VAR_10]);
    VAR_9->pg_bd_chain_paddr[VAR_10] = 0;
   }

   if (VAR_9->pg_bd_chain[VAR_10] != ((void*)0)) {
    FUNC_6(
        VAR_9->pg_bd_chain_tag,
        VAR_9->pg_bd_chain[VAR_10],
        VAR_9->pg_bd_chain_map[VAR_10]);
    VAR_9->pg_bd_chain[VAR_10] = ((void*)0);
   }
  }


  if (VAR_9->pg_bd_chain_tag != ((void*)0)) {
   FUNC_3(VAR_9->pg_bd_chain_tag);
   VAR_9->pg_bd_chain_tag = ((void*)0);
  }
 }



 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  if (VAR_9->tx_mbuf_map[VAR_10] != ((void*)0)) {
   FUNC_5(VAR_9->tx_mbuf_tag,
       VAR_9->tx_mbuf_map[VAR_10]);
   FUNC_4(VAR_9->tx_mbuf_tag,
        VAR_9->tx_mbuf_map[VAR_10]);
   VAR_9->tx_mbuf_map[VAR_10] = ((void*)0);
  }
 }


 if (VAR_9->tx_mbuf_tag != ((void*)0)) {
  FUNC_3(VAR_9->tx_mbuf_tag);
  VAR_9->tx_mbuf_tag = ((void*)0);
 }


 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (VAR_9->rx_mbuf_map[VAR_10] != ((void*)0)) {
   FUNC_5(VAR_9->rx_mbuf_tag,
       VAR_9->rx_mbuf_map[VAR_10]);
   FUNC_4(VAR_9->rx_mbuf_tag,
        VAR_9->rx_mbuf_map[VAR_10]);
   VAR_9->rx_mbuf_map[VAR_10] = ((void*)0);
  }
 }


 if (VAR_9->rx_mbuf_tag != ((void*)0)) {
  FUNC_3(VAR_9->rx_mbuf_tag);
  VAR_9->rx_mbuf_tag = ((void*)0);
 }


 if (VAR_8 == VAR_7) {
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (VAR_9->pg_mbuf_map[VAR_10] != ((void*)0)) {
    FUNC_5(VAR_9->pg_mbuf_tag,
        VAR_9->pg_mbuf_map[VAR_10]);
    FUNC_4(VAR_9->pg_mbuf_tag,
        VAR_9->pg_mbuf_map[VAR_10]);
    VAR_9->pg_mbuf_map[VAR_10] = ((void*)0);
   }
  }


  if (VAR_9->pg_mbuf_tag != ((void*)0)) {
   FUNC_3(VAR_9->pg_mbuf_tag);
   VAR_9->pg_mbuf_tag = ((void*)0);
  }
 }


 if (VAR_9->parent_tag != ((void*)0)) {
  FUNC_3(VAR_9->parent_tag);
  VAR_9->parent_tag = ((void*)0);
 }

 FUNC_2(VAR_2 | VAR_3 | VAR_1);
}
