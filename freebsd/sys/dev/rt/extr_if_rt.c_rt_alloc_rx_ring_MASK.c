
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rt_softc_rx_ring {int qid; int desc_dma_map; int desc_dma_tag; int spare_dma_map; int data_dma_tag; struct rt_softc_rx_data* data; struct rt_rxdesc* desc; int desc_phys_addr; } ;
struct rt_softc_rx_data {TYPE_3__* m; int dma_map; } ;
struct rt_softc {int dev; } ;
struct rt_rxdesc {void* sdl0; void* sdp0; } ;
struct TYPE_7__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_6__ {int len; } ;
struct TYPE_8__ {int m_len; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,struct rt_rxdesc*,int,int ,int *,int ) ;
 int FUNC_4 (int ,int ,TYPE_3__*,TYPE_2__*,int*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,void**,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 void* FUNC_10 (scalar_t__) ;
 TYPE_3__* FUNC_11 (int ,int ,int ,int) ;
 int VAR_13 ;
 int FUNC_12 (struct rt_softc*,struct rt_softc_rx_ring*) ;

__attribute__((used)) static int
FUNC_13(struct rt_softc *VAR_14, struct rt_softc_rx_ring *VAR_15, int VAR_16)
{
 struct rt_rxdesc *VAR_17;
 struct rt_softc_rx_data *VAR_18;
 bus_dma_segment_t VAR_19[1];
 int VAR_20, VAR_21, VAR_22;

 VAR_22 = FUNC_1(FUNC_7(VAR_14->dev), VAR_11, 0,
  VAR_5, VAR_4, ((void*)0), ((void*)0),
  VAR_12 * sizeof(struct rt_rxdesc), 1,
  VAR_12 * sizeof(struct rt_rxdesc),
  0, ((void*)0), ((void*)0), &VAR_15->desc_dma_tag);
 if (VAR_22 != 0) {
  FUNC_9(VAR_14->dev,
      "could not create Rx desc DMA tag\n");
  goto fail;
 }

 VAR_22 = FUNC_6(VAR_15->desc_dma_tag, (void **) &VAR_15->desc,
     VAR_2 | VAR_3, &VAR_15->desc_dma_map);
 if (VAR_22 != 0) {
  FUNC_9(VAR_14->dev,
      "could not allocate Rx desc DMA memory\n");
  goto fail;
 }

 VAR_22 = FUNC_3(VAR_15->desc_dma_tag, VAR_15->desc_dma_map,
  VAR_15->desc,
  VAR_12 * sizeof(struct rt_rxdesc),
  VAR_13, &VAR_15->desc_phys_addr, 0);
 if (VAR_22 != 0) {
  FUNC_9(VAR_14->dev, "could not load Rx desc DMA map\n");
  goto fail;
 }

 VAR_22 = FUNC_1(FUNC_7(VAR_14->dev), VAR_11, 0,
     VAR_5, VAR_4, ((void*)0), ((void*)0),
  VAR_7, 1, VAR_7, 0, ((void*)0), ((void*)0),
  &VAR_15->data_dma_tag);
 if (VAR_22 != 0) {
  FUNC_9(VAR_14->dev,
      "could not create Rx data DMA tag\n");
  goto fail;
 }

 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
  VAR_17 = &VAR_15->desc[VAR_20];
  VAR_18 = &VAR_15->data[VAR_20];

  VAR_22 = FUNC_2(VAR_15->data_dma_tag, 0,
      &VAR_18->dma_map);
  if (VAR_22 != 0) {
   FUNC_9(VAR_14->dev, "could not create Rx data DMA "
       "map\n");
   goto fail;
  }

  VAR_18->m = FUNC_11(VAR_9, VAR_8, VAR_10,
      VAR_7);
  if (VAR_18->m == ((void*)0)) {
   FUNC_9(VAR_14->dev, "could not allocate Rx mbuf\n");
   VAR_22 = VAR_6;
   goto fail;
  }

  VAR_18->m->m_len = VAR_18->m->m_pkthdr.len = VAR_7;

  VAR_22 = FUNC_4(VAR_15->data_dma_tag,
      VAR_18->dma_map, VAR_18->m, VAR_19, &VAR_21, VAR_2);
  if (VAR_22 != 0) {
   FUNC_9(VAR_14->dev,
       "could not load Rx mbuf DMA map\n");
   goto fail;
  }

  FUNC_0(VAR_21 == 1, ("%s: too many DMA segments",
   FUNC_8(VAR_14->dev)));


  VAR_17->sdp0 = FUNC_10(VAR_19[0].ds_addr+2);
  VAR_17->sdl0 = FUNC_10(VAR_19[0].ds_len-2);
 }

 VAR_22 = FUNC_2(VAR_15->data_dma_tag, 0,
     &VAR_15->spare_dma_map);
 if (VAR_22 != 0) {
  FUNC_9(VAR_14->dev,
      "could not create Rx spare DMA map\n");
  goto fail;
 }

 FUNC_5(VAR_15->desc_dma_tag, VAR_15->desc_dma_map,
  VAR_0 | VAR_1);
 VAR_15->qid = VAR_16;
 return (0);

fail:
 FUNC_12(VAR_14, VAR_15);
 return (VAR_22);
}
