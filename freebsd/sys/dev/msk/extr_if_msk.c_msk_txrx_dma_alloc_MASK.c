
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msk_txdesc {int * tx_dmamap; int * tx_m; } ;
struct msk_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct TYPE_3__ {int msk_rx_tag; struct msk_rxdesc* msk_rxdesc; int * msk_rx_sparemap; int msk_tx_tag; struct msk_txdesc* msk_txdesc; int msk_rx_ring_map; int msk_rx_ring_tag; int msk_tx_ring_map; int msk_tx_ring_tag; int msk_parent_tag; } ;
struct TYPE_4__ {scalar_t__ msk_rx_ring_paddr; int msk_rx_ring; scalar_t__ msk_tx_ring_paddr; int msk_tx_ring; } ;
struct msk_if_softc {int msk_flags; int msk_if_dev; TYPE_1__ msk_cdata; TYPE_2__ msk_rdata; } ;
struct msk_dmamap_arg {scalar_t__ msk_busaddr; } ;
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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,int ,int ,int ,struct msk_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_6(struct msk_if_softc *VAR_18)
{
 struct msk_dmamap_arg VAR_19;
 struct msk_txdesc *VAR_20;
 struct msk_rxdesc *VAR_21;
 bus_size_t VAR_22;
 int VAR_23, VAR_24;


 VAR_23 = FUNC_0(
      FUNC_4(VAR_18->msk_if_dev),
      1, 0,
      VAR_4,
      VAR_4,
      ((void*)0), ((void*)0),
      VAR_5,
      0,
      VAR_5,
      0,
      ((void*)0), ((void*)0),
      &VAR_18->msk_cdata.msk_parent_tag);
 if (VAR_23 != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to create parent DMA tag\n");
  goto fail;
 }

 VAR_23 = FUNC_0(VAR_18->msk_cdata.msk_parent_tag,
      VAR_9, 0,
      VAR_4,
      VAR_4,
      ((void*)0), ((void*)0),
      VAR_16,
      1,
      VAR_16,
      0,
      ((void*)0), ((void*)0),
      &VAR_18->msk_cdata.msk_tx_ring_tag);
 if (VAR_23 != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to create Tx ring DMA tag\n");
  goto fail;
 }


 VAR_23 = FUNC_0(VAR_18->msk_cdata.msk_parent_tag,
      VAR_9, 0,
      VAR_4,
      VAR_4,
      ((void*)0), ((void*)0),
      VAR_12,
      1,
      VAR_12,
      0,
      ((void*)0), ((void*)0),
      &VAR_18->msk_cdata.msk_rx_ring_tag);
 if (VAR_23 != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to create Rx ring DMA tag\n");
  goto fail;
 }


 VAR_23 = FUNC_0(VAR_18->msk_cdata.msk_parent_tag,
      1, 0,
      VAR_4,
      VAR_4,
      ((void*)0), ((void*)0),
      VAR_14,
      VAR_8,
      VAR_13,
      0,
      ((void*)0), ((void*)0),
      &VAR_18->msk_cdata.msk_tx_tag);
 if (VAR_23 != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to create Tx DMA tag\n");
  goto fail;
 }

 VAR_22 = 1;




 if ((VAR_18->msk_flags & VAR_7) != 0)
  VAR_22 = VAR_10;

 VAR_23 = FUNC_0(VAR_18->msk_cdata.msk_parent_tag,
      VAR_22, 0,
      VAR_4,
      VAR_4,
      ((void*)0), ((void*)0),
      VAR_6,
      1,
      VAR_6,
      0,
      ((void*)0), ((void*)0),
      &VAR_18->msk_cdata.msk_rx_tag);
 if (VAR_23 != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to create Rx DMA tag\n");
  goto fail;
 }


 VAR_23 = FUNC_3(VAR_18->msk_cdata.msk_tx_ring_tag,
     (void **)&VAR_18->msk_rdata.msk_tx_ring, VAR_2 |
     VAR_0 | VAR_3, &VAR_18->msk_cdata.msk_tx_ring_map);
 if (VAR_23 != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to allocate DMA'able memory for Tx ring\n");
  goto fail;
 }

 VAR_19.msk_busaddr = 0;
 VAR_23 = FUNC_2(VAR_18->msk_cdata.msk_tx_ring_tag,
     VAR_18->msk_cdata.msk_tx_ring_map, VAR_18->msk_rdata.msk_tx_ring,
     VAR_16, VAR_17, &VAR_19, VAR_1);
 if (VAR_23 != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to load DMA'able memory for Tx ring\n");
  goto fail;
 }
 VAR_18->msk_rdata.msk_tx_ring_paddr = VAR_19.msk_busaddr;


 VAR_23 = FUNC_3(VAR_18->msk_cdata.msk_rx_ring_tag,
     (void **)&VAR_18->msk_rdata.msk_rx_ring, VAR_2 |
     VAR_0 | VAR_3, &VAR_18->msk_cdata.msk_rx_ring_map);
 if (VAR_23 != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to allocate DMA'able memory for Rx ring\n");
  goto fail;
 }

 VAR_19.msk_busaddr = 0;
 VAR_23 = FUNC_2(VAR_18->msk_cdata.msk_rx_ring_tag,
     VAR_18->msk_cdata.msk_rx_ring_map, VAR_18->msk_rdata.msk_rx_ring,
     VAR_12, VAR_17, &VAR_19, VAR_1);
 if (VAR_23 != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to load DMA'able memory for Rx ring\n");
  goto fail;
 }
 VAR_18->msk_rdata.msk_rx_ring_paddr = VAR_19.msk_busaddr;


 for (VAR_24 = 0; VAR_24 < VAR_15; VAR_24++) {
  VAR_20 = &VAR_18->msk_cdata.msk_txdesc[VAR_24];
  VAR_20->tx_m = ((void*)0);
  VAR_20->tx_dmamap = ((void*)0);
  VAR_23 = FUNC_1(VAR_18->msk_cdata.msk_tx_tag, 0,
      &VAR_20->tx_dmamap);
  if (VAR_23 != 0) {
   FUNC_5(VAR_18->msk_if_dev,
       "failed to create Tx dmamap\n");
   goto fail;
  }
 }

 if ((VAR_23 = FUNC_1(VAR_18->msk_cdata.msk_rx_tag, 0,
     &VAR_18->msk_cdata.msk_rx_sparemap)) != 0) {
  FUNC_5(VAR_18->msk_if_dev,
      "failed to create spare Rx dmamap\n");
  goto fail;
 }
 for (VAR_24 = 0; VAR_24 < VAR_11; VAR_24++) {
  VAR_21 = &VAR_18->msk_cdata.msk_rxdesc[VAR_24];
  VAR_21->rx_m = ((void*)0);
  VAR_21->rx_dmamap = ((void*)0);
  VAR_23 = FUNC_1(VAR_18->msk_cdata.msk_rx_tag, 0,
      &VAR_21->rx_dmamap);
  if (VAR_23 != 0) {
   FUNC_5(VAR_18->msk_if_dev,
       "failed to create Rx dmamap\n");
   goto fail;
  }
 }

fail:
 return (VAR_23);
}
