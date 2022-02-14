
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sis_txdesc {int tx_dmamap; int * tx_m; } ;
struct sis_softc {int sis_dev; int sis_tx_tag; struct sis_txdesc* sis_txdesc; int sis_rx_tag; struct sis_rxdesc* sis_rxdesc; int sis_rx_sparemap; int sis_parent_tag; int sis_tx_paddr; int sis_tx_list_map; int sis_tx_list; int sis_tx_list_tag; int sis_rx_paddr; int sis_rx_list_map; int sis_rx_list; int sis_rx_list_tag; } ;
struct sis_rxdesc {int rx_dmamap; int * rx_m; } ;


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
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sis_softc*,int ,int ,int *,int **,int *,int *,char*) ;

__attribute__((used)) static int
FUNC_5(struct sis_softc *VAR_12)
{
 struct sis_rxdesc *VAR_13;
 struct sis_txdesc *VAR_14;
 int VAR_15, VAR_16;


 VAR_15 = FUNC_0(FUNC_2(VAR_12->sis_dev),
     1, 0, VAR_1, VAR_0, ((void*)0),
     ((void*)0), VAR_2, 0, VAR_2,
     0, ((void*)0), ((void*)0), &VAR_12->sis_parent_tag);
 if (VAR_15 != 0) {
  FUNC_3(VAR_12->sis_dev,
      "could not allocate parent dma tag\n");
  return (VAR_3);
 }


 VAR_15 = FUNC_4(VAR_12, VAR_5, VAR_9,
     &VAR_12->sis_rx_list_tag, (uint8_t **)&VAR_12->sis_rx_list,
     &VAR_12->sis_rx_list_map, &VAR_12->sis_rx_paddr, "RX ring");
 if (VAR_15)
  return (VAR_15);


 VAR_15 = FUNC_4(VAR_12, VAR_5, VAR_11,
     &VAR_12->sis_tx_list_tag, (uint8_t **)&VAR_12->sis_tx_list,
     &VAR_12->sis_tx_list_map, &VAR_12->sis_tx_paddr, "TX ring");
 if (VAR_15)
  return (VAR_15);


 VAR_15 = FUNC_0(VAR_12->sis_parent_tag, VAR_7, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0), VAR_4, 1,
     VAR_4, 0, ((void*)0), ((void*)0), &VAR_12->sis_rx_tag);
 if (VAR_15) {
  FUNC_3(VAR_12->sis_dev, "could not allocate RX dma tag\n");
  return (VAR_15);
 }


 VAR_15 = FUNC_0(VAR_12->sis_parent_tag, 1, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0),
     VAR_4 * VAR_6, VAR_6, VAR_4, 0, ((void*)0), ((void*)0),
     &VAR_12->sis_tx_tag);
 if (VAR_15) {
  FUNC_3(VAR_12->sis_dev, "could not allocate TX dma tag\n");
  return (VAR_15);
 }


 VAR_15 = FUNC_1(VAR_12->sis_rx_tag, 0, &VAR_12->sis_rx_sparemap);
 if (VAR_15) {
  FUNC_3(VAR_12->sis_dev,
      "can't create spare DMA map for RX\n");
  return (VAR_15);
 }
 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
  VAR_13 = &VAR_12->sis_rxdesc[VAR_16];
  VAR_13->rx_m = ((void*)0);
  VAR_15 = FUNC_1(VAR_12->sis_rx_tag, 0, &VAR_13->rx_dmamap);
  if (VAR_15) {
   FUNC_3(VAR_12->sis_dev,
       "can't create DMA map for RX\n");
   return (VAR_15);
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_14 = &VAR_12->sis_txdesc[VAR_16];
  VAR_14->tx_m = ((void*)0);
  VAR_15 = FUNC_1(VAR_12->sis_tx_tag, 0, &VAR_14->tx_dmamap);
  if (VAR_15) {
   FUNC_3(VAR_12->sis_dev,
       "can't create DMA map for TX\n");
   return (VAR_15);
  }
 }

 return (0);
}
