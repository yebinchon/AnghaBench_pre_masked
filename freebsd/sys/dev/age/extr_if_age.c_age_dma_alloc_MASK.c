
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct age_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_4__ {int age_rx_tag; struct age_rxdesc* age_rxdesc; int * age_rx_sparemap; int age_tx_tag; struct age_txdesc* age_txdesc; int age_buffer_tag; int age_smb_block_map; int age_smb_block_tag; int age_cmb_block_map; int age_cmb_block_tag; int age_rr_ring_map; int age_rr_ring_tag; int age_rx_ring_map; int age_rx_ring_tag; int age_tx_ring_map; int age_tx_ring_tag; int age_parent_tag; } ;
struct TYPE_3__ {scalar_t__ age_tx_ring_paddr; scalar_t__ age_rx_ring_paddr; scalar_t__ age_rr_ring_paddr; scalar_t__ age_cmb_block_paddr; scalar_t__ age_smb_block_paddr; int age_smb_block; int age_cmb_block; int age_rr_ring; int age_rx_ring; int age_tx_ring; } ;
struct age_softc {int age_dev; TYPE_2__ age_cdata; TYPE_1__ age_rdata; } ;
struct age_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct age_dmamap_arg {scalar_t__ age_busaddr; } ;
typedef scalar_t__ bus_addr_t ;


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
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct age_softc*) ;
 int FUNC_1 (struct age_softc*) ;
 int VAR_23 ;
 int FUNC_2 (int ,int,int ,scalar_t__,scalar_t__,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int ,int ,int ,int ,int ,struct age_dmamap_arg*,int ) ;
 int FUNC_5 (int ,void**,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct age_softc *VAR_24)
{
 struct age_txdesc *VAR_25;
 struct age_rxdesc *VAR_26;
 bus_addr_t VAR_27;
 struct age_dmamap_arg VAR_28;
 int VAR_29, VAR_30;

 VAR_27 = VAR_19;

again:

 VAR_29 = FUNC_2(
     FUNC_6(VAR_24->age_dev),
     1, 0,
     VAR_27,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_21,
     0,
     VAR_21,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->age_cdata.age_parent_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not create parent DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->age_cdata.age_parent_tag,
     VAR_13, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_15,
     1,
     VAR_15,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->age_cdata.age_tx_ring_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not create Tx ring DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->age_cdata.age_parent_tag,
     VAR_6, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_8,
     1,
     VAR_8,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->age_cdata.age_rx_ring_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not create Rx ring DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->age_cdata.age_parent_tag,
     VAR_3, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_4,
     1,
     VAR_4,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->age_cdata.age_rr_ring_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not create Rx return ring DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->age_cdata.age_parent_tag,
     VAR_0, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_1,
     1,
     VAR_1,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->age_cdata.age_cmb_block_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not create CMB DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->age_cdata.age_parent_tag,
     VAR_9, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_10,
     1,
     VAR_10,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->age_cdata.age_smb_block_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not create SMB DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_5(VAR_24->age_cdata.age_tx_ring_tag,
     (void **)&VAR_24->age_rdata.age_tx_ring,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->age_cdata.age_tx_ring_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not allocate DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_28.age_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->age_cdata.age_tx_ring_tag,
     VAR_24->age_cdata.age_tx_ring_map, VAR_24->age_rdata.age_tx_ring,
     VAR_15, VAR_23, &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.age_busaddr == 0) {
  FUNC_7(VAR_24->age_dev,
      "could not load DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_24->age_rdata.age_tx_ring_paddr = VAR_28.age_busaddr;

 VAR_29 = FUNC_5(VAR_24->age_cdata.age_rx_ring_tag,
     (void **)&VAR_24->age_rdata.age_rx_ring,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->age_cdata.age_rx_ring_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not allocate DMA'able memory for Rx ring.\n");
  goto fail;
 }
 VAR_28.age_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->age_cdata.age_rx_ring_tag,
     VAR_24->age_cdata.age_rx_ring_map, VAR_24->age_rdata.age_rx_ring,
     VAR_8, VAR_23, &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.age_busaddr == 0) {
  FUNC_7(VAR_24->age_dev,
      "could not load DMA'able memory for Rx ring.\n");
  goto fail;
 }
 VAR_24->age_rdata.age_rx_ring_paddr = VAR_28.age_busaddr;

 VAR_29 = FUNC_5(VAR_24->age_cdata.age_rr_ring_tag,
     (void **)&VAR_24->age_rdata.age_rr_ring,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->age_cdata.age_rr_ring_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not allocate DMA'able memory for Rx return ring.\n");
  goto fail;
 }
 VAR_28.age_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->age_cdata.age_rr_ring_tag,
     VAR_24->age_cdata.age_rr_ring_map, VAR_24->age_rdata.age_rr_ring,
     VAR_4, VAR_23,
     &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.age_busaddr == 0) {
  FUNC_7(VAR_24->age_dev,
      "could not load DMA'able memory for Rx return ring.\n");
  goto fail;
 }
 VAR_24->age_rdata.age_rr_ring_paddr = VAR_28.age_busaddr;

 VAR_29 = FUNC_5(VAR_24->age_cdata.age_cmb_block_tag,
     (void **)&VAR_24->age_rdata.age_cmb_block,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->age_cdata.age_cmb_block_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not allocate DMA'able memory for CMB block.\n");
  goto fail;
 }
 VAR_28.age_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->age_cdata.age_cmb_block_tag,
     VAR_24->age_cdata.age_cmb_block_map, VAR_24->age_rdata.age_cmb_block,
     VAR_1, VAR_23, &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.age_busaddr == 0) {
  FUNC_7(VAR_24->age_dev,
      "could not load DMA'able memory for CMB block.\n");
  goto fail;
 }
 VAR_24->age_rdata.age_cmb_block_paddr = VAR_28.age_busaddr;

 VAR_29 = FUNC_5(VAR_24->age_cdata.age_smb_block_tag,
     (void **)&VAR_24->age_rdata.age_smb_block,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->age_cdata.age_smb_block_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not allocate DMA'able memory for SMB block.\n");
  goto fail;
 }
 VAR_28.age_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->age_cdata.age_smb_block_tag,
     VAR_24->age_cdata.age_smb_block_map, VAR_24->age_rdata.age_smb_block,
     VAR_10, VAR_23, &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.age_busaddr == 0) {
  FUNC_7(VAR_24->age_dev,
      "could not load DMA'able memory for SMB block.\n");
  goto fail;
 }
 VAR_24->age_rdata.age_smb_block_paddr = VAR_28.age_busaddr;





 if (VAR_27 != VAR_20 &&
     (VAR_29 = FUNC_0(VAR_24)) != 0) {
  FUNC_7(VAR_24->age_dev, "4GB boundary crossed, "
      "switching to 32bit DMA addressing mode.\n");
  FUNC_1(VAR_24);

  VAR_27 = VAR_20;
  goto again;
 }
 VAR_29 = FUNC_2(
     FUNC_6(VAR_24->age_dev),
     1, 0,
     VAR_20,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_21,
     0,
     VAR_21,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->age_cdata.age_buffer_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not create parent buffer DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->age_cdata.age_buffer_tag,
     1, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_12,
     VAR_2,
     VAR_11,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->age_cdata.age_tx_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev, "could not create Tx DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->age_cdata.age_buffer_tag,
     VAR_5, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_22,
     1,
     VAR_22,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->age_cdata.age_rx_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->age_dev, "could not create Rx DMA tag.\n");
  goto fail;
 }


 for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
  VAR_25 = &VAR_24->age_cdata.age_txdesc[VAR_30];
  VAR_25->tx_m = ((void*)0);
  VAR_25->tx_dmamap = ((void*)0);
  VAR_29 = FUNC_3(VAR_24->age_cdata.age_tx_tag, 0,
      &VAR_25->tx_dmamap);
  if (VAR_29 != 0) {
   FUNC_7(VAR_24->age_dev,
       "could not create Tx dmamap.\n");
   goto fail;
  }
 }

 if ((VAR_29 = FUNC_3(VAR_24->age_cdata.age_rx_tag, 0,
     &VAR_24->age_cdata.age_rx_sparemap)) != 0) {
  FUNC_7(VAR_24->age_dev,
      "could not create spare Rx dmamap.\n");
  goto fail;
 }
 for (VAR_30 = 0; VAR_30 < VAR_7; VAR_30++) {
  VAR_26 = &VAR_24->age_cdata.age_rxdesc[VAR_30];
  VAR_26->rx_m = ((void*)0);
  VAR_26->rx_dmamap = ((void*)0);
  VAR_29 = FUNC_3(VAR_24->age_cdata.age_rx_tag, 0,
      &VAR_26->rx_dmamap);
  if (VAR_29 != 0) {
   FUNC_7(VAR_24->age_dev,
       "could not create Rx dmamap.\n");
   goto fail;
  }
 }

fail:
 return (VAR_29);
}
