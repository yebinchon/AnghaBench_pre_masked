
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vr_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_4__ {int vr_rx_tag; struct vr_rxdesc* vr_rxdesc; int * vr_rx_sparemap; int vr_tx_tag; struct vr_txdesc* vr_txdesc; int vr_rx_ring_map; int vr_rx_ring_tag; int vr_tx_ring_map; int vr_tx_ring_tag; int vr_parent_tag; } ;
struct TYPE_3__ {scalar_t__ vr_tx_ring_paddr; scalar_t__ vr_rx_ring_paddr; int vr_rx_ring; int vr_tx_ring; } ;
struct vr_softc {int vr_quirks; int vr_dev; TYPE_2__ vr_cdata; TYPE_1__ vr_rdata; } ;
struct vr_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct vr_dmamap_arg {scalar_t__ vr_busaddr; } ;
typedef int bus_size_t ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,int ,int,int ,struct vr_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_6(struct vr_softc *VAR_16)
{
 struct vr_dmamap_arg VAR_17;
 struct vr_txdesc *VAR_18;
 struct vr_rxdesc *VAR_19;
 bus_size_t VAR_20;
 int VAR_21, VAR_22;


 VAR_21 = FUNC_0(
     FUNC_4(VAR_16->vr_dev),
     1, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_5,
     0,
     VAR_5,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->vr_cdata.vr_parent_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_16->vr_dev, "failed to create parent DMA tag\n");
  goto fail;
 }

 VAR_21 = FUNC_0(
     VAR_16->vr_cdata.vr_parent_tag,
     VAR_9, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_14,
     1,
     VAR_14,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->vr_cdata.vr_tx_ring_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_16->vr_dev, "failed to create Tx ring DMA tag\n");
  goto fail;
 }


 VAR_21 = FUNC_0(
     VAR_16->vr_cdata.vr_parent_tag,
     VAR_9, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_12,
     1,
     VAR_12,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->vr_cdata.vr_rx_ring_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_16->vr_dev, "failed to create Rx ring DMA tag\n");
  goto fail;
 }

 if ((VAR_16->vr_quirks & VAR_8) != 0)
  VAR_20 = sizeof(uint32_t);
 else
  VAR_20 = 1;

 VAR_21 = FUNC_0(
     VAR_16->vr_cdata.vr_parent_tag,
     VAR_20, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_6 * VAR_7,
     VAR_7,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->vr_cdata.vr_tx_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_16->vr_dev, "failed to create Tx DMA tag\n");
  goto fail;
 }


 VAR_21 = FUNC_0(
     VAR_16->vr_cdata.vr_parent_tag,
     VAR_10, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_6,
     1,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->vr_cdata.vr_rx_tag);
 if (VAR_21 != 0) {
  FUNC_5(VAR_16->vr_dev, "failed to create Rx DMA tag\n");
  goto fail;
 }


 VAR_21 = FUNC_3(VAR_16->vr_cdata.vr_tx_ring_tag,
     (void **)&VAR_16->vr_rdata.vr_tx_ring, VAR_1 |
     VAR_0 | VAR_2, &VAR_16->vr_cdata.vr_tx_ring_map);
 if (VAR_21 != 0) {
  FUNC_5(VAR_16->vr_dev,
      "failed to allocate DMA'able memory for Tx ring\n");
  goto fail;
 }

 VAR_17.vr_busaddr = 0;
 VAR_21 = FUNC_2(VAR_16->vr_cdata.vr_tx_ring_tag,
     VAR_16->vr_cdata.vr_tx_ring_map, VAR_16->vr_rdata.vr_tx_ring,
     VAR_14, VAR_15, &VAR_17, 0);
 if (VAR_21 != 0 || VAR_17.vr_busaddr == 0) {
  FUNC_5(VAR_16->vr_dev,
      "failed to load DMA'able memory for Tx ring\n");
  goto fail;
 }
 VAR_16->vr_rdata.vr_tx_ring_paddr = VAR_17.vr_busaddr;


 VAR_21 = FUNC_3(VAR_16->vr_cdata.vr_rx_ring_tag,
     (void **)&VAR_16->vr_rdata.vr_rx_ring, VAR_1 |
     VAR_0 | VAR_2, &VAR_16->vr_cdata.vr_rx_ring_map);
 if (VAR_21 != 0) {
  FUNC_5(VAR_16->vr_dev,
      "failed to allocate DMA'able memory for Rx ring\n");
  goto fail;
 }

 VAR_17.vr_busaddr = 0;
 VAR_21 = FUNC_2(VAR_16->vr_cdata.vr_rx_ring_tag,
     VAR_16->vr_cdata.vr_rx_ring_map, VAR_16->vr_rdata.vr_rx_ring,
     VAR_12, VAR_15, &VAR_17, 0);
 if (VAR_21 != 0 || VAR_17.vr_busaddr == 0) {
  FUNC_5(VAR_16->vr_dev,
      "failed to load DMA'able memory for Rx ring\n");
  goto fail;
 }
 VAR_16->vr_rdata.vr_rx_ring_paddr = VAR_17.vr_busaddr;


 for (VAR_22 = 0; VAR_22 < VAR_13; VAR_22++) {
  VAR_18 = &VAR_16->vr_cdata.vr_txdesc[VAR_22];
  VAR_18->tx_m = ((void*)0);
  VAR_18->tx_dmamap = ((void*)0);
  VAR_21 = FUNC_1(VAR_16->vr_cdata.vr_tx_tag, 0,
      &VAR_18->tx_dmamap);
  if (VAR_21 != 0) {
   FUNC_5(VAR_16->vr_dev,
       "failed to create Tx dmamap\n");
   goto fail;
  }
 }

 if ((VAR_21 = FUNC_1(VAR_16->vr_cdata.vr_rx_tag, 0,
     &VAR_16->vr_cdata.vr_rx_sparemap)) != 0) {
  FUNC_5(VAR_16->vr_dev,
      "failed to create spare Rx dmamap\n");
  goto fail;
 }
 for (VAR_22 = 0; VAR_22 < VAR_11; VAR_22++) {
  VAR_19 = &VAR_16->vr_cdata.vr_rxdesc[VAR_22];
  VAR_19->rx_m = ((void*)0);
  VAR_19->rx_dmamap = ((void*)0);
  VAR_21 = FUNC_1(VAR_16->vr_cdata.vr_rx_tag, 0,
      &VAR_19->rx_dmamap);
  if (VAR_21 != 0) {
   FUNC_5(VAR_16->vr_dev,
       "failed to create Rx dmamap\n");
   goto fail;
  }
 }

fail:
 return (VAR_21);
}
