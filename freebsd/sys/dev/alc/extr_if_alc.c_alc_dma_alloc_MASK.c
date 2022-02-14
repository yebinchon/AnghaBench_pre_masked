
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct alc_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_4__ {int alc_rx_tag; struct alc_rxdesc* alc_rxdesc; int * alc_rx_sparemap; int alc_tx_tag; struct alc_txdesc* alc_txdesc; int alc_buffer_tag; int alc_smb_map; int alc_smb_tag; int alc_cmb_map; int alc_cmb_tag; int alc_rr_ring_map; int alc_rr_ring_tag; int alc_rx_ring_map; int alc_rx_ring_tag; int alc_tx_ring_map; int alc_tx_ring_tag; int alc_parent_tag; } ;
struct TYPE_3__ {scalar_t__ alc_tx_ring_paddr; scalar_t__ alc_rx_ring_paddr; scalar_t__ alc_rr_ring_paddr; scalar_t__ alc_cmb_paddr; scalar_t__ alc_smb_paddr; int alc_smb; int alc_cmb; int alc_rr_ring; int alc_rx_ring; int alc_tx_ring; } ;
struct alc_softc {int alc_dev; TYPE_2__ alc_cdata; TYPE_1__ alc_rdata; } ;
struct alc_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct alc_dmamap_arg {scalar_t__ alc_busaddr; } ;
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
 int FUNC_0 (struct alc_softc*) ;
 int FUNC_1 (struct alc_softc*) ;
 int VAR_23 ;
 int FUNC_2 (int ,int,int ,scalar_t__,scalar_t__,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int ,int ,int ,int ,int ,struct alc_dmamap_arg*,int ) ;
 int FUNC_5 (int ,void**,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct alc_softc *VAR_24)
{
 struct alc_txdesc *VAR_25;
 struct alc_rxdesc *VAR_26;
 bus_addr_t VAR_27;
 struct alc_dmamap_arg VAR_28;
 int VAR_29, VAR_30;

 VAR_27 = VAR_19;
again:

 VAR_29 = FUNC_2(
     FUNC_6(VAR_24->alc_dev),
     1, 0,
     VAR_27,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_21,
     0,
     VAR_21,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->alc_cdata.alc_parent_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not create parent DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->alc_cdata.alc_parent_tag,
     VAR_13, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_15,
     1,
     VAR_15,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->alc_cdata.alc_tx_ring_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not create Tx ring DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->alc_cdata.alc_parent_tag,
     VAR_6, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_8,
     1,
     VAR_8,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->alc_cdata.alc_rx_ring_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not create Rx ring DMA tag.\n");
  goto fail;
 }

 VAR_29 = FUNC_2(
     VAR_24->alc_cdata.alc_parent_tag,
     VAR_3, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_4,
     1,
     VAR_4,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->alc_cdata.alc_rr_ring_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not create Rx return ring DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->alc_cdata.alc_parent_tag,
     VAR_0, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_1,
     1,
     VAR_1,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->alc_cdata.alc_cmb_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not create CMB DMA tag.\n");
  goto fail;
 }

 VAR_29 = FUNC_2(
     VAR_24->alc_cdata.alc_parent_tag,
     VAR_9, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_10,
     1,
     VAR_10,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->alc_cdata.alc_smb_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not create SMB DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_5(VAR_24->alc_cdata.alc_tx_ring_tag,
     (void **)&VAR_24->alc_rdata.alc_tx_ring,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->alc_cdata.alc_tx_ring_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not allocate DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_28.alc_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->alc_cdata.alc_tx_ring_tag,
     VAR_24->alc_cdata.alc_tx_ring_map, VAR_24->alc_rdata.alc_tx_ring,
     VAR_15, VAR_23, &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.alc_busaddr == 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not load DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_24->alc_rdata.alc_tx_ring_paddr = VAR_28.alc_busaddr;


 VAR_29 = FUNC_5(VAR_24->alc_cdata.alc_rx_ring_tag,
     (void **)&VAR_24->alc_rdata.alc_rx_ring,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->alc_cdata.alc_rx_ring_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not allocate DMA'able memory for Rx ring.\n");
  goto fail;
 }
 VAR_28.alc_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->alc_cdata.alc_rx_ring_tag,
     VAR_24->alc_cdata.alc_rx_ring_map, VAR_24->alc_rdata.alc_rx_ring,
     VAR_8, VAR_23, &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.alc_busaddr == 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not load DMA'able memory for Rx ring.\n");
  goto fail;
 }
 VAR_24->alc_rdata.alc_rx_ring_paddr = VAR_28.alc_busaddr;


 VAR_29 = FUNC_5(VAR_24->alc_cdata.alc_rr_ring_tag,
     (void **)&VAR_24->alc_rdata.alc_rr_ring,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->alc_cdata.alc_rr_ring_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not allocate DMA'able memory for Rx return ring.\n");
  goto fail;
 }
 VAR_28.alc_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->alc_cdata.alc_rr_ring_tag,
     VAR_24->alc_cdata.alc_rr_ring_map, VAR_24->alc_rdata.alc_rr_ring,
     VAR_4, VAR_23, &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.alc_busaddr == 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not load DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_24->alc_rdata.alc_rr_ring_paddr = VAR_28.alc_busaddr;


 VAR_29 = FUNC_5(VAR_24->alc_cdata.alc_cmb_tag,
     (void **)&VAR_24->alc_rdata.alc_cmb,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->alc_cdata.alc_cmb_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not allocate DMA'able memory for CMB.\n");
  goto fail;
 }
 VAR_28.alc_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->alc_cdata.alc_cmb_tag,
     VAR_24->alc_cdata.alc_cmb_map, VAR_24->alc_rdata.alc_cmb,
     VAR_1, VAR_23, &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.alc_busaddr == 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not load DMA'able memory for CMB.\n");
  goto fail;
 }
 VAR_24->alc_rdata.alc_cmb_paddr = VAR_28.alc_busaddr;


 VAR_29 = FUNC_5(VAR_24->alc_cdata.alc_smb_tag,
     (void **)&VAR_24->alc_rdata.alc_smb,
     VAR_17 | VAR_18 | VAR_16,
     &VAR_24->alc_cdata.alc_smb_map);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not allocate DMA'able memory for SMB.\n");
  goto fail;
 }
 VAR_28.alc_busaddr = 0;
 VAR_29 = FUNC_4(VAR_24->alc_cdata.alc_smb_tag,
     VAR_24->alc_cdata.alc_smb_map, VAR_24->alc_rdata.alc_smb,
     VAR_10, VAR_23, &VAR_28, 0);
 if (VAR_29 != 0 || VAR_28.alc_busaddr == 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not load DMA'able memory for CMB.\n");
  goto fail;
 }
 VAR_24->alc_rdata.alc_smb_paddr = VAR_28.alc_busaddr;


 if (VAR_27 != VAR_20 &&
     (VAR_29 = FUNC_0(VAR_24)) != 0) {
  FUNC_7(VAR_24->alc_dev, "4GB boundary crossed, "
      "switching to 32bit DMA addressing mode.\n");
  FUNC_1(VAR_24);




  VAR_27 = VAR_20;
  goto again;
 }
 VAR_29 = FUNC_2(
     FUNC_6(VAR_24->alc_dev),
     1, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_21,
     0,
     VAR_21,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->alc_cdata.alc_buffer_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not create parent buffer DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->alc_cdata.alc_buffer_tag,
     1, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_12,
     VAR_2,
     VAR_11,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->alc_cdata.alc_tx_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev, "could not create Tx DMA tag.\n");
  goto fail;
 }


 VAR_29 = FUNC_2(
     VAR_24->alc_cdata.alc_buffer_tag,
     VAR_5, 0,
     VAR_19,
     VAR_19,
     ((void*)0), ((void*)0),
     VAR_22,
     1,
     VAR_22,
     0,
     ((void*)0), ((void*)0),
     &VAR_24->alc_cdata.alc_rx_tag);
 if (VAR_29 != 0) {
  FUNC_7(VAR_24->alc_dev, "could not create Rx DMA tag.\n");
  goto fail;
 }

 for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
  VAR_25 = &VAR_24->alc_cdata.alc_txdesc[VAR_30];
  VAR_25->tx_m = ((void*)0);
  VAR_25->tx_dmamap = ((void*)0);
  VAR_29 = FUNC_3(VAR_24->alc_cdata.alc_tx_tag, 0,
      &VAR_25->tx_dmamap);
  if (VAR_29 != 0) {
   FUNC_7(VAR_24->alc_dev,
       "could not create Tx dmamap.\n");
   goto fail;
  }
 }

 if ((VAR_29 = FUNC_3(VAR_24->alc_cdata.alc_rx_tag, 0,
     &VAR_24->alc_cdata.alc_rx_sparemap)) != 0) {
  FUNC_7(VAR_24->alc_dev,
      "could not create spare Rx dmamap.\n");
  goto fail;
 }
 for (VAR_30 = 0; VAR_30 < VAR_7; VAR_30++) {
  VAR_26 = &VAR_24->alc_cdata.alc_rxdesc[VAR_30];
  VAR_26->rx_m = ((void*)0);
  VAR_26->rx_dmamap = ((void*)0);
  VAR_29 = FUNC_3(VAR_24->alc_cdata.alc_rx_tag, 0,
      &VAR_26->rx_dmamap);
  if (VAR_29 != 0) {
   FUNC_7(VAR_24->alc_dev,
       "could not create Rx dmamap.\n");
   goto fail;
  }
 }

fail:
 return (VAR_29);
}
