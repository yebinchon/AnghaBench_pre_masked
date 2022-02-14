
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jme_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_4__ {int jme_rx_tag; struct jme_rxdesc* jme_rxdesc; int * jme_rx_sparemap; int jme_tx_tag; struct jme_txdesc* jme_txdesc; int jme_ssb_map; int jme_ssb_tag; int jme_buffer_tag; int jme_rx_ring_map; int jme_rx_ring_tag; int jme_tx_ring_map; int jme_tx_ring_tag; int jme_ring_tag; } ;
struct TYPE_3__ {scalar_t__ jme_tx_ring_paddr; scalar_t__ jme_rx_ring_paddr; scalar_t__ jme_ssb_block_paddr; int jme_ssb_block; int jme_rx_ring; int jme_tx_ring; } ;
struct jme_softc {int jme_flags; int jme_dev; TYPE_2__ jme_cdata; TYPE_1__ jme_rdata; } ;
struct jme_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct jme_dmamap_arg {scalar_t__ jme_busaddr; } ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (int ,int,int ,scalar_t__,scalar_t__,int *,int *,scalar_t__,int,scalar_t__,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int ,struct jme_dmamap_arg*,int ) ;
 int FUNC_4 (int ,void**,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct jme_softc*) ;
 int VAR_21 ;

