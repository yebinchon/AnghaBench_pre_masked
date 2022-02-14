
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vte_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_2__ {scalar_t__ vte_tx_ring_paddr; scalar_t__ vte_rx_ring_paddr; int vte_rx_tag; struct vte_rxdesc* vte_rxdesc; int * vte_rx_sparemap; int vte_tx_tag; struct vte_txdesc* vte_txdesc; int vte_buffer_tag; int vte_rx_ring; int vte_rx_ring_map; int vte_rx_ring_tag; int vte_tx_ring; int vte_tx_ring_map; int vte_tx_ring_tag; int vte_parent_tag; } ;
struct vte_softc {int vte_dev; TYPE_1__ vte_cdata; } ;
struct vte_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct vte_dmamap_arg {scalar_t__ vte_busaddr; } ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,int ,int ,int ,struct vte_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_6(struct vte_softc *VAR_15)
{
 struct vte_txdesc *VAR_16;
 struct vte_rxdesc *VAR_17;
 struct vte_dmamap_arg VAR_18;
 int VAR_19, VAR_20;


 VAR_19 = FUNC_0(
     FUNC_4(VAR_15->vte_dev),
     1, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_5,
     0,
     VAR_5,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->vte_cdata.vte_parent_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->vte_dev,
      "could not create parent DMA tag.\n");
  goto fail;
 }


 VAR_19 = FUNC_0(
     VAR_15->vte_cdata.vte_parent_tag,
     VAR_11, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_13,
     1,
     VAR_13,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->vte_cdata.vte_tx_ring_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->vte_dev,
      "could not create TX ring DMA tag.\n");
  goto fail;
 }


 VAR_19 = FUNC_0(
     VAR_15->vte_cdata.vte_parent_tag,
     VAR_8, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_10,
     1,
     VAR_10,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->vte_cdata.vte_rx_ring_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->vte_dev,
      "could not create RX ring DMA tag.\n");
  goto fail;
 }


 VAR_19 = FUNC_3(VAR_15->vte_cdata.vte_tx_ring_tag,
     (void **)&VAR_15->vte_cdata.vte_tx_ring,
     VAR_1 | VAR_2 | VAR_0,
     &VAR_15->vte_cdata.vte_tx_ring_map);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->vte_dev,
      "could not allocate DMA'able memory for TX ring.\n");
  goto fail;
 }
 VAR_18.vte_busaddr = 0;
 VAR_19 = FUNC_2(VAR_15->vte_cdata.vte_tx_ring_tag,
     VAR_15->vte_cdata.vte_tx_ring_map, VAR_15->vte_cdata.vte_tx_ring,
     VAR_13, VAR_14, &VAR_18, 0);
 if (VAR_19 != 0 || VAR_18.vte_busaddr == 0) {
  FUNC_5(VAR_15->vte_dev,
      "could not load DMA'able memory for TX ring.\n");
  goto fail;
 }
 VAR_15->vte_cdata.vte_tx_ring_paddr = VAR_18.vte_busaddr;


 VAR_19 = FUNC_3(VAR_15->vte_cdata.vte_rx_ring_tag,
     (void **)&VAR_15->vte_cdata.vte_rx_ring,
     VAR_1 | VAR_2 | VAR_0,
     &VAR_15->vte_cdata.vte_rx_ring_map);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->vte_dev,
      "could not allocate DMA'able memory for RX ring.\n");
  goto fail;
 }
 VAR_18.vte_busaddr = 0;
 VAR_19 = FUNC_2(VAR_15->vte_cdata.vte_rx_ring_tag,
     VAR_15->vte_cdata.vte_rx_ring_map, VAR_15->vte_cdata.vte_rx_ring,
     VAR_10, VAR_14, &VAR_18, 0);
 if (VAR_19 != 0 || VAR_18.vte_busaddr == 0) {
  FUNC_5(VAR_15->vte_dev,
      "could not load DMA'able memory for RX ring.\n");
  goto fail;
 }
 VAR_15->vte_cdata.vte_rx_ring_paddr = VAR_18.vte_busaddr;


 VAR_19 = FUNC_0(
     FUNC_4(VAR_15->vte_dev),
     1, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_5,
     0,
     VAR_5,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->vte_cdata.vte_buffer_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->vte_dev,
      "could not create parent buffer DMA tag.\n");
  goto fail;
 }


 VAR_19 = FUNC_0(
     VAR_15->vte_cdata.vte_buffer_tag,
     1, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_6,
     1,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->vte_cdata.vte_tx_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->vte_dev, "could not create TX DMA tag.\n");
  goto fail;
 }


 VAR_19 = FUNC_0(
     VAR_15->vte_cdata.vte_buffer_tag,
     VAR_7, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_6,
     1,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->vte_cdata.vte_rx_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->vte_dev, "could not create RX DMA tag.\n");
  goto fail;
 }

 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
  VAR_16 = &VAR_15->vte_cdata.vte_txdesc[VAR_20];
  VAR_16->tx_m = ((void*)0);
  VAR_16->tx_dmamap = ((void*)0);
  VAR_19 = FUNC_1(VAR_15->vte_cdata.vte_tx_tag, 0,
      &VAR_16->tx_dmamap);
  if (VAR_19 != 0) {
   FUNC_5(VAR_15->vte_dev,
       "could not create TX dmamap.\n");
   goto fail;
  }
 }

 if ((VAR_19 = FUNC_1(VAR_15->vte_cdata.vte_rx_tag, 0,
     &VAR_15->vte_cdata.vte_rx_sparemap)) != 0) {
  FUNC_5(VAR_15->vte_dev,
      "could not create spare RX dmamap.\n");
  goto fail;
 }
 for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
  VAR_17 = &VAR_15->vte_cdata.vte_rxdesc[VAR_20];
  VAR_17->rx_m = ((void*)0);
  VAR_17->rx_dmamap = ((void*)0);
  VAR_19 = FUNC_1(VAR_15->vte_cdata.vte_rx_tag, 0,
      &VAR_17->rx_dmamap);
  if (VAR_19 != 0) {
   FUNC_5(VAR_15->vte_dev,
       "could not create RX dmamap.\n");
   goto fail;
  }
 }

fail:
 return (VAR_19);
}
