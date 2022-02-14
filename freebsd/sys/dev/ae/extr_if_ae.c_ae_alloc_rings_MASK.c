
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ bus_addr_t ;
struct TYPE_3__ {scalar_t__ rxd_base_dma; int * rxd_base; scalar_t__ dma_rxd_busaddr; int dev; int dma_rxd_map; int dma_rxd_tag; scalar_t__ dma_txs_busaddr; scalar_t__ txs_base; int dma_txs_map; int dma_txs_tag; scalar_t__ dma_txd_busaddr; scalar_t__ txd_base; int dma_txd_map; int dma_txd_tag; int dma_parent_tag; } ;
typedef TYPE_1__ ae_softc_t ;
typedef int ae_rxd_t ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,scalar_t__,int,int ,scalar_t__*,int ) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(ae_softc_t *VAR_12)
{
 bus_addr_t VAR_13;
 int VAR_14;




 VAR_14 = FUNC_0(FUNC_3(VAR_12->dev),
     1, 0, VAR_9, VAR_8,
     ((void*)0), ((void*)0), VAR_10, 0,
     VAR_10, 0, ((void*)0), ((void*)0),
     &VAR_12->dma_parent_tag);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12->dev, "could not creare parent DMA tag.\n");
  return (VAR_14);
 }




 VAR_14 = FUNC_0(VAR_12->dma_parent_tag,
     8, 0, VAR_8, VAR_8,
     ((void*)0), ((void*)0), VAR_2, 1,
     VAR_2, 0, ((void*)0), ((void*)0),
     &VAR_12->dma_txd_tag);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12->dev, "could not creare TxD DMA tag.\n");
  return (VAR_14);
 }




 VAR_14 = FUNC_0(VAR_12->dma_parent_tag,
     8, 0, VAR_8, VAR_8,
     ((void*)0), ((void*)0), VAR_3 * 4, 1,
     VAR_3 * 4, 0, ((void*)0), ((void*)0),
     &VAR_12->dma_txs_tag);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12->dev, "could not creare TxS DMA tag.\n");
  return (VAR_14);
 }




 VAR_14 = FUNC_0(VAR_12->dma_parent_tag,
     128, 0, VAR_8, VAR_8,
     ((void*)0), ((void*)0), VAR_0 * 1536 + VAR_1, 1,
     VAR_0 * 1536 + VAR_1, 0, ((void*)0), ((void*)0),
     &VAR_12->dma_rxd_tag);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12->dev, "could not creare TxS DMA tag.\n");
  return (VAR_14);
 }




 VAR_14 = FUNC_2(VAR_12->dma_txd_tag, (void **)&VAR_12->txd_base,
     VAR_6 | VAR_7 | VAR_4,
     &VAR_12->dma_txd_map);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12->dev,
      "could not allocate DMA memory for TxD ring.\n");
  return (VAR_14);
 }
 VAR_14 = FUNC_1(VAR_12->dma_txd_tag, VAR_12->dma_txd_map, VAR_12->txd_base,
     VAR_2, VAR_11, &VAR_13, VAR_5);
 if (VAR_14 != 0 || VAR_13 == 0) {
  FUNC_4(VAR_12->dev,
      "could not load DMA map for TxD ring.\n");
  return (VAR_14);
 }
 VAR_12->dma_txd_busaddr = VAR_13;




 VAR_14 = FUNC_2(VAR_12->dma_txs_tag, (void **)&VAR_12->txs_base,
     VAR_6 | VAR_7 | VAR_4,
     &VAR_12->dma_txs_map);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12->dev,
      "could not allocate DMA memory for TxS ring.\n");
  return (VAR_14);
 }
 VAR_14 = FUNC_1(VAR_12->dma_txs_tag, VAR_12->dma_txs_map, VAR_12->txs_base,
     VAR_3 * 4, VAR_11, &VAR_13, VAR_5);
 if (VAR_14 != 0 || VAR_13 == 0) {
  FUNC_4(VAR_12->dev,
      "could not load DMA map for TxS ring.\n");
  return (VAR_14);
 }
 VAR_12->dma_txs_busaddr = VAR_13;




 VAR_14 = FUNC_2(VAR_12->dma_rxd_tag, (void **)&VAR_12->rxd_base_dma,
     VAR_6 | VAR_7 | VAR_4,
     &VAR_12->dma_rxd_map);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12->dev,
      "could not allocate DMA memory for RxD ring.\n");
  return (VAR_14);
 }
 VAR_14 = FUNC_1(VAR_12->dma_rxd_tag, VAR_12->dma_rxd_map,
     VAR_12->rxd_base_dma, VAR_0 * 1536 + VAR_1,
     VAR_11, &VAR_13, VAR_5);
 if (VAR_14 != 0 || VAR_13 == 0) {
  FUNC_4(VAR_12->dev,
      "could not load DMA map for RxD ring.\n");
  return (VAR_14);
 }
 VAR_12->dma_rxd_busaddr = VAR_13 + VAR_1;
 VAR_12->rxd_base = (ae_rxd_t *)(VAR_12->rxd_base_dma + VAR_1);

 return (0);
}
