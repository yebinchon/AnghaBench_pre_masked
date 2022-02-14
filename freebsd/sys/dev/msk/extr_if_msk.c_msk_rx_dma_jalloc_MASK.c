
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msk_rxdesc {int * rx_dmamap; int * rx_m; } ;
struct TYPE_4__ {int msk_jumbo_rx_tag; struct msk_rxdesc* msk_jumbo_rxdesc; int * msk_jumbo_rx_sparemap; int msk_jumbo_rx_ring_map; int msk_jumbo_rx_ring_tag; int msk_parent_tag; } ;
struct TYPE_3__ {scalar_t__ msk_jumbo_rx_ring_paddr; int msk_jumbo_rx_ring; } ;
struct msk_if_softc {int msk_flags; int msk_if_dev; TYPE_2__ msk_cdata; TYPE_1__ msk_rdata; } ;
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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,int ,int ,int ,struct msk_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct msk_if_softc*) ;

__attribute__((used)) static int
FUNC_6(struct msk_if_softc *VAR_14)
{
 struct msk_dmamap_arg VAR_15;
 struct msk_rxdesc *VAR_16;
 bus_size_t VAR_17;
 int VAR_18, VAR_19;

 if (VAR_12 != 0 || (VAR_14->msk_flags & VAR_6) == 0) {
  VAR_14->msk_flags &= ~VAR_6;
  FUNC_4(VAR_14->msk_if_dev,
      "disabling jumbo frame support\n");
  return (0);
 }

 VAR_18 = FUNC_0(VAR_14->msk_cdata.msk_parent_tag,
      VAR_10, 0,
      VAR_4,
      VAR_4,
      ((void*)0), ((void*)0),
      VAR_9,
      1,
      VAR_9,
      0,
      ((void*)0), ((void*)0),
      &VAR_14->msk_cdata.msk_jumbo_rx_ring_tag);
 if (VAR_18 != 0) {
  FUNC_4(VAR_14->msk_if_dev,
      "failed to create jumbo Rx ring DMA tag\n");
  goto jumbo_fail;
 }

 VAR_17 = 1;




 if ((VAR_14->msk_flags & VAR_7) != 0)
  VAR_17 = VAR_11;

 VAR_18 = FUNC_0(VAR_14->msk_cdata.msk_parent_tag,
      VAR_17, 0,
      VAR_4,
      VAR_4,
      ((void*)0), ((void*)0),
      VAR_5,
      1,
      VAR_5,
      0,
      ((void*)0), ((void*)0),
      &VAR_14->msk_cdata.msk_jumbo_rx_tag);
 if (VAR_18 != 0) {
  FUNC_4(VAR_14->msk_if_dev,
      "failed to create jumbo Rx DMA tag\n");
  goto jumbo_fail;
 }


 VAR_18 = FUNC_3(VAR_14->msk_cdata.msk_jumbo_rx_ring_tag,
     (void **)&VAR_14->msk_rdata.msk_jumbo_rx_ring,
     VAR_2 | VAR_0 | VAR_3,
     &VAR_14->msk_cdata.msk_jumbo_rx_ring_map);
 if (VAR_18 != 0) {
  FUNC_4(VAR_14->msk_if_dev,
      "failed to allocate DMA'able memory for jumbo Rx ring\n");
  goto jumbo_fail;
 }

 VAR_15.msk_busaddr = 0;
 VAR_18 = FUNC_2(VAR_14->msk_cdata.msk_jumbo_rx_ring_tag,
     VAR_14->msk_cdata.msk_jumbo_rx_ring_map,
     VAR_14->msk_rdata.msk_jumbo_rx_ring, VAR_9,
     VAR_13, &VAR_15, VAR_1);
 if (VAR_18 != 0) {
  FUNC_4(VAR_14->msk_if_dev,
      "failed to load DMA'able memory for jumbo Rx ring\n");
  goto jumbo_fail;
 }
 VAR_14->msk_rdata.msk_jumbo_rx_ring_paddr = VAR_15.msk_busaddr;


 if ((VAR_18 = FUNC_1(VAR_14->msk_cdata.msk_jumbo_rx_tag, 0,
     &VAR_14->msk_cdata.msk_jumbo_rx_sparemap)) != 0) {
  FUNC_4(VAR_14->msk_if_dev,
      "failed to create spare jumbo Rx dmamap\n");
  goto jumbo_fail;
 }
 for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
  VAR_16 = &VAR_14->msk_cdata.msk_jumbo_rxdesc[VAR_19];
  VAR_16->rx_m = ((void*)0);
  VAR_16->rx_dmamap = ((void*)0);
  VAR_18 = FUNC_1(VAR_14->msk_cdata.msk_jumbo_rx_tag, 0,
      &VAR_16->rx_dmamap);
  if (VAR_18 != 0) {
   FUNC_4(VAR_14->msk_if_dev,
       "failed to create jumbo Rx dmamap\n");
   goto jumbo_fail;
  }
 }

 return (0);

jumbo_fail:
 FUNC_5(VAR_14);
 FUNC_4(VAR_14->msk_if_dev, "disabling jumbo frame support "
     "due to resource shortage\n");
 VAR_14->msk_flags &= ~VAR_6;
 return (VAR_18);
}
