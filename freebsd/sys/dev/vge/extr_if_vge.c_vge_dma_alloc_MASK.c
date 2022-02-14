
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vge_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_4__ {int vge_rx_tag; struct vge_rxdesc* vge_rxdesc; int * vge_rx_sparemap; int vge_tx_tag; struct vge_txdesc* vge_txdesc; int vge_buffer_tag; int vge_rx_ring_map; int vge_rx_ring_tag; int vge_tx_ring_map; int vge_tx_ring_tag; int vge_ring_tag; } ;
struct TYPE_3__ {scalar_t__ vge_tx_ring_paddr; scalar_t__ vge_rx_ring_paddr; int vge_rx_ring; int vge_tx_ring; } ;
struct vge_softc {int vge_flags; int vge_dev; TYPE_2__ vge_cdata; TYPE_1__ vge_rdata; } ;
struct vge_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct vge_dmamap_arg {scalar_t__ vge_busaddr; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,int,int ,int,int,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int ,int ,int ,int,int ,struct vge_dmamap_arg*,int ) ;
 int FUNC_4 (int ,void**,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct vge_softc*) ;
 int VAR_18 ;

__attribute__((used)) static int
FUNC_8(struct vge_softc *VAR_19)
{
 struct vge_dmamap_arg VAR_20;
 struct vge_txdesc *VAR_21;
 struct vge_rxdesc *VAR_22;
 bus_addr_t VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27;
 if ((VAR_19->vge_flags & VAR_9) != 0)
  VAR_23 = VAR_4;
 else
  VAR_23 = VAR_5;

again:

 VAR_26 = FUNC_1(FUNC_5(VAR_19->vge_dev),
     1, 0,
     VAR_23,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_6,
     0,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_19->vge_cdata.vge_ring_tag);
 if (VAR_26 != 0) {
  FUNC_6(VAR_19->vge_dev,
      "could not create parent DMA tag.\n");
  goto fail;
 }


 VAR_26 = FUNC_1(VAR_19->vge_cdata.vge_ring_tag,
     VAR_17, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_16,
     1,
     VAR_16,
     0,
     ((void*)0), ((void*)0),
     &VAR_19->vge_cdata.vge_tx_ring_tag);
 if (VAR_26 != 0) {
  FUNC_6(VAR_19->vge_dev,
      "could not allocate Tx ring DMA tag.\n");
  goto fail;
 }


 VAR_26 = FUNC_1(VAR_19->vge_cdata.vge_ring_tag,
     VAR_14, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_13,
     1,
     VAR_13,
     0,
     ((void*)0), ((void*)0),
     &VAR_19->vge_cdata.vge_rx_ring_tag);
 if (VAR_26 != 0) {
  FUNC_6(VAR_19->vge_dev,
      "could not allocate Rx ring DMA tag.\n");
  goto fail;
 }


 VAR_26 = FUNC_4(VAR_19->vge_cdata.vge_tx_ring_tag,
     (void **)&VAR_19->vge_rdata.vge_tx_ring,
     VAR_2 | VAR_3 | VAR_0,
     &VAR_19->vge_cdata.vge_tx_ring_map);
 if (VAR_26 != 0) {
  FUNC_6(VAR_19->vge_dev,
      "could not allocate DMA'able memory for Tx ring.\n");
  goto fail;
 }

 VAR_20.vge_busaddr = 0;
 VAR_26 = FUNC_3(VAR_19->vge_cdata.vge_tx_ring_tag,
     VAR_19->vge_cdata.vge_tx_ring_map, VAR_19->vge_rdata.vge_tx_ring,
     VAR_16, VAR_18, &VAR_20, VAR_1);
 if (VAR_26 != 0 || VAR_20.vge_busaddr == 0) {
  FUNC_6(VAR_19->vge_dev,
      "could not load DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_19->vge_rdata.vge_tx_ring_paddr = VAR_20.vge_busaddr;


 VAR_26 = FUNC_4(VAR_19->vge_cdata.vge_rx_ring_tag,
     (void **)&VAR_19->vge_rdata.vge_rx_ring,
     VAR_2 | VAR_3 | VAR_0,
     &VAR_19->vge_cdata.vge_rx_ring_map);
 if (VAR_26 != 0) {
  FUNC_6(VAR_19->vge_dev,
      "could not allocate DMA'able memory for Rx ring.\n");
  goto fail;
 }

 VAR_20.vge_busaddr = 0;
 VAR_26 = FUNC_3(VAR_19->vge_cdata.vge_rx_ring_tag,
     VAR_19->vge_cdata.vge_rx_ring_map, VAR_19->vge_rdata.vge_rx_ring,
     VAR_13, VAR_18, &VAR_20, VAR_1);
 if (VAR_26 != 0 || VAR_20.vge_busaddr == 0) {
  FUNC_6(VAR_19->vge_dev,
      "could not load DMA'able memory for Rx ring.\n");
  goto fail;
 }
 VAR_19->vge_rdata.vge_rx_ring_paddr = VAR_20.vge_busaddr;


 VAR_24 = VAR_19->vge_rdata.vge_tx_ring_paddr + VAR_16;
 VAR_25 = VAR_19->vge_rdata.vge_rx_ring_paddr + VAR_13;
 if ((FUNC_0(VAR_24) !=
     FUNC_0(VAR_19->vge_rdata.vge_tx_ring_paddr)) ||
     (FUNC_0(VAR_25) !=
     FUNC_0(VAR_19->vge_rdata.vge_rx_ring_paddr)) ||
     FUNC_0(VAR_24) != FUNC_0(VAR_25)) {
  FUNC_6(VAR_19->vge_dev, "4GB boundary crossed, "
      "switching to 32bit DMA address mode.\n");
  FUNC_7(VAR_19);

  VAR_23 = VAR_5;
  goto again;
 }

 if ((VAR_19->vge_flags & VAR_9) != 0)
  VAR_23 = VAR_8;
 else
  VAR_23 = VAR_5;

 VAR_26 = FUNC_1(FUNC_5(VAR_19->vge_dev),
     1, 0,
     VAR_23,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_6,
     0,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_19->vge_cdata.vge_buffer_tag);
 if (VAR_26 != 0) {
  FUNC_6(VAR_19->vge_dev,
      "could not create parent buffer DMA tag.\n");
  goto fail;
 }


 VAR_26 = FUNC_1(VAR_19->vge_cdata.vge_buffer_tag,
     1, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_7 * VAR_10,
     VAR_10,
     VAR_7,
     0,
     ((void*)0), ((void*)0),
     &VAR_19->vge_cdata.vge_tx_tag);
 if (VAR_26 != 0) {
  FUNC_6(VAR_19->vge_dev, "could not create Tx DMA tag.\n");
  goto fail;
 }


 VAR_26 = FUNC_1(VAR_19->vge_cdata.vge_buffer_tag,
     VAR_11, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_7,
     1,
     VAR_7,
     0,
     ((void*)0), ((void*)0),
     &VAR_19->vge_cdata.vge_rx_tag);
 if (VAR_26 != 0) {
  FUNC_6(VAR_19->vge_dev, "could not create Rx DMA tag.\n");
  goto fail;
 }


 for (VAR_27 = 0; VAR_27 < VAR_15; VAR_27++) {
  VAR_21 = &VAR_19->vge_cdata.vge_txdesc[VAR_27];
  VAR_21->tx_m = ((void*)0);
  VAR_21->tx_dmamap = ((void*)0);
  VAR_26 = FUNC_2(VAR_19->vge_cdata.vge_tx_tag, 0,
      &VAR_21->tx_dmamap);
  if (VAR_26 != 0) {
   FUNC_6(VAR_19->vge_dev,
       "could not create Tx dmamap.\n");
   goto fail;
  }
 }

 if ((VAR_26 = FUNC_2(VAR_19->vge_cdata.vge_rx_tag, 0,
     &VAR_19->vge_cdata.vge_rx_sparemap)) != 0) {
  FUNC_6(VAR_19->vge_dev,
      "could not create spare Rx dmamap.\n");
  goto fail;
 }
 for (VAR_27 = 0; VAR_27 < VAR_12; VAR_27++) {
  VAR_22 = &VAR_19->vge_cdata.vge_rxdesc[VAR_27];
  VAR_22->rx_m = ((void*)0);
  VAR_22->rx_dmamap = ((void*)0);
  VAR_26 = FUNC_2(VAR_19->vge_cdata.vge_rx_tag, 0,
      &VAR_22->rx_dmamap);
  if (VAR_26 != 0) {
   FUNC_6(VAR_19->vge_dev,
       "could not create Rx dmamap.\n");
   goto fail;
  }
 }

fail:
 return (VAR_26);
}
