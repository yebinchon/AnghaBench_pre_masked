
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arge_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_4__ {int arge_rx_tag; struct arge_rxdesc* arge_rxdesc; int * arge_rx_sparemap; int arge_tx_tag; struct arge_txdesc* arge_txdesc; int arge_rx_ring_map; int arge_rx_ring_tag; int arge_tx_ring_map; int arge_tx_ring_tag; int arge_parent_tag; } ;
struct TYPE_3__ {scalar_t__ arge_tx_ring_paddr; scalar_t__ arge_rx_ring_paddr; int arge_rx_ring; int arge_tx_ring; } ;
struct arge_softc {int arge_hw_flags; int arge_dev; TYPE_2__ arge_cdata; TYPE_1__ arge_rdata; } ;
struct arge_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct arge_dmamap_arg {scalar_t__ arge_busaddr; } ;


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
 int FUNC_2 (int ,int ,int ,int,int ,struct arge_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct arge_softc *VAR_16)
{
 struct arge_dmamap_arg VAR_17;
 struct arge_txdesc *VAR_18;
 struct arge_rxdesc *VAR_19;
 int VAR_20, VAR_21;
 int VAR_22, VAR_23;


 VAR_22 = 4;
 VAR_23 = 4;

 if (VAR_16->arge_hw_flags & VAR_1)
  VAR_22 = 1;
 if (VAR_16->arge_hw_flags & VAR_0)
  VAR_23 = 1;


 VAR_20 = FUNC_0(
     FUNC_4(VAR_16->arge_dev),
     1, 0,
     VAR_12,
     VAR_11,
     ((void*)0), ((void*)0),
     VAR_13,
     0,
     VAR_13,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->arge_cdata.arge_parent_tag);
 if (VAR_20 != 0) {
  FUNC_5(VAR_16->arge_dev,
      "failed to create parent DMA tag\n");
  goto fail;
 }

 VAR_20 = FUNC_0(
     VAR_16->arge_cdata.arge_parent_tag,
     VAR_3, 0,
     VAR_11,
     VAR_11,
     ((void*)0), ((void*)0),
     VAR_6,
     1,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->arge_cdata.arge_tx_ring_tag);
 if (VAR_20 != 0) {
  FUNC_5(VAR_16->arge_dev,
      "failed to create Tx ring DMA tag\n");
  goto fail;
 }


 VAR_20 = FUNC_0(
     VAR_16->arge_cdata.arge_parent_tag,
     VAR_3, 0,
     VAR_11,
     VAR_11,
     ((void*)0), ((void*)0),
     VAR_4,
     1,
     VAR_4,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->arge_cdata.arge_rx_ring_tag);
 if (VAR_20 != 0) {
  FUNC_5(VAR_16->arge_dev,
      "failed to create Rx ring DMA tag\n");
  goto fail;
 }


 VAR_20 = FUNC_0(
     VAR_16->arge_cdata.arge_parent_tag,
     VAR_22, 0,
     VAR_11,
     VAR_11,
     ((void*)0), ((void*)0),
     VAR_14 * VAR_2,
     VAR_2,
     VAR_14,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->arge_cdata.arge_tx_tag);
 if (VAR_20 != 0) {
  FUNC_5(VAR_16->arge_dev, "failed to create Tx DMA tag\n");
  goto fail;
 }


 VAR_20 = FUNC_0(
     VAR_16->arge_cdata.arge_parent_tag,
     VAR_23, 0,
     VAR_11,
     VAR_11,
     ((void*)0), ((void*)0),
     VAR_14,
     VAR_2,
     VAR_14,
     0,
     ((void*)0), ((void*)0),
     &VAR_16->arge_cdata.arge_rx_tag);
 if (VAR_20 != 0) {
  FUNC_5(VAR_16->arge_dev, "failed to create Rx DMA tag\n");
  goto fail;
 }


 VAR_20 = FUNC_3(VAR_16->arge_cdata.arge_tx_ring_tag,
     (void **)&VAR_16->arge_rdata.arge_tx_ring, VAR_9 |
     VAR_8 | VAR_10,
     &VAR_16->arge_cdata.arge_tx_ring_map);
 if (VAR_20 != 0) {
  FUNC_5(VAR_16->arge_dev,
      "failed to allocate DMA'able memory for Tx ring\n");
  goto fail;
 }

 VAR_17.arge_busaddr = 0;
 VAR_20 = FUNC_2(VAR_16->arge_cdata.arge_tx_ring_tag,
     VAR_16->arge_cdata.arge_tx_ring_map, VAR_16->arge_rdata.arge_tx_ring,
     VAR_6, VAR_15, &VAR_17, 0);
 if (VAR_20 != 0 || VAR_17.arge_busaddr == 0) {
  FUNC_5(VAR_16->arge_dev,
      "failed to load DMA'able memory for Tx ring\n");
  goto fail;
 }
 VAR_16->arge_rdata.arge_tx_ring_paddr = VAR_17.arge_busaddr;


 VAR_20 = FUNC_3(VAR_16->arge_cdata.arge_rx_ring_tag,
     (void **)&VAR_16->arge_rdata.arge_rx_ring, VAR_9 |
     VAR_8 | VAR_10,
     &VAR_16->arge_cdata.arge_rx_ring_map);
 if (VAR_20 != 0) {
  FUNC_5(VAR_16->arge_dev,
      "failed to allocate DMA'able memory for Rx ring\n");
  goto fail;
 }

 VAR_17.arge_busaddr = 0;
 VAR_20 = FUNC_2(VAR_16->arge_cdata.arge_rx_ring_tag,
     VAR_16->arge_cdata.arge_rx_ring_map, VAR_16->arge_rdata.arge_rx_ring,
     VAR_4, VAR_15, &VAR_17, 0);
 if (VAR_20 != 0 || VAR_17.arge_busaddr == 0) {
  FUNC_5(VAR_16->arge_dev,
      "failed to load DMA'able memory for Rx ring\n");
  goto fail;
 }
 VAR_16->arge_rdata.arge_rx_ring_paddr = VAR_17.arge_busaddr;


 for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
  VAR_18 = &VAR_16->arge_cdata.arge_txdesc[VAR_21];
  VAR_18->tx_m = ((void*)0);
  VAR_18->tx_dmamap = ((void*)0);
  VAR_20 = FUNC_1(VAR_16->arge_cdata.arge_tx_tag, 0,
      &VAR_18->tx_dmamap);
  if (VAR_20 != 0) {
   FUNC_5(VAR_16->arge_dev,
       "failed to create Tx dmamap\n");
   goto fail;
  }
 }

 if ((VAR_20 = FUNC_1(VAR_16->arge_cdata.arge_rx_tag, 0,
     &VAR_16->arge_cdata.arge_rx_sparemap)) != 0) {
  FUNC_5(VAR_16->arge_dev,
      "failed to create spare Rx dmamap\n");
  goto fail;
 }
 for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++) {
  VAR_19 = &VAR_16->arge_cdata.arge_rxdesc[VAR_21];
  VAR_19->rx_m = ((void*)0);
  VAR_19->rx_dmamap = ((void*)0);
  VAR_20 = FUNC_1(VAR_16->arge_cdata.arge_rx_tag, 0,
      &VAR_19->rx_dmamap);
  if (VAR_20 != 0) {
   FUNC_5(VAR_16->arge_dev,
       "failed to create Rx dmamap\n");
   goto fail;
  }
 }

fail:
 return (VAR_20);
}
