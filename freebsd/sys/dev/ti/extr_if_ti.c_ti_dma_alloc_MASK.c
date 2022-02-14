
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct ti_status {int dummy; } ;
struct TYPE_5__ {int ti_rx_mini_sparemap; int ti_rx_mini_tag; int * ti_rx_mini_maps; int ti_parent_tag; int ti_rx_mini_ring_map; int ti_rx_mini_ring_tag; int ti_tx_ring_map; int ti_tx_ring_tag; TYPE_1__* ti_txdesc; int ti_tx_tag; int ti_rx_jumbo_sparemap; int ti_rx_jumbo_tag; int * ti_rx_jumbo_maps; int ti_rx_std_sparemap; int ti_rx_std_tag; int * ti_rx_std_maps; int ti_rx_return_ring_map; int ti_rx_return_ring_tag; int ti_rx_jumbo_ring_map; int ti_rx_jumbo_ring_tag; int ti_rx_std_ring_map; int ti_rx_std_ring_tag; int ti_event_ring_map; int ti_event_ring_tag; int ti_status_map; int ti_status_tag; int ti_gib_map; int ti_gib_tag; } ;
struct TYPE_6__ {int ti_rx_mini_ring_paddr; int ti_rx_mini_ring; int ti_tx_ring_paddr; int ti_tx_ring; int ti_rx_return_ring_paddr; int ti_rx_return_ring; int ti_rx_jumbo_ring_paddr; int ti_rx_jumbo_ring; int ti_rx_std_ring_paddr; int ti_rx_std_ring; int ti_event_ring_paddr; int ti_event_ring; int ti_status_paddr; int ti_status; int ti_info_paddr; int ti_info; } ;
struct ti_softc {scalar_t__ ti_dac; scalar_t__ ti_hwrev; int ti_dev; TYPE_2__ ti_cdata; TYPE_3__ ti_rdata; } ;
struct ti_gib {int dummy; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {int tx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ti_softc*,int ,int,int *,int **,int *,int *,char*) ;

__attribute__((used)) static int
FUNC_5(struct ti_softc *VAR_22)
{
 bus_addr_t VAR_23;
 int VAR_24, VAR_25;

 VAR_23 = VAR_0;
 if (VAR_22->ti_dac == 0)
  VAR_23 = VAR_1;

 VAR_25 = FUNC_0(FUNC_2(VAR_22->ti_dev), 1, 0, VAR_23,
     VAR_0, ((void*)0), ((void*)0), VAR_2, 0,
     VAR_2, 0, ((void*)0), ((void*)0),
     &VAR_22->ti_cdata.ti_parent_tag);
 if (VAR_25 != 0) {
  FUNC_3(VAR_22->ti_dev,
      "could not allocate parent dma tag\n");
  return (VAR_3);
 }

 VAR_25 = FUNC_4(VAR_22, VAR_16, sizeof(struct ti_gib),
     &VAR_22->ti_cdata.ti_gib_tag, (uint8_t **)&VAR_22->ti_rdata.ti_info,
     &VAR_22->ti_cdata.ti_gib_map, &VAR_22->ti_rdata.ti_info_paddr, "GIB");
 if (VAR_25)
  return (VAR_25);


 VAR_25 = FUNC_4(VAR_22, VAR_16, sizeof(struct ti_status),
     &VAR_22->ti_cdata.ti_status_tag, (uint8_t **)&VAR_22->ti_rdata.ti_status,
     &VAR_22->ti_cdata.ti_status_map, &VAR_22->ti_rdata.ti_status_paddr,
     "event ring");
 if (VAR_25)
  return (VAR_25);


 VAR_25 = FUNC_4(VAR_22, VAR_16, VAR_8,
     &VAR_22->ti_cdata.ti_event_ring_tag,
     (uint8_t **)&VAR_22->ti_rdata.ti_event_ring,
     &VAR_22->ti_cdata.ti_event_ring_map, &VAR_22->ti_rdata.ti_event_ring_paddr,
     "event ring");
 if (VAR_25)
  return (VAR_25);




 VAR_25 = FUNC_4(VAR_22, VAR_16, VAR_19,
     &VAR_22->ti_cdata.ti_rx_std_ring_tag,
     (uint8_t **)&VAR_22->ti_rdata.ti_rx_std_ring,
     &VAR_22->ti_cdata.ti_rx_std_ring_map,
     &VAR_22->ti_rdata.ti_rx_std_ring_paddr, "RX ring");
 if (VAR_25)
  return (VAR_25);


 VAR_25 = FUNC_4(VAR_22, VAR_10, VAR_12,
     &VAR_22->ti_cdata.ti_rx_jumbo_ring_tag,
     (uint8_t **)&VAR_22->ti_rdata.ti_rx_jumbo_ring,
     &VAR_22->ti_cdata.ti_rx_jumbo_ring_map,
     &VAR_22->ti_rdata.ti_rx_jumbo_ring_paddr, "jumbo RX ring");
 if (VAR_25)
  return (VAR_25);


 VAR_25 = FUNC_4(VAR_22, VAR_16, VAR_17,
     &VAR_22->ti_cdata.ti_rx_return_ring_tag,
     (uint8_t **)&VAR_22->ti_rdata.ti_rx_return_ring,
     &VAR_22->ti_cdata.ti_rx_return_ring_map,
     &VAR_22->ti_rdata.ti_rx_return_ring_paddr, "RX return ring");
 if (VAR_25)
  return (VAR_25);


 VAR_25 = FUNC_0(VAR_22->ti_cdata.ti_parent_tag, 1, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0), VAR_4, 1,
     VAR_4, 0, ((void*)0), ((void*)0), &VAR_22->ti_cdata.ti_rx_std_tag);
 if (VAR_25) {
  FUNC_3(VAR_22->ti_dev, "could not allocate RX dma tag\n");
  return (VAR_25);
 }
 VAR_25 = FUNC_0(VAR_22->ti_cdata.ti_parent_tag, 1, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0), VAR_6, 1,
     VAR_6, 0, ((void*)0), ((void*)0), &VAR_22->ti_cdata.ti_rx_jumbo_tag);

 if (VAR_25) {
  FUNC_3(VAR_22->ti_dev,
      "could not allocate jumbo RX dma tag\n");
  return (VAR_25);
 }


 VAR_25 = FUNC_0(VAR_22->ti_cdata.ti_parent_tag, 1,
     0, VAR_0, VAR_0, ((void*)0), ((void*)0),
     VAR_4 * VAR_13, VAR_13, VAR_4, 0, ((void*)0), ((void*)0),
     &VAR_22->ti_cdata.ti_tx_tag);
 if (VAR_25) {
  FUNC_3(VAR_22->ti_dev, "could not allocate TX dma tag\n");
  return (VAR_3);
 }


 for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++) {
  VAR_25 = FUNC_1(VAR_22->ti_cdata.ti_rx_std_tag, 0,
      &VAR_22->ti_cdata.ti_rx_std_maps[VAR_24]);
  if (VAR_25) {
   FUNC_3(VAR_22->ti_dev,
       "could not create DMA map for RX\n");
   return (VAR_25);
  }
 }
 VAR_25 = FUNC_1(VAR_22->ti_cdata.ti_rx_std_tag, 0,
     &VAR_22->ti_cdata.ti_rx_std_sparemap);
 if (VAR_25) {
  FUNC_3(VAR_22->ti_dev,
      "could not create spare DMA map for RX\n");
  return (VAR_25);
 }


 for (VAR_24 = 0; VAR_24 < VAR_11; VAR_24++) {
  VAR_25 = FUNC_1(VAR_22->ti_cdata.ti_rx_jumbo_tag, 0,
      &VAR_22->ti_cdata.ti_rx_jumbo_maps[VAR_24]);
  if (VAR_25) {
   FUNC_3(VAR_22->ti_dev,
       "could not create DMA map for jumbo RX\n");
   return (VAR_25);
  }
 }
 VAR_25 = FUNC_1(VAR_22->ti_cdata.ti_rx_jumbo_tag, 0,
     &VAR_22->ti_cdata.ti_rx_jumbo_sparemap);
 if (VAR_25) {
  FUNC_3(VAR_22->ti_dev,
      "could not create spare DMA map for jumbo RX\n");
  return (VAR_25);
 }


 for (VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
  VAR_25 = FUNC_1(VAR_22->ti_cdata.ti_tx_tag, 0,
      &VAR_22->ti_cdata.ti_txdesc[VAR_24].tx_dmamap);
  if (VAR_25) {
   FUNC_3(VAR_22->ti_dev,
       "could not create DMA map for TX\n");
   return (VAR_3);
  }
 }


 if (VAR_22->ti_hwrev == VAR_9)
  return (0);


 VAR_25 = FUNC_4(VAR_22, VAR_16, VAR_21,
     &VAR_22->ti_cdata.ti_tx_ring_tag, (uint8_t **)&VAR_22->ti_rdata.ti_tx_ring,
     &VAR_22->ti_cdata.ti_tx_ring_map, &VAR_22->ti_rdata.ti_tx_ring_paddr,
     "TX ring");
 if (VAR_25)
  return (VAR_25);


 VAR_25 = FUNC_4(VAR_22, VAR_16, VAR_15,
     &VAR_22->ti_cdata.ti_rx_mini_ring_tag,
     (uint8_t **)&VAR_22->ti_rdata.ti_rx_mini_ring,
     &VAR_22->ti_cdata.ti_rx_mini_ring_map,
     &VAR_22->ti_rdata.ti_rx_mini_ring_paddr, "mini RX ring");
 if (VAR_25)
  return (VAR_25);


 VAR_25 = FUNC_0(VAR_22->ti_cdata.ti_parent_tag, 1, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0), VAR_5, 1,
     VAR_5, 0, ((void*)0), ((void*)0), &VAR_22->ti_cdata.ti_rx_mini_tag);
 if (VAR_25) {
  FUNC_3(VAR_22->ti_dev,
      "could not allocate mini RX dma tag\n");
  return (VAR_25);
 }


 for (VAR_24 = 0; VAR_24 < VAR_14; VAR_24++) {
  VAR_25 = FUNC_1(VAR_22->ti_cdata.ti_rx_mini_tag, 0,
      &VAR_22->ti_cdata.ti_rx_mini_maps[VAR_24]);
  if (VAR_25) {
   FUNC_3(VAR_22->ti_dev,
       "could not create DMA map for mini RX\n");
   return (VAR_25);
  }
 }
 VAR_25 = FUNC_1(VAR_22->ti_cdata.ti_rx_mini_tag, 0,
     &VAR_22->ti_cdata.ti_rx_mini_sparemap);
 if (VAR_25) {
  FUNC_3(VAR_22->ti_dev,
      "could not create spare DMA map for mini RX\n");
  return (VAR_25);
 }

 return (0);
}
