
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_txdesc {int dummy; } ;
struct rt_softc_tx_ring {int qid; scalar_t__ data_next; scalar_t__ data_cur; scalar_t__ data_queued; int data_dma_tag; struct rt_softc_tx_data* data; int seg0_phys_addr; int seg0; int seg0_dma_map; int seg0_dma_tag; scalar_t__ desc_next; scalar_t__ desc_cur; scalar_t__ desc_queued; int desc_phys_addr; int desc; int desc_dma_map; int desc_dma_tag; int lock; } ;
struct rt_softc_tx_data {int dma_map; } ;
struct rt_softc {int dev; } ;


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
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int,int ,int *,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int VAR_11 ;
 int FUNC_8 (struct rt_softc*,struct rt_softc_tx_ring*) ;

__attribute__((used)) static int
FUNC_9(struct rt_softc *VAR_12, struct rt_softc_tx_ring *VAR_13, int VAR_14)
{
 struct rt_softc_tx_data *VAR_15;
 int VAR_16, VAR_17;

 FUNC_7(&VAR_13->lock, FUNC_5(VAR_12->dev), ((void*)0), VAR_5);

 VAR_16 = FUNC_0(FUNC_4(VAR_12->dev), VAR_6, 0,
  VAR_3, VAR_2, ((void*)0), ((void*)0),
  VAR_9 * sizeof(struct rt_txdesc), 1,
  VAR_9 * sizeof(struct rt_txdesc),
  0, ((void*)0), ((void*)0), &VAR_13->desc_dma_tag);
 if (VAR_16 != 0) {
  FUNC_6(VAR_12->dev,
      "could not create Tx desc DMA tag\n");
  goto fail;
 }

 VAR_16 = FUNC_3(VAR_13->desc_dma_tag, (void **) &VAR_13->desc,
     VAR_0 | VAR_1, &VAR_13->desc_dma_map);
 if (VAR_16 != 0) {
  FUNC_6(VAR_12->dev,
      "could not allocate Tx desc DMA memory\n");
  goto fail;
 }

 VAR_16 = FUNC_2(VAR_13->desc_dma_tag, VAR_13->desc_dma_map,
     VAR_13->desc, (VAR_9 *
     sizeof(struct rt_txdesc)), VAR_11,
     &VAR_13->desc_phys_addr, 0);
 if (VAR_16 != 0) {
  FUNC_6(VAR_12->dev, "could not load Tx desc DMA map\n");
  goto fail;
 }

 VAR_13->desc_queued = 0;
 VAR_13->desc_cur = 0;
 VAR_13->desc_next = 0;

 VAR_16 = FUNC_0(FUNC_4(VAR_12->dev), VAR_6, 0,
     VAR_3, VAR_2, ((void*)0), ((void*)0),
     VAR_8 * VAR_10, 1,
     VAR_8 * VAR_10,
     0, ((void*)0), ((void*)0), &VAR_13->seg0_dma_tag);
 if (VAR_16 != 0) {
  FUNC_6(VAR_12->dev,
      "could not create Tx seg0 DMA tag\n");
  goto fail;
 }

 VAR_16 = FUNC_3(VAR_13->seg0_dma_tag, (void **) &VAR_13->seg0,
     VAR_0 | VAR_1, &VAR_13->seg0_dma_map);
 if (VAR_16 != 0) {
  FUNC_6(VAR_12->dev,
      "could not allocate Tx seg0 DMA memory\n");
  goto fail;
 }

 VAR_16 = FUNC_2(VAR_13->seg0_dma_tag, VAR_13->seg0_dma_map,
     VAR_13->seg0,
     VAR_8 * VAR_10,
     VAR_11, &VAR_13->seg0_phys_addr, 0);
 if (VAR_16 != 0) {
  FUNC_6(VAR_12->dev, "could not load Tx seg0 DMA map\n");
  goto fail;
 }

 VAR_16 = FUNC_0(FUNC_4(VAR_12->dev), VAR_6, 0,
     VAR_3, VAR_2, ((void*)0), ((void*)0),
     VAR_4, VAR_7, VAR_4, 0, ((void*)0), ((void*)0),
     &VAR_13->data_dma_tag);
 if (VAR_16 != 0) {
  FUNC_6(VAR_12->dev,
      "could not create Tx data DMA tag\n");
  goto fail;
 }

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  VAR_15 = &VAR_13->data[VAR_17];

  VAR_16 = FUNC_1(VAR_13->data_dma_tag, 0,
      &VAR_15->dma_map);
  if (VAR_16 != 0) {
   FUNC_6(VAR_12->dev, "could not create Tx data DMA "
       "map\n");
   goto fail;
  }
 }

 VAR_13->data_queued = 0;
 VAR_13->data_cur = 0;
 VAR_13->data_next = 0;

 VAR_13->qid = VAR_14;
 return (0);

fail:
 FUNC_8(VAR_12, VAR_13);
 return (VAR_16);
}
