
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfe_tx_data {int * bfe_map; int * bfe_mbuf; } ;
struct bfe_softc {int bfe_dev; int bfe_rxmbuf_tag; struct bfe_rx_data* bfe_rx_ring; int * bfe_rx_sparemap; int bfe_txmbuf_tag; struct bfe_tx_data* bfe_tx_ring; void* bfe_rx_dma; int bfe_rx_list; int bfe_rx_map; int bfe_rx_tag; void* bfe_tx_dma; int bfe_tx_list; int bfe_tx_map; int bfe_tx_tag; int bfe_parent_tag; } ;
struct bfe_rx_data {int * bfe_map; scalar_t__ bfe_ctrl; int * bfe_mbuf; } ;
struct bfe_dmamap_arg {scalar_t__ bfe_busaddr; } ;


 void* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int ,int ,int ,int,int ,struct bfe_dmamap_arg*,int ) ;
 int FUNC_4 (int ,void*,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(struct bfe_softc *VAR_16)
{
 struct bfe_dmamap_arg VAR_17;
 struct bfe_rx_data *VAR_18;
 struct bfe_tx_data *VAR_19;
 int VAR_20, VAR_21;





 VAR_20 = FUNC_1(FUNC_5(VAR_16->bfe_dev),
     1, 0,
     VAR_0,
     VAR_12,
     ((void*)0), ((void*)0),
     VAR_13,
     0,
     VAR_13,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->bfe_parent_tag);
 if (VAR_20 != 0) {
  FUNC_6(VAR_16->bfe_dev, "cannot create parent DMA tag.\n");
  goto fail;
 }


 VAR_20 = FUNC_1(VAR_16->bfe_parent_tag,
     VAR_7, 0,
     VAR_12,
     VAR_12,
     ((void*)0), ((void*)0),
     VAR_6,
     1,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->bfe_tx_tag);
 if (VAR_20 != 0) {
  FUNC_6(VAR_16->bfe_dev, "cannot create Tx ring DMA tag.\n");
  goto fail;
 }


 VAR_20 = FUNC_1(VAR_16->bfe_parent_tag,
     VAR_4, 0,
     VAR_12,
     VAR_12,
     ((void*)0), ((void*)0),
     VAR_3,
     1,
     VAR_3,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->bfe_rx_tag);
 if (VAR_20 != 0) {
  FUNC_6(VAR_16->bfe_dev, "cannot create Rx ring DMA tag.\n");
  goto fail;
 }


 VAR_20 = FUNC_1(VAR_16->bfe_parent_tag,
     1, 0,
     VAR_12,
     VAR_12,
     ((void*)0), ((void*)0),
     VAR_14 * VAR_1,
     VAR_1,
     VAR_14,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->bfe_txmbuf_tag);
 if (VAR_20 != 0) {
  FUNC_6(VAR_16->bfe_dev,
      "cannot create Tx buffer DMA tag.\n");
  goto fail;
 }


 VAR_20 = FUNC_1(VAR_16->bfe_parent_tag,
     1, 0,
     VAR_12,
     VAR_12,
     ((void*)0), ((void*)0),
     VAR_14,
     1,
     VAR_14,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->bfe_rxmbuf_tag);
 if (VAR_20 != 0) {
  FUNC_6(VAR_16->bfe_dev,
      "cannot create Rx buffer DMA tag.\n");
  goto fail;
 }


 VAR_20 = FUNC_4(VAR_16->bfe_tx_tag, (void *)&VAR_16->bfe_tx_list,
   VAR_10 | VAR_11 | VAR_8, &VAR_16->bfe_tx_map);
 if (VAR_20 != 0) {
  FUNC_6(VAR_16->bfe_dev,
      "cannot allocate DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_17.bfe_busaddr = 0;
 VAR_20 = FUNC_3(VAR_16->bfe_tx_tag, VAR_16->bfe_tx_map,
     VAR_16->bfe_tx_list, VAR_6, VAR_15, &VAR_17,
     VAR_9);
 if (VAR_20 != 0 || VAR_17.bfe_busaddr == 0) {
  FUNC_6(VAR_16->bfe_dev,
      "cannot load DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_16->bfe_tx_dma = FUNC_0(VAR_17.bfe_busaddr);

 VAR_20 = FUNC_4(VAR_16->bfe_rx_tag, (void *)&VAR_16->bfe_rx_list,
   VAR_10 | VAR_11 | VAR_8, &VAR_16->bfe_rx_map);
 if (VAR_20 != 0) {
  FUNC_6(VAR_16->bfe_dev,
      "cannot allocate DMA'able memory for Rx ring.\n");
  goto fail;
 }
 VAR_17.bfe_busaddr = 0;
 VAR_20 = FUNC_3(VAR_16->bfe_rx_tag, VAR_16->bfe_rx_map,
     VAR_16->bfe_rx_list, VAR_3, VAR_15, &VAR_17,
     VAR_9);
 if (VAR_20 != 0 || VAR_17.bfe_busaddr == 0) {
  FUNC_6(VAR_16->bfe_dev,
      "cannot load DMA'able memory for Rx ring.\n");
  goto fail;
 }
 VAR_16->bfe_rx_dma = FUNC_0(VAR_17.bfe_busaddr);


 for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++) {
  VAR_19 = &VAR_16->bfe_tx_ring[VAR_21];
  VAR_19->bfe_mbuf = ((void*)0);
  VAR_19->bfe_map = ((void*)0);
  VAR_20 = FUNC_2(VAR_16->bfe_txmbuf_tag, 0, &VAR_19->bfe_map);
  if (VAR_20 != 0) {
   FUNC_6(VAR_16->bfe_dev,
       "cannot create DMA map for Tx.\n");
   goto fail;
  }
 }


 VAR_20 = FUNC_2(VAR_16->bfe_rxmbuf_tag, 0, &VAR_16->bfe_rx_sparemap);
 if (VAR_20 != 0) {
  FUNC_6(VAR_16->bfe_dev, "cannot create spare DMA map for Rx.\n");
  goto fail;
 }

 for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
  VAR_18 = &VAR_16->bfe_rx_ring[VAR_21];
  VAR_18->bfe_mbuf = ((void*)0);
  VAR_18->bfe_map = ((void*)0);
  VAR_18->bfe_ctrl = 0;
  VAR_20 = FUNC_2(VAR_16->bfe_rxmbuf_tag, 0, &VAR_18->bfe_map);
  if (VAR_20 != 0) {
   FUNC_6(VAR_16->bfe_dev,
       "cannot create DMA map for Rx.\n");
   goto fail;
  }
 }

fail:
 return (VAR_20);
}