__attribute__((used)) static int
FUNC_8(struct jme_softc *VAR_22)
{
 struct jme_dmamap_arg VAR_23;
 struct jme_txdesc *VAR_24;
 struct jme_rxdesc *VAR_25;
 bus_addr_t VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30;

 VAR_26 = VAR_4;
 if ((VAR_22->jme_flags & VAR_7) != 0)
  VAR_26 = VAR_5;

again:

 VAR_29 = FUNC_1(FUNC_5(VAR_22->jme_dev),
     1, 0,
     VAR_26,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_6,
     0,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->jme_cdata.jme_ring_tag);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not create parent ring DMA tag.\n");
  goto fail;
 }

 VAR_29 = FUNC_1(VAR_22->jme_cdata.jme_ring_tag,
     VAR_17, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_19,
     1,
     VAR_19,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->jme_cdata.jme_tx_ring_tag);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not allocate Tx ring DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_1(VAR_22->jme_cdata.jme_ring_tag,
     VAR_10, 0,
     VAR_26,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_12,
     1,
     VAR_12,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->jme_cdata.jme_rx_ring_tag);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not allocate Rx ring DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_4(VAR_22->jme_cdata.jme_tx_ring_tag,
     (void **)&VAR_22->jme_rdata.jme_tx_ring,
     VAR_2 | VAR_3 | VAR_0,
     &VAR_22->jme_cdata.jme_tx_ring_map);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not allocate DMA'able memory for Tx ring.\n");
  goto fail;
 }

 VAR_23.jme_busaddr = 0;
 VAR_29 = FUNC_3(VAR_22->jme_cdata.jme_tx_ring_tag,
     VAR_22->jme_cdata.jme_tx_ring_map, VAR_22->jme_rdata.jme_tx_ring,
     VAR_19, VAR_21, &VAR_23, VAR_1);
 if (VAR_29 != 0 || VAR_23.jme_busaddr == 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not load DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_22->jme_rdata.jme_tx_ring_paddr = VAR_23.jme_busaddr;


 VAR_29 = FUNC_4(VAR_22->jme_cdata.jme_rx_ring_tag,
     (void **)&VAR_22->jme_rdata.jme_rx_ring,
     VAR_2 | VAR_3 | VAR_0,
     &VAR_22->jme_cdata.jme_rx_ring_map);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not allocate DMA'able memory for Rx ring.\n");
  goto fail;
 }

 VAR_23.jme_busaddr = 0;
 VAR_29 = FUNC_3(VAR_22->jme_cdata.jme_rx_ring_tag,
     VAR_22->jme_cdata.jme_rx_ring_map, VAR_22->jme_rdata.jme_rx_ring,
     VAR_12, VAR_21, &VAR_23, VAR_1);
 if (VAR_29 != 0 || VAR_23.jme_busaddr == 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not load DMA'able memory for Rx ring.\n");
  goto fail;
 }
 VAR_22->jme_rdata.jme_rx_ring_paddr = VAR_23.jme_busaddr;

 if (VAR_26 != VAR_5) {

  VAR_28 = VAR_22->jme_rdata.jme_tx_ring_paddr +
      VAR_19;
  VAR_27 = VAR_22->jme_rdata.jme_rx_ring_paddr +
      VAR_12;
  if ((FUNC_0(VAR_28) !=
      FUNC_0(VAR_22->jme_rdata.jme_tx_ring_paddr)) ||
      (FUNC_0(VAR_27) !=
       FUNC_0(VAR_22->jme_rdata.jme_rx_ring_paddr))) {
   FUNC_6(VAR_22->jme_dev, "4GB boundary crossed, "
       "switching to 32bit DMA address mode.\n");
   FUNC_7(VAR_22);

   VAR_26 = VAR_5;
   goto again;
  }
 }

 VAR_26 = VAR_4;
 if ((VAR_22->jme_flags & VAR_7) != 0)
  VAR_26 = VAR_5;

 VAR_29 = FUNC_1(FUNC_5(VAR_22->jme_dev),
     1, 0,
     VAR_26,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_6,
     0,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->jme_cdata.jme_buffer_tag);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not create parent buffer DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_1(VAR_22->jme_cdata.jme_buffer_tag,
     VAR_13, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_14,
     1,
     VAR_14,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->jme_cdata.jme_ssb_tag);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not create shared status block DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_1(VAR_22->jme_cdata.jme_buffer_tag,
     1, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_16,
     VAR_8,
     VAR_15,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->jme_cdata.jme_tx_tag);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev, "could not create Tx DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_1(VAR_22->jme_cdata.jme_buffer_tag,
     VAR_9, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_20,
     1,
     VAR_20,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->jme_cdata.jme_rx_tag);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev, "could not create Rx DMA tag.\n");
  goto fail;
 }





 VAR_29 = FUNC_4(VAR_22->jme_cdata.jme_ssb_tag,
     (void **)&VAR_22->jme_rdata.jme_ssb_block,
     VAR_2 | VAR_3 | VAR_0,
     &VAR_22->jme_cdata.jme_ssb_map);
 if (VAR_29 != 0) {
  FUNC_6(VAR_22->jme_dev, "could not allocate DMA'able "
      "memory for shared status block.\n");
  goto fail;
 }

 VAR_23.jme_busaddr = 0;
 VAR_29 = FUNC_3(VAR_22->jme_cdata.jme_ssb_tag,
     VAR_22->jme_cdata.jme_ssb_map, VAR_22->jme_rdata.jme_ssb_block,
     VAR_14, VAR_21, &VAR_23, VAR_1);
 if (VAR_29 != 0 || VAR_23.jme_busaddr == 0) {
  FUNC_6(VAR_22->jme_dev, "could not load DMA'able memory "
      "for shared status block.\n");
  goto fail;
 }
 VAR_22->jme_rdata.jme_ssb_block_paddr = VAR_23.jme_busaddr;


 for (VAR_30 = 0; VAR_30 < VAR_18; VAR_30++) {
  VAR_24 = &VAR_22->jme_cdata.jme_txdesc[VAR_30];
  VAR_24->tx_m = ((void*)0);
  VAR_24->tx_dmamap = ((void*)0);
  VAR_29 = FUNC_2(VAR_22->jme_cdata.jme_tx_tag, 0,
      &VAR_24->tx_dmamap);
  if (VAR_29 != 0) {
   FUNC_6(VAR_22->jme_dev,
       "could not create Tx dmamap.\n");
   goto fail;
  }
 }

 if ((VAR_29 = FUNC_2(VAR_22->jme_cdata.jme_rx_tag, 0,
     &VAR_22->jme_cdata.jme_rx_sparemap)) != 0) {
  FUNC_6(VAR_22->jme_dev,
      "could not create spare Rx dmamap.\n");
  goto fail;
 }
 for (VAR_30 = 0; VAR_30 < VAR_11; VAR_30++) {
  VAR_25 = &VAR_22->jme_cdata.jme_rxdesc[VAR_30];
  VAR_25->rx_m = ((void*)0);
  VAR_25->rx_dmamap = ((void*)0);
  VAR_29 = FUNC_2(VAR_22->jme_cdata.jme_rx_tag, 0,
      &VAR_25->rx_dmamap);
  if (VAR_29 != 0) {
   FUNC_6(VAR_22->jme_dev,
       "could not create Rx dmamap.\n");
   goto fail;
  }
 }

fail:
 return (VAR_29);
}
