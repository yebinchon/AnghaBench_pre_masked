
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct are_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_3__ {int are_rx_tag; struct are_rxdesc* are_rxdesc; int * are_rx_sparemap; int are_tx_tag; struct are_txdesc* are_txdesc; int are_rx_ring_map; int are_rx_ring_tag; int are_tx_ring_map; int are_tx_ring_tag; int are_parent_tag; } ;
struct TYPE_4__ {scalar_t__ are_tx_ring_paddr; scalar_t__ are_rx_ring_paddr; int are_rx_ring; int are_tx_ring; } ;
struct are_softc {int are_dev; TYPE_1__ are_cdata; TYPE_2__ are_rdata; } ;
struct are_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct are_dmamap_arg {scalar_t__ are_busaddr; } ;


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
 int FUNC_2 (int ,int ,int ,int,int ,struct are_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct are_softc *VAR_15)
{
 struct are_dmamap_arg VAR_16;
 struct are_txdesc *VAR_17;
 struct are_rxdesc *VAR_18;
 int VAR_19, VAR_20;


 VAR_19 = FUNC_0(
     FUNC_4(VAR_15->are_dev),
     1, 0,
     VAR_11,
     VAR_10,
     ((void*)0), ((void*)0),
     VAR_12,
     0,
     VAR_12,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->are_cdata.are_parent_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->are_dev, "failed to create parent DMA tag\n");
  goto fail;
 }

 VAR_19 = FUNC_0(
     VAR_15->are_cdata.are_parent_tag,
     VAR_1, 0,
     VAR_10,
     VAR_10,
     ((void*)0), ((void*)0),
     VAR_6,
     1,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->are_cdata.are_tx_ring_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->are_dev, "failed to create Tx ring DMA tag\n");
  goto fail;
 }


 VAR_19 = FUNC_0(
     VAR_15->are_cdata.are_parent_tag,
     VAR_1, 0,
     VAR_10,
     VAR_10,
     ((void*)0), ((void*)0),
     VAR_4,
     1,
     VAR_4,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->are_cdata.are_rx_ring_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->are_dev, "failed to create Rx ring DMA tag\n");
  goto fail;
 }


 VAR_19 = FUNC_0(
     VAR_15->are_cdata.are_parent_tag,
     sizeof(uint32_t), 0,
     VAR_10,
     VAR_10,
     ((void*)0), ((void*)0),
     VAR_13 * VAR_0,
     VAR_0,
     VAR_13,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->are_cdata.are_tx_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->are_dev, "failed to create Tx DMA tag\n");
  goto fail;
 }


 VAR_19 = FUNC_0(
     VAR_15->are_cdata.are_parent_tag,
     VAR_2, 0,
     VAR_10,
     VAR_10,
     ((void*)0), ((void*)0),
     VAR_13,
     1,
     VAR_13,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->are_cdata.are_rx_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->are_dev, "failed to create Rx DMA tag\n");
  goto fail;
 }


 VAR_19 = FUNC_3(VAR_15->are_cdata.are_tx_ring_tag,
     (void **)&VAR_15->are_rdata.are_tx_ring, VAR_8 |
     VAR_7 | VAR_9, &VAR_15->are_cdata.are_tx_ring_map);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->are_dev,
      "failed to allocate DMA'able memory for Tx ring\n");
  goto fail;
 }

 VAR_16.are_busaddr = 0;
 VAR_19 = FUNC_2(VAR_15->are_cdata.are_tx_ring_tag,
     VAR_15->are_cdata.are_tx_ring_map, VAR_15->are_rdata.are_tx_ring,
     VAR_6, VAR_14, &VAR_16, 0);
 if (VAR_19 != 0 || VAR_16.are_busaddr == 0) {
  FUNC_5(VAR_15->are_dev,
      "failed to load DMA'able memory for Tx ring\n");
  goto fail;
 }
 VAR_15->are_rdata.are_tx_ring_paddr = VAR_16.are_busaddr;


 VAR_19 = FUNC_3(VAR_15->are_cdata.are_rx_ring_tag,
     (void **)&VAR_15->are_rdata.are_rx_ring, VAR_8 |
     VAR_7 | VAR_9, &VAR_15->are_cdata.are_rx_ring_map);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->are_dev,
      "failed to allocate DMA'able memory for Rx ring\n");
  goto fail;
 }

 VAR_16.are_busaddr = 0;
 VAR_19 = FUNC_2(VAR_15->are_cdata.are_rx_ring_tag,
     VAR_15->are_cdata.are_rx_ring_map, VAR_15->are_rdata.are_rx_ring,
     VAR_4, VAR_14, &VAR_16, 0);
 if (VAR_19 != 0 || VAR_16.are_busaddr == 0) {
  FUNC_5(VAR_15->are_dev,
      "failed to load DMA'able memory for Rx ring\n");
  goto fail;
 }
 VAR_15->are_rdata.are_rx_ring_paddr = VAR_16.are_busaddr;


 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
  VAR_17 = &VAR_15->are_cdata.are_txdesc[VAR_20];
  VAR_17->tx_m = ((void*)0);
  VAR_17->tx_dmamap = ((void*)0);
  VAR_19 = FUNC_1(VAR_15->are_cdata.are_tx_tag, 0,
      &VAR_17->tx_dmamap);
  if (VAR_19 != 0) {
   FUNC_5(VAR_15->are_dev,
       "failed to create Tx dmamap\n");
   goto fail;
  }
 }

 if ((VAR_19 = FUNC_1(VAR_15->are_cdata.are_rx_tag, 0,
     &VAR_15->are_cdata.are_rx_sparemap)) != 0) {
  FUNC_5(VAR_15->are_dev,
      "failed to create spare Rx dmamap\n");
  goto fail;
 }
 for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++) {
  VAR_18 = &VAR_15->are_cdata.are_rxdesc[VAR_20];
  VAR_18->rx_m = ((void*)0);
  VAR_18->rx_dmamap = ((void*)0);
  VAR_19 = FUNC_1(VAR_15->are_cdata.are_rx_tag, 0,
      &VAR_18->rx_dmamap);
  if (VAR_19 != 0) {
   FUNC_5(VAR_15->are_dev,
       "failed to create Rx dmamap\n");
   goto fail;
  }
 }

fail:
 return (VAR_19);
}
