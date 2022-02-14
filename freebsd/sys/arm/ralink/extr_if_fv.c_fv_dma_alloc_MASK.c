
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct fv_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_4__ {int fv_rx_tag; struct fv_rxdesc* fv_rxdesc; int * fv_rx_sparemap; int fv_tx_tag; struct fv_txdesc* fv_txdesc; int fv_sf_buff; int fv_sf_buff_map; int fv_sf_tag; int fv_rx_ring_map; int fv_rx_ring_tag; int fv_tx_ring_map; int fv_tx_ring_tag; int fv_parent_tag; } ;
struct TYPE_3__ {scalar_t__ fv_tx_ring_paddr; scalar_t__ fv_rx_ring_paddr; scalar_t__ fv_sf_paddr; int fv_rx_ring; int fv_tx_ring; } ;
struct fv_softc {int fv_dev; TYPE_2__ fv_cdata; TYPE_1__ fv_rdata; } ;
struct fv_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct fv_dmamap_arg {scalar_t__ fv_busaddr; } ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,int ,int,int ,struct fv_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_6(struct fv_softc *VAR_17)
{
 struct fv_dmamap_arg VAR_18;
 struct fv_txdesc *VAR_19;
 struct fv_rxdesc *VAR_20;
 int VAR_21, VAR_22;


