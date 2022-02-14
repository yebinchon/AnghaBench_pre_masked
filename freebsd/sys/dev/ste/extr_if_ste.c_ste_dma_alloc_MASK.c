
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ste_rx_tag; struct ste_chain_onefrag* ste_rx_chain; int * ste_rx_sparemap; int ste_tx_tag; struct ste_chain* ste_tx_chain; int ste_rx_list_map; int ste_rx_list_tag; int ste_tx_list_map; int ste_tx_list_tag; int ste_parent_tag; } ;
struct TYPE_3__ {scalar_t__ ste_tx_list_paddr; scalar_t__ ste_rx_list_paddr; int ste_rx_list; int ste_tx_list; } ;
struct ste_softc {int ste_dev; TYPE_2__ ste_cdata; TYPE_1__ ste_ldata; } ;
struct ste_dmamap_arg {scalar_t__ ste_busaddr; } ;
struct ste_chain_onefrag {int * ste_map; int * ste_next; int * ste_mbuf; int * ste_ptr; } ;
struct ste_chain {int * ste_map; scalar_t__ ste_phys; int * ste_next; int * ste_mbuf; int * ste_ptr; } ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,int ,int,int ,struct ste_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_6(struct ste_softc *VAR_14)
{
 struct ste_chain *VAR_15;
 struct ste_chain_onefrag *VAR_16;
 struct ste_dmamap_arg VAR_17;
 int VAR_18, VAR_19;


 VAR_18 = FUNC_0(
     FUNC_4(VAR_14->ste_dev),
     1, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_5,
     0,
     VAR_5,
     0,
     ((void*)0), ((void*)0),
     &VAR_14->ste_cdata.ste_parent_tag);
 if (VAR_18 != 0) {
  FUNC_5(VAR_14->ste_dev,
      "could not create parent DMA tag.\n");
  goto fail;
 }


 VAR_18 = FUNC_0(
     VAR_14->ste_cdata.ste_parent_tag,
     VAR_7, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_12,
     1,
     VAR_12,
     0,
     ((void*)0), ((void*)0),
     &VAR_14->ste_cdata.ste_tx_list_tag);
 if (VAR_18 != 0) {
  FUNC_5(VAR_14->ste_dev,
      "could not create Tx list DMA tag.\n");
  goto fail;
 }


 VAR_18 = FUNC_0(
     VAR_14->ste_cdata.ste_parent_tag,
     VAR_7, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_10,
     1,
     VAR_10,
     0,
     ((void*)0), ((void*)0),
     &VAR_14->ste_cdata.ste_rx_list_tag);
 if (VAR_18 != 0) {
  FUNC_5(VAR_14->ste_dev,
      "could not create Rx list DMA tag.\n");
  goto fail;
 }


 VAR_18 = FUNC_0(
     VAR_14->ste_cdata.ste_parent_tag,
     1, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_6 * VAR_8,
     VAR_8,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_14->ste_cdata.ste_tx_tag);
 if (VAR_18 != 0) {
  FUNC_5(VAR_14->ste_dev, "could not create Tx DMA tag.\n");
  goto fail;
 }


 VAR_18 = FUNC_0(
     VAR_14->ste_cdata.ste_parent_tag,
     1, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_6,
     1,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_14->ste_cdata.ste_rx_tag);
 if (VAR_18 != 0) {
  FUNC_5(VAR_14->ste_dev, "could not create Rx DMA tag.\n");
  goto fail;
 }


 VAR_18 = FUNC_3(VAR_14->ste_cdata.ste_tx_list_tag,
     (void **)&VAR_14->ste_ldata.ste_tx_list,
     VAR_1 | VAR_2 | VAR_0,
     &VAR_14->ste_cdata.ste_tx_list_map);
 if (VAR_18 != 0) {
  FUNC_5(VAR_14->ste_dev,
      "could not allocate DMA'able memory for Tx list.\n");
  goto fail;
 }
 VAR_17.ste_busaddr = 0;
 VAR_18 = FUNC_2(VAR_14->ste_cdata.ste_tx_list_tag,
     VAR_14->ste_cdata.ste_tx_list_map, VAR_14->ste_ldata.ste_tx_list,
     VAR_12, VAR_13, &VAR_17, 0);
 if (VAR_18 != 0 || VAR_17.ste_busaddr == 0) {
  FUNC_5(VAR_14->ste_dev,
      "could not load DMA'able memory for Tx list.\n");
  goto fail;
 }
 VAR_14->ste_ldata.ste_tx_list_paddr = VAR_17.ste_busaddr;


 VAR_18 = FUNC_3(VAR_14->ste_cdata.ste_rx_list_tag,
     (void **)&VAR_14->ste_ldata.ste_rx_list,
     VAR_1 | VAR_2 | VAR_0,
     &VAR_14->ste_cdata.ste_rx_list_map);
 if (VAR_18 != 0) {
  FUNC_5(VAR_14->ste_dev,
      "could not allocate DMA'able memory for Rx list.\n");
  goto fail;
 }
 VAR_17.ste_busaddr = 0;
 VAR_18 = FUNC_2(VAR_14->ste_cdata.ste_rx_list_tag,
     VAR_14->ste_cdata.ste_rx_list_map, VAR_14->ste_ldata.ste_rx_list,
     VAR_10, VAR_13, &VAR_17, 0);
 if (VAR_18 != 0 || VAR_17.ste_busaddr == 0) {
  FUNC_5(VAR_14->ste_dev,
      "could not load DMA'able memory for Rx list.\n");
  goto fail;
 }
 VAR_14->ste_ldata.ste_rx_list_paddr = VAR_17.ste_busaddr;


 for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
  VAR_15 = &VAR_14->ste_cdata.ste_tx_chain[VAR_19];
  VAR_15->ste_ptr = ((void*)0);
  VAR_15->ste_mbuf = ((void*)0);
  VAR_15->ste_next = ((void*)0);
  VAR_15->ste_phys = 0;
  VAR_15->ste_map = ((void*)0);
  VAR_18 = FUNC_1(VAR_14->ste_cdata.ste_tx_tag, 0,
      &VAR_15->ste_map);
  if (VAR_18 != 0) {
   FUNC_5(VAR_14->ste_dev,
       "could not create Tx dmamap.\n");
   goto fail;
  }
 }

 if ((VAR_18 = FUNC_1(VAR_14->ste_cdata.ste_rx_tag, 0,
     &VAR_14->ste_cdata.ste_rx_sparemap)) != 0) {
  FUNC_5(VAR_14->ste_dev,
      "could not create spare Rx dmamap.\n");
  goto fail;
 }
 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
  VAR_16 = &VAR_14->ste_cdata.ste_rx_chain[VAR_19];
  VAR_16->ste_ptr = ((void*)0);
  VAR_16->ste_mbuf = ((void*)0);
  VAR_16->ste_next = ((void*)0);
  VAR_16->ste_map = ((void*)0);
  VAR_18 = FUNC_1(VAR_14->ste_cdata.ste_rx_tag, 0,
      &VAR_16->ste_map);
  if (VAR_18 != 0) {
   FUNC_5(VAR_14->ste_dev,
       "could not create Rx dmamap.\n");
   goto fail;
  }
 }

fail:
 return (VAR_18);
}
