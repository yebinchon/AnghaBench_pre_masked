
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stge_txdesc {scalar_t__ tx_dmamap; int * tx_m; } ;
struct TYPE_3__ {int stge_rx_tag; struct stge_rxdesc* stge_rxdesc; scalar_t__ stge_rx_sparemap; int stge_tx_tag; struct stge_txdesc* stge_txdesc; int stge_rx_ring_map; int stge_rx_ring_tag; int stge_tx_ring_map; int stge_tx_ring_tag; int stge_parent_tag; } ;
struct TYPE_4__ {scalar_t__ stge_tx_ring_paddr; scalar_t__ stge_rx_ring_paddr; int stge_rx_ring; int stge_tx_ring; } ;
struct stge_softc {int sc_dev; TYPE_1__ sc_cdata; TYPE_2__ sc_rdata; } ;
struct stge_rxdesc {scalar_t__ rx_dmamap; int * rx_m; } ;
struct stge_dmamap_arg {scalar_t__ stge_busaddr; } ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,int ,int ,int,int ,struct stge_dmamap_arg*,int) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_6(struct stge_softc *VAR_15)
{
 struct stge_dmamap_arg VAR_16;
 struct stge_txdesc *VAR_17;
 struct stge_rxdesc *VAR_18;
 int VAR_19, VAR_20;


 VAR_19 = FUNC_0(FUNC_4(VAR_15->sc_dev),
      1, 0,
      VAR_7,
      VAR_3,
      ((void*)0), ((void*)0),
      VAR_5,
      0,
      VAR_5,
      0,
      ((void*)0), ((void*)0),
      &VAR_15->sc_cdata.stge_parent_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->sc_dev, "failed to create parent DMA tag\n");
  goto fail;
 }

 VAR_19 = FUNC_0(VAR_15->sc_cdata.stge_parent_tag,
      VAR_9, 0,
      VAR_4,
      VAR_3,
      ((void*)0), ((void*)0),
      VAR_13,
      1,
      VAR_13,
      0,
      ((void*)0), ((void*)0),
      &VAR_15->sc_cdata.stge_tx_ring_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->sc_dev,
      "failed to allocate Tx ring DMA tag\n");
  goto fail;
 }


 VAR_19 = FUNC_0(VAR_15->sc_cdata.stge_parent_tag,
      VAR_9, 0,
      VAR_4,
      VAR_3,
      ((void*)0), ((void*)0),
      VAR_11,
      1,
      VAR_11,
      0,
      ((void*)0), ((void*)0),
      &VAR_15->sc_cdata.stge_rx_ring_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->sc_dev,
      "failed to allocate Rx ring DMA tag\n");
  goto fail;
 }


 VAR_19 = FUNC_0(VAR_15->sc_cdata.stge_parent_tag,
      1, 0,
      VAR_3,
      VAR_3,
      ((void*)0), ((void*)0),
      VAR_6 * VAR_8,
      VAR_8,
      VAR_6,
      0,
      ((void*)0), ((void*)0),
      &VAR_15->sc_cdata.stge_tx_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->sc_dev, "failed to allocate Tx DMA tag\n");
  goto fail;
 }


 VAR_19 = FUNC_0(VAR_15->sc_cdata.stge_parent_tag,
      1, 0,
      VAR_3,
      VAR_3,
      ((void*)0), ((void*)0),
      VAR_6,
      1,
      VAR_6,
      0,
      ((void*)0), ((void*)0),
      &VAR_15->sc_cdata.stge_rx_tag);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->sc_dev, "failed to allocate Rx DMA tag\n");
  goto fail;
 }


 VAR_19 = FUNC_3(VAR_15->sc_cdata.stge_tx_ring_tag,
     (void **)&VAR_15->sc_rdata.stge_tx_ring, VAR_1 |
     VAR_0 | VAR_2, &VAR_15->sc_cdata.stge_tx_ring_map);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->sc_dev,
      "failed to allocate DMA'able memory for Tx ring\n");
  goto fail;
 }

 VAR_16.stge_busaddr = 0;
 VAR_19 = FUNC_2(VAR_15->sc_cdata.stge_tx_ring_tag,
     VAR_15->sc_cdata.stge_tx_ring_map, VAR_15->sc_rdata.stge_tx_ring,
     VAR_13, VAR_14, &VAR_16, VAR_1);
 if (VAR_19 != 0 || VAR_16.stge_busaddr == 0) {
  FUNC_5(VAR_15->sc_dev,
      "failed to load DMA'able memory for Tx ring\n");
  goto fail;
 }
 VAR_15->sc_rdata.stge_tx_ring_paddr = VAR_16.stge_busaddr;


 VAR_19 = FUNC_3(VAR_15->sc_cdata.stge_rx_ring_tag,
     (void **)&VAR_15->sc_rdata.stge_rx_ring, VAR_1 |
     VAR_0 | VAR_2, &VAR_15->sc_cdata.stge_rx_ring_map);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15->sc_dev,
      "failed to allocate DMA'able memory for Rx ring\n");
  goto fail;
 }

 VAR_16.stge_busaddr = 0;
 VAR_19 = FUNC_2(VAR_15->sc_cdata.stge_rx_ring_tag,
     VAR_15->sc_cdata.stge_rx_ring_map, VAR_15->sc_rdata.stge_rx_ring,
     VAR_11, VAR_14, &VAR_16, VAR_1);
 if (VAR_19 != 0 || VAR_16.stge_busaddr == 0) {
  FUNC_5(VAR_15->sc_dev,
      "failed to load DMA'able memory for Rx ring\n");
  goto fail;
 }
 VAR_15->sc_rdata.stge_rx_ring_paddr = VAR_16.stge_busaddr;


 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
  VAR_17 = &VAR_15->sc_cdata.stge_txdesc[VAR_20];
  VAR_17->tx_m = ((void*)0);
  VAR_17->tx_dmamap = 0;
  VAR_19 = FUNC_1(VAR_15->sc_cdata.stge_tx_tag, 0,
      &VAR_17->tx_dmamap);
  if (VAR_19 != 0) {
   FUNC_5(VAR_15->sc_dev,
       "failed to create Tx dmamap\n");
   goto fail;
  }
 }

 if ((VAR_19 = FUNC_1(VAR_15->sc_cdata.stge_rx_tag, 0,
     &VAR_15->sc_cdata.stge_rx_sparemap)) != 0) {
  FUNC_5(VAR_15->sc_dev, "failed to create spare Rx dmamap\n");
  goto fail;
 }
 for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++) {
  VAR_18 = &VAR_15->sc_cdata.stge_rxdesc[VAR_20];
  VAR_18->rx_m = ((void*)0);
  VAR_18->rx_dmamap = 0;
  VAR_19 = FUNC_1(VAR_15->sc_cdata.stge_rx_tag, 0,
      &VAR_18->rx_dmamap);
  if (VAR_19 != 0) {
   FUNC_5(VAR_15->sc_dev,
       "failed to create Rx dmamap\n");
   goto fail;
  }
 }

fail:
 return (VAR_19);
}
