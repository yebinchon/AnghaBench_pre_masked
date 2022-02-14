
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ale_txdesc {int * tx_dmamap; int * tx_m; } ;
struct TYPE_4__ {scalar_t__ ale_tx_ring_paddr; scalar_t__ ale_tx_cmb_paddr; int ale_tx_tag; struct ale_txdesc* ale_txdesc; int ale_buffer_tag; TYPE_1__* ale_rx_page; int ale_tx_cmb; int ale_tx_cmb_map; int ale_tx_cmb_tag; int ale_tx_ring; int ale_tx_ring_map; int ale_tx_ring_tag; int ale_parent_tag; } ;
struct ale_softc {int ale_flags; int ale_dev; TYPE_2__ ale_cdata; int ale_pagesize; } ;
struct ale_dmamap_arg {scalar_t__ ale_busaddr; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_3__ {scalar_t__ page_paddr; scalar_t__ cmb_paddr; int cmb_addr; int cmb_map; int cmb_tag; int page_addr; int page_map; int page_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct ale_softc*) ;
 int FUNC_1 (struct ale_softc*) ;
 int VAR_21 ;
 int FUNC_2 (int ,int,int ,scalar_t__,scalar_t__,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int ,int ,int ,int ,int ,struct ale_dmamap_arg*,int ) ;
 int FUNC_5 (int ,void**,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_9(struct ale_softc *VAR_22)
{
 struct ale_txdesc *VAR_23;
 bus_addr_t VAR_24;
 struct ale_dmamap_arg VAR_25;
 int VAR_26, VAR_27, VAR_28;

 if ((VAR_22->ale_flags & VAR_1) != 0)
  VAR_27 = VAR_2;
 else
  VAR_27 = VAR_4;
 VAR_22->ale_pagesize = FUNC_8(VAR_27 + VAR_8,
     VAR_7);
 VAR_24 = VAR_18;
again:

 VAR_26 = FUNC_2(
     FUNC_6(VAR_22->ale_dev),
     1, 0,
     VAR_24,
     VAR_18,
     ((void*)0), ((void*)0),
     VAR_20,
     0,
     VAR_20,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->ale_cdata.ale_parent_tag);
 if (VAR_26 != 0) {
  FUNC_7(VAR_22->ale_dev,
      "could not create parent DMA tag.\n");
  goto fail;
 }


 VAR_26 = FUNC_2(
     VAR_22->ale_cdata.ale_parent_tag,
     VAR_12, 0,
     VAR_18,
     VAR_18,
     ((void*)0), ((void*)0),
     VAR_14,
     1,
     VAR_14,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->ale_cdata.ale_tx_ring_tag);
 if (VAR_26 != 0) {
  FUNC_7(VAR_22->ale_dev,
      "could not create Tx ring DMA tag.\n");
  goto fail;
 }


 for (VAR_28 = 0; VAR_28 < VAR_6; VAR_28++) {
  VAR_26 = FUNC_2(
      VAR_22->ale_cdata.ale_parent_tag,
      VAR_7, 0,
      VAR_18,
      VAR_18,
      ((void*)0), ((void*)0),
      VAR_22->ale_pagesize,
      1,
      VAR_22->ale_pagesize,
      0,
      ((void*)0), ((void*)0),
      &VAR_22->ale_cdata.ale_rx_page[VAR_28].page_tag);
  if (VAR_26 != 0) {
   FUNC_7(VAR_22->ale_dev,
       "could not create Rx page %d DMA tag.\n", VAR_28);
   goto fail;
  }
 }


 VAR_26 = FUNC_2(
     VAR_22->ale_cdata.ale_parent_tag,
     VAR_0, 0,
     VAR_18,
     VAR_18,
     ((void*)0), ((void*)0),
     VAR_11,
     1,
     VAR_11,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->ale_cdata.ale_tx_cmb_tag);
 if (VAR_26 != 0) {
  FUNC_7(VAR_22->ale_dev,
      "could not create Tx CMB DMA tag.\n");
  goto fail;
 }


 for (VAR_28 = 0; VAR_28 < VAR_6; VAR_28++) {
  VAR_26 = FUNC_2(
      VAR_22->ale_cdata.ale_parent_tag,
      VAR_0, 0,
      VAR_18,
      VAR_18,
      ((void*)0), ((void*)0),
      VAR_5,
      1,
      VAR_5,
      0,
      ((void*)0), ((void*)0),
      &VAR_22->ale_cdata.ale_rx_page[VAR_28].cmb_tag);
  if (VAR_26 != 0) {
   FUNC_7(VAR_22->ale_dev,
       "could not create Rx page %d CMB DMA tag.\n", VAR_28);
   goto fail;
  }
 }


 VAR_26 = FUNC_5(VAR_22->ale_cdata.ale_tx_ring_tag,
     (void **)&VAR_22->ale_cdata.ale_tx_ring,
     VAR_16 | VAR_17 | VAR_15,
     &VAR_22->ale_cdata.ale_tx_ring_map);
 if (VAR_26 != 0) {
  FUNC_7(VAR_22->ale_dev,
      "could not allocate DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_25.ale_busaddr = 0;
 VAR_26 = FUNC_4(VAR_22->ale_cdata.ale_tx_ring_tag,
     VAR_22->ale_cdata.ale_tx_ring_map, VAR_22->ale_cdata.ale_tx_ring,
     VAR_14, VAR_21, &VAR_25, 0);
 if (VAR_26 != 0 || VAR_25.ale_busaddr == 0) {
  FUNC_7(VAR_22->ale_dev,
      "could not load DMA'able memory for Tx ring.\n");
  goto fail;
 }
 VAR_22->ale_cdata.ale_tx_ring_paddr = VAR_25.ale_busaddr;


 for (VAR_28 = 0; VAR_28 < VAR_6; VAR_28++) {
  VAR_26 = FUNC_5(VAR_22->ale_cdata.ale_rx_page[VAR_28].page_tag,
      (void **)&VAR_22->ale_cdata.ale_rx_page[VAR_28].page_addr,
      VAR_16 | VAR_17 | VAR_15,
      &VAR_22->ale_cdata.ale_rx_page[VAR_28].page_map);
  if (VAR_26 != 0) {
   FUNC_7(VAR_22->ale_dev,
       "could not allocate DMA'able memory for "
       "Rx page %d.\n", VAR_28);
   goto fail;
  }
  VAR_25.ale_busaddr = 0;
  VAR_26 = FUNC_4(VAR_22->ale_cdata.ale_rx_page[VAR_28].page_tag,
      VAR_22->ale_cdata.ale_rx_page[VAR_28].page_map,
      VAR_22->ale_cdata.ale_rx_page[VAR_28].page_addr,
      VAR_22->ale_pagesize, VAR_21, &VAR_25, 0);
  if (VAR_26 != 0 || VAR_25.ale_busaddr == 0) {
   FUNC_7(VAR_22->ale_dev,
       "could not load DMA'able memory for "
       "Rx page %d.\n", VAR_28);
   goto fail;
  }
  VAR_22->ale_cdata.ale_rx_page[VAR_28].page_paddr = VAR_25.ale_busaddr;
 }


 VAR_26 = FUNC_5(VAR_22->ale_cdata.ale_tx_cmb_tag,
     (void **)&VAR_22->ale_cdata.ale_tx_cmb,
     VAR_16 | VAR_17 | VAR_15,
     &VAR_22->ale_cdata.ale_tx_cmb_map);
 if (VAR_26 != 0) {
  FUNC_7(VAR_22->ale_dev,
      "could not allocate DMA'able memory for Tx CMB.\n");
  goto fail;
 }
 VAR_25.ale_busaddr = 0;
 VAR_26 = FUNC_4(VAR_22->ale_cdata.ale_tx_cmb_tag,
     VAR_22->ale_cdata.ale_tx_cmb_map, VAR_22->ale_cdata.ale_tx_cmb,
     VAR_11, VAR_21, &VAR_25, 0);
 if (VAR_26 != 0 || VAR_25.ale_busaddr == 0) {
  FUNC_7(VAR_22->ale_dev,
      "could not load DMA'able memory for Tx CMB.\n");
  goto fail;
 }
 VAR_22->ale_cdata.ale_tx_cmb_paddr = VAR_25.ale_busaddr;


 for (VAR_28 = 0; VAR_28 < VAR_6; VAR_28++) {
  VAR_26 = FUNC_5(VAR_22->ale_cdata.ale_rx_page[VAR_28].cmb_tag,
      (void **)&VAR_22->ale_cdata.ale_rx_page[VAR_28].cmb_addr,
      VAR_16 | VAR_17 | VAR_15,
      &VAR_22->ale_cdata.ale_rx_page[VAR_28].cmb_map);
  if (VAR_26 != 0) {
   FUNC_7(VAR_22->ale_dev, "could not allocate "
       "DMA'able memory for Rx page %d CMB.\n", VAR_28);
   goto fail;
  }
  VAR_25.ale_busaddr = 0;
  VAR_26 = FUNC_4(VAR_22->ale_cdata.ale_rx_page[VAR_28].cmb_tag,
      VAR_22->ale_cdata.ale_rx_page[VAR_28].cmb_map,
      VAR_22->ale_cdata.ale_rx_page[VAR_28].cmb_addr,
      VAR_5, VAR_21, &VAR_25, 0);
  if (VAR_26 != 0 || VAR_25.ale_busaddr == 0) {
   FUNC_7(VAR_22->ale_dev, "could not load DMA'able "
       "memory for Rx page %d CMB.\n", VAR_28);
   goto fail;
  }
  VAR_22->ale_cdata.ale_rx_page[VAR_28].cmb_paddr = VAR_25.ale_busaddr;
 }





 if (VAR_24 != VAR_19 &&
     (VAR_26 = FUNC_0(VAR_22)) != 0) {
  FUNC_7(VAR_22->ale_dev, "4GB boundary crossed, "
      "switching to 32bit DMA addressing mode.\n");
  FUNC_1(VAR_22);




  VAR_24 = VAR_19;
  goto again;
 }
 VAR_26 = FUNC_2(
     FUNC_6(VAR_22->ale_dev),
     1, 0,
     VAR_18,
     VAR_18,
     ((void*)0), ((void*)0),
     VAR_20,
     0,
     VAR_20,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->ale_cdata.ale_buffer_tag);
 if (VAR_26 != 0) {
  FUNC_7(VAR_22->ale_dev,
      "could not create parent buffer DMA tag.\n");
  goto fail;
 }


 VAR_26 = FUNC_2(
     VAR_22->ale_cdata.ale_buffer_tag,
     1, 0,
     VAR_18,
     VAR_18,
     ((void*)0), ((void*)0),
     VAR_10,
     VAR_3,
     VAR_9,
     0,
     ((void*)0), ((void*)0),
     &VAR_22->ale_cdata.ale_tx_tag);
 if (VAR_26 != 0) {
  FUNC_7(VAR_22->ale_dev, "could not create Tx DMA tag.\n");
  goto fail;
 }


 for (VAR_28 = 0; VAR_28 < VAR_13; VAR_28++) {
  VAR_23 = &VAR_22->ale_cdata.ale_txdesc[VAR_28];
  VAR_23->tx_m = ((void*)0);
  VAR_23->tx_dmamap = ((void*)0);
  VAR_26 = FUNC_3(VAR_22->ale_cdata.ale_tx_tag, 0,
      &VAR_23->tx_dmamap);
  if (VAR_26 != 0) {
   FUNC_7(VAR_22->ale_dev,
       "could not create Tx dmamap.\n");
   goto fail;
  }
 }

fail:
 return (VAR_26);
}