 VAR_21 = FUNC_0(
     FUNC_4(VAR_17->fv_dev),
     1, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_5,
     0,
     VAR_5,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->fv_cdata.fv_parent_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_17->fv_dev, "failed to create parent DMA tag\n");
  goto fail;
 }

 VAR_21 = FUNC_0(
     VAR_17->fv_cdata.fv_parent_tag,
     VAR_8, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_14,
     1,
     VAR_14,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->fv_cdata.fv_tx_ring_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_17->fv_dev, "failed to create Tx ring DMA tag\n");
  goto fail;
 }


 VAR_21 = FUNC_0(
     VAR_17->fv_cdata.fv_parent_tag,
     VAR_8, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_11,
     1,
     VAR_11,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->fv_cdata.fv_rx_ring_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_17->fv_dev, "failed to create Rx ring DMA tag\n");
  goto fail;
 }


 VAR_21 = FUNC_0(
     VAR_17->fv_cdata.fv_parent_tag,
     1, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_15 * VAR_6,
     VAR_6,
     VAR_15,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->fv_cdata.fv_tx_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_17->fv_dev, "failed to create Tx DMA tag\n");
  goto fail;
 }


 VAR_21 = FUNC_0(
     VAR_17->fv_cdata.fv_parent_tag,
     VAR_9, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_15,
     1,
     VAR_15,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->fv_cdata.fv_rx_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_17->fv_dev, "failed to create Rx DMA tag\n");
  goto fail;
 }


 VAR_21 = FUNC_0(
     VAR_17->fv_cdata.fv_parent_tag,
     sizeof(uint32_t), 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_12 + VAR_7,
     1,
     VAR_12 + VAR_7,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->fv_cdata.fv_sf_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_17->fv_dev, "failed to create setup frame DMA tag\n");
  goto fail;
 }


 VAR_21 = FUNC_3(VAR_17->fv_cdata.fv_tx_ring_tag,
     (void **)&VAR_17->fv_rdata.fv_tx_ring, VAR_1 |
     VAR_0 | VAR_2, &VAR_17->fv_cdata.fv_tx_ring_map);
 if (VAR_21 != 0) {
  FUNC_5(VAR_17->fv_dev,
      "failed to allocate DMA'able memory for Tx ring\n");
  goto fail;
 }

 VAR_18.fv_busaddr = 0;
 VAR_21 = FUNC_2(VAR_17->fv_cdata.fv_tx_ring_tag,
     VAR_17->fv_cdata.fv_tx_ring_map, VAR_17->fv_rdata.fv_tx_ring,
     VAR_14, VAR_16, &VAR_18, 0);
 if (VAR_21 != 0 || VAR_18.fv_busaddr == 0) {
  FUNC_5(VAR_17->fv_dev,
      "failed to load DMA'able memory for Tx ring\n");
  goto fail;
 }
 VAR_17->fv_rdata.fv_tx_ring_paddr = VAR_18.fv_busaddr;


 VAR_21 = FUNC_3(VAR_17->fv_cdata.fv_rx_ring_tag,
     (void **)&VAR_17->fv_rdata.fv_rx_ring, VAR_1 |
     VAR_0 | VAR_2, &VAR_17->fv_cdata.fv_rx_ring_map);
 if (VAR_21 != 0) {
  FUNC_5(VAR_17->fv_dev,
      "failed to allocate DMA'able memory for Rx ring\n");
  goto fail;
 }

 VAR_18.fv_busaddr = 0;
 VAR_21 = FUNC_2(VAR_17->fv_cdata.fv_rx_ring_tag,
     VAR_17->fv_cdata.fv_rx_ring_map, VAR_17->fv_rdata.fv_rx_ring,
     VAR_11, VAR_16, &VAR_18, 0);
 if (VAR_21 != 0 || VAR_18.fv_busaddr == 0) {
  FUNC_5(VAR_17->fv_dev,
      "failed to load DMA'able memory for Rx ring\n");
  goto fail;
 }
 VAR_17->fv_rdata.fv_rx_ring_paddr = VAR_18.fv_busaddr;


 VAR_21 = FUNC_3(VAR_17->fv_cdata.fv_sf_tag,
     (void **)&VAR_17->fv_cdata.fv_sf_buff, VAR_1 |
     VAR_0 | VAR_2, &VAR_17->fv_cdata.fv_sf_buff_map);
 if (VAR_21 != 0) {
  FUNC_5(VAR_17->fv_dev,
      "failed to allocate DMA'able memory for setup frame\n");
  goto fail;
 }

 VAR_18.fv_busaddr = 0;
 VAR_21 = FUNC_2(VAR_17->fv_cdata.fv_sf_tag,
     VAR_17->fv_cdata.fv_sf_buff_map, VAR_17->fv_cdata.fv_sf_buff,
     VAR_12, VAR_16, &VAR_18, 0);
 if (VAR_21 != 0 || VAR_18.fv_busaddr == 0) {
  FUNC_5(VAR_17->fv_dev,
      "failed to load DMA'able memory for setup frame\n");
  goto fail;
 }
 VAR_17->fv_rdata.fv_sf_paddr = VAR_18.fv_busaddr;


 for (VAR_22 = 0; VAR_22 < VAR_13; VAR_22++) {
  VAR_19 = &VAR_17->fv_cdata.fv_txdesc[VAR_22];
  VAR_19->tx_m = ((void*)0);
  VAR_19->tx_dmamap = ((void*)0);
  VAR_21 = FUNC_1(VAR_17->fv_cdata.fv_tx_tag, 0,
      &VAR_19->tx_dmamap);
  if (VAR_21 != 0) {
   FUNC_5(VAR_17->fv_dev,
       "failed to create Tx dmamap\n");
   goto fail;
  }
 }

 if ((VAR_21 = FUNC_1(VAR_17->fv_cdata.fv_rx_tag, 0,
     &VAR_17->fv_cdata.fv_rx_sparemap)) != 0) {
  FUNC_5(VAR_17->fv_dev,
      "failed to create spare Rx dmamap\n");
  goto fail;
 }
 for (VAR_22 = 0; VAR_22 < VAR_10; VAR_22++) {
  VAR_20 = &VAR_17->fv_cdata.fv_rxdesc[VAR_22];
  VAR_20->rx_m = ((void*)0);
  VAR_20->rx_dmamap = ((void*)0);
  VAR_21 = FUNC_1(VAR_17->fv_cdata.fv_rx_tag, 0,
      &VAR_20->rx_dmamap);
  if (VAR_21 != 0) {
   FUNC_5(VAR_17->fv_dev,
       "failed to create Rx dmamap\n");
   goto fail;
  }
 }

fail:
 return (VAR_21);
}
