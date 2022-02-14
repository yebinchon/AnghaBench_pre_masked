
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ether_vlan_header {int dummy; } ;
struct TYPE_4__ {int * bge_rx_jumbo_dmamap; int bge_mtag_jumbo; int bge_rx_jumbo_sparemap; int bge_buffer_tag; int * bge_tx_dmamap; int bge_tx_mtag; int * bge_rx_std_dmamap; int bge_rx_mtag; int bge_rx_std_sparemap; int bge_rx_jumbo_ring_map; int bge_rx_jumbo_ring_tag; int bge_stats_map; int bge_stats_tag; int bge_status_map; int bge_status_tag; int bge_tx_ring_map; int bge_tx_ring_tag; int bge_rx_return_ring_map; int bge_rx_return_ring_tag; int bge_rx_std_ring_map; int bge_rx_std_ring_tag; int bge_parent_tag; } ;
struct TYPE_3__ {int bge_rx_jumbo_ring_paddr; int bge_rx_jumbo_ring; int bge_stats_paddr; int bge_stats; int bge_status_block_paddr; int bge_status_block; int bge_tx_ring_paddr; int bge_tx_ring; int bge_rx_return_ring_paddr; int bge_rx_return_ring; int bge_rx_std_ring_paddr; int bge_rx_std_ring; } ;
struct bge_softc {int bge_flags; scalar_t__ bge_asicrev; scalar_t__ bge_chipid; scalar_t__ bge_pcixcap; int bge_dev; TYPE_2__ bge_cdata; TYPE_1__ bge_ldata; } ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct bge_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct bge_softc*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (struct bge_softc*,int,int,int *,int **,int *,int *,char*) ;
 int FUNC_3 (int ,int,int,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(struct bge_softc *VAR_27)
{
 bus_addr_t VAR_28;
 bus_size_t VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34, VAR_35;

 VAR_28 = VAR_20;
 if ((VAR_27->bge_flags & VAR_4) != 0)
  VAR_28 = VAR_3;



 VAR_35 = FUNC_3(FUNC_5(VAR_27->bge_dev),
     1, 0, VAR_28, VAR_20, ((void*)0),
     ((void*)0), VAR_22, 0, VAR_22,
     0, ((void*)0), ((void*)0), &VAR_27->bge_cdata.bge_parent_tag);
 if (VAR_35 != 0) {
  FUNC_6(VAR_27->bge_dev,
      "could not allocate parent dma tag\n");
  return (VAR_23);
 }


 VAR_35 = FUNC_2(VAR_27, VAR_26, VAR_16,
     &VAR_27->bge_cdata.bge_rx_std_ring_tag,
     (uint8_t **)&VAR_27->bge_ldata.bge_rx_std_ring,
     &VAR_27->bge_cdata.bge_rx_std_ring_map,
     &VAR_27->bge_ldata.bge_rx_std_ring_paddr, "RX ring");
 if (VAR_35)
  return (VAR_35);


 VAR_35 = FUNC_2(VAR_27, VAR_26, FUNC_1(VAR_27),
     &VAR_27->bge_cdata.bge_rx_return_ring_tag,
     (uint8_t **)&VAR_27->bge_ldata.bge_rx_return_ring,
     &VAR_27->bge_cdata.bge_rx_return_ring_map,
     &VAR_27->bge_ldata.bge_rx_return_ring_paddr, "RX return ring");
 if (VAR_35)
  return (VAR_35);


 VAR_35 = FUNC_2(VAR_27, VAR_26, VAR_19,
     &VAR_27->bge_cdata.bge_tx_ring_tag,
     (uint8_t **)&VAR_27->bge_ldata.bge_tx_ring,
     &VAR_27->bge_cdata.bge_tx_ring_map,
     &VAR_27->bge_ldata.bge_tx_ring_paddr, "TX ring");
 if (VAR_35)
  return (VAR_35);
 if (VAR_27->bge_asicrev == VAR_0 &&
     VAR_27->bge_chipid != VAR_1)
  VAR_30 = VAR_14;
 else
  VAR_30 = 32;
 VAR_35 = FUNC_2(VAR_27, VAR_26, VAR_30,
     &VAR_27->bge_cdata.bge_status_tag,
     (uint8_t **)&VAR_27->bge_ldata.bge_status_block,
     &VAR_27->bge_cdata.bge_status_map,
     &VAR_27->bge_ldata.bge_status_block_paddr, "status block");
 if (VAR_35)
  return (VAR_35);


 VAR_35 = FUNC_2(VAR_27, VAR_26, VAR_13,
     &VAR_27->bge_cdata.bge_stats_tag,
     (uint8_t **)&VAR_27->bge_ldata.bge_stats,
     &VAR_27->bge_cdata.bge_stats_map,
     &VAR_27->bge_ldata.bge_stats_paddr, "statistics block");
 if (VAR_35)
  return (VAR_35);


 if (FUNC_0(VAR_27)) {
  VAR_35 = FUNC_2(VAR_27, VAR_26, VAR_10,
      &VAR_27->bge_cdata.bge_rx_jumbo_ring_tag,
      (uint8_t **)&VAR_27->bge_ldata.bge_rx_jumbo_ring,
      &VAR_27->bge_cdata.bge_rx_jumbo_ring_map,
      &VAR_27->bge_ldata.bge_rx_jumbo_ring_paddr, "jumbo RX ring");
  if (VAR_35)
   return (VAR_35);
 }


 VAR_29 = 0;
 if ((VAR_27->bge_flags & VAR_5) != 0) {
  VAR_29 = VAR_2;







  if (VAR_27->bge_pcixcap != 0)
   VAR_28 = VAR_21;
 }
 VAR_35 = FUNC_3(FUNC_5(VAR_27->bge_dev),
     1, VAR_29, VAR_28, VAR_20, ((void*)0),
     ((void*)0), VAR_22, 0, VAR_22,
     0, ((void*)0), ((void*)0), &VAR_27->bge_cdata.bge_buffer_tag);
 if (VAR_35 != 0) {
  FUNC_6(VAR_27->bge_dev,
      "could not allocate buffer dma tag\n");
  return (VAR_23);
 }

 if (VAR_27->bge_flags & (VAR_7 | VAR_8)) {
  VAR_32 = VAR_17;
  VAR_33 = 65535 + sizeof(struct ether_vlan_header);
 } else {
  VAR_32 = VAR_24;
  VAR_33 = VAR_24 * VAR_12;
 }
 VAR_35 = FUNC_3(VAR_27->bge_cdata.bge_buffer_tag, 1,
     0, VAR_20, VAR_20, ((void*)0), ((void*)0),
     VAR_33, VAR_12, VAR_32, 0, ((void*)0), ((void*)0),
     &VAR_27->bge_cdata.bge_tx_mtag);

 if (VAR_35) {
  FUNC_6(VAR_27->bge_dev, "could not allocate TX dma tag\n");
  return (VAR_23);
 }


 if (VAR_27->bge_flags & VAR_6)
  VAR_31 = VAR_25;
 else
  VAR_31 = VAR_24;
 VAR_35 = FUNC_3(VAR_27->bge_cdata.bge_buffer_tag, 1, 0,
     VAR_20, VAR_20, ((void*)0), ((void*)0), VAR_31, 1,
     VAR_31, 0, ((void*)0), ((void*)0), &VAR_27->bge_cdata.bge_rx_mtag);

 if (VAR_35) {
  FUNC_6(VAR_27->bge_dev, "could not allocate RX dma tag\n");
  return (VAR_23);
 }


 VAR_35 = FUNC_4(VAR_27->bge_cdata.bge_rx_mtag, 0,
     &VAR_27->bge_cdata.bge_rx_std_sparemap);
 if (VAR_35) {
  FUNC_6(VAR_27->bge_dev,
      "can't create spare DMA map for RX\n");
  return (VAR_23);
 }
 for (VAR_34 = 0; VAR_34 < VAR_15; VAR_34++) {
  VAR_35 = FUNC_4(VAR_27->bge_cdata.bge_rx_mtag, 0,
       &VAR_27->bge_cdata.bge_rx_std_dmamap[VAR_34]);
  if (VAR_35) {
   FUNC_6(VAR_27->bge_dev,
       "can't create DMA map for RX\n");
   return (VAR_23);
  }
 }


 for (VAR_34 = 0; VAR_34 < VAR_18; VAR_34++) {
  VAR_35 = FUNC_4(VAR_27->bge_cdata.bge_tx_mtag, 0,
       &VAR_27->bge_cdata.bge_tx_dmamap[VAR_34]);
  if (VAR_35) {
   FUNC_6(VAR_27->bge_dev,
       "can't create DMA map for TX\n");
   return (VAR_23);
  }
 }


 if (FUNC_0(VAR_27)) {
  VAR_35 = FUNC_3(VAR_27->bge_cdata.bge_buffer_tag,
      1, 0, VAR_20, VAR_20, ((void*)0),
      ((void*)0), VAR_25, VAR_11, VAR_26,
      0, ((void*)0), ((void*)0), &VAR_27->bge_cdata.bge_mtag_jumbo);
  if (VAR_35) {
   FUNC_6(VAR_27->bge_dev,
       "could not allocate jumbo dma tag\n");
   return (VAR_23);
  }

  VAR_35 = FUNC_4(VAR_27->bge_cdata.bge_mtag_jumbo,
      0, &VAR_27->bge_cdata.bge_rx_jumbo_sparemap);
  if (VAR_35) {
   FUNC_6(VAR_27->bge_dev,
       "can't create spare DMA map for jumbo RX\n");
   return (VAR_23);
  }
  for (VAR_34 = 0; VAR_34 < VAR_9; VAR_34++) {
   VAR_35 = FUNC_4(VAR_27->bge_cdata.bge_mtag_jumbo,
        0, &VAR_27->bge_cdata.bge_rx_jumbo_dmamap[VAR_34]);
   if (VAR_35) {
    FUNC_6(VAR_27->bge_dev,
        "can't create DMA map for jumbo RX\n");
    return (VAR_23);
   }
  }
 }

 return (0);
}
