
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txdesc {int * tx_dmamap; scalar_t__ tx_ndesc; int * tx_m; } ;
struct sge_list_data {int sge_tx_paddr; int sge_tx_ring; int sge_rx_paddr; int sge_rx_ring; } ;
struct sge_chain_data {int sge_rxmbuf_tag; struct sge_rxdesc* sge_rxdesc; int * sge_rx_spare_map; int sge_txmbuf_tag; struct sge_txdesc* sge_txdesc; int sge_tag; int sge_tx_dmamap; int sge_tx_tag; int sge_rx_dmamap; int sge_rx_tag; } ;
struct sge_softc {int sge_dev; struct sge_list_data sge_ldata; struct sge_chain_data sge_cdata; } ;
struct sge_rxdesc {int * rx_dmamap; int * rx_m; } ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,int) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_6(struct sge_softc *VAR_17)
{
 struct sge_chain_data *VAR_18;
 struct sge_list_data *VAR_19;
 struct sge_rxdesc *VAR_20;
 struct sge_txdesc *VAR_21;
 int VAR_22, VAR_23;

 VAR_18 = &VAR_17->sge_cdata;
 VAR_19 = &VAR_17->sge_ldata;
 VAR_22 = FUNC_0(FUNC_4(VAR_17->sge_dev),
     1, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_5,
     1,
     VAR_5,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_18->sge_tag);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not create parent DMA tag.\n");
  goto fail;
 }


 VAR_22 = FUNC_0(VAR_18->sge_tag,
     VAR_7, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_11, 1,
     VAR_11,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_18->sge_rx_tag);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not create Rx ring DMA tag.\n");
  goto fail;
 }

 VAR_22 = FUNC_3(VAR_18->sge_rx_tag, (void **)&VAR_19->sge_rx_ring,
     VAR_1 | VAR_2 | VAR_0,
     &VAR_18->sge_rx_dmamap);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not allocate DMA'able memory for Rx ring.\n");
  goto fail;
 }
 VAR_22 = FUNC_2(VAR_18->sge_rx_tag, VAR_18->sge_rx_dmamap,
     VAR_19->sge_rx_ring, VAR_11, VAR_16,
     &VAR_19->sge_rx_paddr, VAR_1);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not load DMA'able memory for Rx ring.\n");
 }


 VAR_22 = FUNC_0(VAR_18->sge_tag,
     VAR_7, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_15, 1,
     VAR_15,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_18->sge_tx_tag);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not create Rx ring DMA tag.\n");
  goto fail;
 }

 VAR_22 = FUNC_3(VAR_18->sge_tx_tag, (void **)&VAR_19->sge_tx_ring,
     VAR_1 | VAR_2 | VAR_0,
     &VAR_18->sge_tx_dmamap);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not allocate DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_22 = FUNC_2(VAR_18->sge_tx_tag, VAR_18->sge_tx_dmamap,
     VAR_19->sge_tx_ring, VAR_15, VAR_16,
     &VAR_19->sge_tx_paddr, VAR_1);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not load DMA'able memory for Rx ring.\n");
  goto fail;
 }


 VAR_22 = FUNC_0(VAR_18->sge_tag, 1, 0, VAR_3,
     VAR_3, ((void*)0), ((void*)0), VAR_13, VAR_8,
     VAR_12, 0, ((void*)0), ((void*)0), &VAR_18->sge_txmbuf_tag);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not create Tx mbuf DMA tag.\n");
  goto fail;
 }


 VAR_22 = FUNC_0(VAR_18->sge_tag, VAR_9, 0,
     VAR_3, VAR_3, ((void*)0), ((void*)0), VAR_6, 1,
     VAR_6, 0, ((void*)0), ((void*)0), &VAR_18->sge_rxmbuf_tag);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not create Rx mbuf DMA tag.\n");
  goto fail;
 }


 for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
  VAR_21 = &VAR_18->sge_txdesc[VAR_23];
  VAR_21->tx_m = ((void*)0);
  VAR_21->tx_dmamap = ((void*)0);
  VAR_21->tx_ndesc = 0;
  VAR_22 = FUNC_1(VAR_18->sge_txmbuf_tag, 0,
      &VAR_21->tx_dmamap);
  if (VAR_22 != 0) {
   FUNC_5(VAR_17->sge_dev,
       "could not create Tx DMA map.\n");
   goto fail;
  }
 }

 VAR_22 = FUNC_1(VAR_18->sge_rxmbuf_tag, 0, &VAR_18->sge_rx_spare_map);
 if (VAR_22 != 0) {
  FUNC_5(VAR_17->sge_dev,
      "could not create spare Rx DMA map.\n");
  goto fail;
 }

 for (VAR_23 = 0; VAR_23 < VAR_10; VAR_23++) {
  VAR_20 = &VAR_18->sge_rxdesc[VAR_23];
  VAR_20->rx_m = ((void*)0);
  VAR_20->rx_dmamap = ((void*)0);
  VAR_22 = FUNC_1(VAR_18->sge_rxmbuf_tag, 0,
      &VAR_20->rx_dmamap);
  if (VAR_22) {
   FUNC_5(VAR_17->sge_dev,
       "could not create Rx DMA map.\n");
   goto fail;
  }
 }
fail:
 return (VAR_22);
}
