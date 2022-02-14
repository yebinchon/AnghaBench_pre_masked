
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct et_txstatus_data {int txsd_paddr; int txsd_dmap; int txsd_status; int txsd_dtag; } ;
struct et_txdesc_ring {int tr_paddr; int tr_dmap; int tr_desc; int tr_dtag; } ;
struct et_txbuf_data {TYPE_2__* tbd_buf; } ;
struct et_rxstatus_data {int rxsd_paddr; int rxsd_dmap; int rxsd_status; int rxsd_dtag; } ;
struct et_rxstat_ring {int rsr_paddr; int rsr_dmap; int rsr_stat; int rsr_dtag; } ;
struct et_softc {int dev; int sc_tx_tag; struct et_txbuf_data sc_tx_data; int sc_rx_sparemap; int sc_rx_tag; struct et_rxdesc_ring* sc_rx_ring; struct et_rxbuf_data* sc_rx_data; int sc_rx_mini_sparemap; int sc_rx_mini_tag; int sc_mbuf_dtag; struct et_rxstatus_data sc_rx_status; struct et_rxstat_ring sc_rxstat_ring; struct et_txstatus_data sc_tx_status; struct et_txdesc_ring sc_tx_ring; int sc_dtag; } ;
struct et_rxstatus {int dummy; } ;
struct et_rxdesc_ring {int rr_posreg; int rr_paddr; int rr_dmap; int rr_desc; int rr_dtag; } ;
struct et_rxbuf_data {TYPE_1__* rbd_buf; struct et_rxdesc_ring* rbd_ring; struct et_softc* rbd_softc; void* rbd_discard; int rbd_newbuf; int rbd_bufsize; } ;
struct TYPE_4__ {int tb_dmap; } ;
struct TYPE_3__ {int rb_dmap; } ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct et_softc*,int ,int,int *,int **,int *,int *,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;

__attribute__((used)) static int
FUNC_5(struct et_softc *VAR_19)
{
 struct et_txdesc_ring *VAR_20;
 struct et_rxdesc_ring *VAR_21;
 struct et_rxstat_ring *VAR_22;
 struct et_rxstatus_data *VAR_23;
 struct et_rxbuf_data *VAR_24;
        struct et_txbuf_data *VAR_25;
 struct et_txstatus_data *VAR_26;
 int VAR_27, VAR_28;

 VAR_28 = FUNC_0(FUNC_2(VAR_19->dev), 1, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0),
     VAR_1, 0, VAR_1, 0, ((void*)0), ((void*)0),
     &VAR_19->sc_dtag);
 if (VAR_28 != 0) {
  FUNC_3(VAR_19->dev, "could not allocate parent dma tag\n");
  return (VAR_28);
 }


 VAR_20 = &VAR_19->sc_tx_ring;
 VAR_28 = FUNC_4(VAR_19, VAR_3, VAR_13,
     &VAR_20->tr_dtag, (uint8_t **)&VAR_20->tr_desc, &VAR_20->tr_dmap,
     &VAR_20->tr_paddr, "TX ring");
 if (VAR_28)
  return (VAR_28);


 VAR_26 = &VAR_19->sc_tx_status;
 VAR_28 = FUNC_4(VAR_19, VAR_11, sizeof(uint32_t),
     &VAR_26->txsd_dtag, (uint8_t **)&VAR_26->txsd_status, &VAR_26->txsd_dmap,
     &VAR_26->txsd_paddr, "TX status block");
 if (VAR_28)
  return (VAR_28);


 VAR_21 = &VAR_19->sc_rx_ring[0];
 VAR_28 = FUNC_4(VAR_19, VAR_3, VAR_10,
     &VAR_21->rr_dtag, (uint8_t **)&VAR_21->rr_desc, &VAR_21->rr_dmap,
     &VAR_21->rr_paddr, "RX ring 0");
 VAR_21->rr_posreg = VAR_8;
 if (VAR_28)
  return (VAR_28);


 VAR_21 = &VAR_19->sc_rx_ring[1];
 VAR_28 = FUNC_4(VAR_19, VAR_3, VAR_10,
     &VAR_21->rr_dtag, (uint8_t **)&VAR_21->rr_desc, &VAR_21->rr_dmap,
     &VAR_21->rr_paddr, "RX ring 1");
 VAR_21->rr_posreg = VAR_9;
 if (VAR_28)
  return (VAR_28);


 VAR_22 = &VAR_19->sc_rxstat_ring;
 VAR_28 = FUNC_4(VAR_19, VAR_3, VAR_6,
     &VAR_22->rsr_dtag, (uint8_t **)&VAR_22->rsr_stat,
     &VAR_22->rsr_dmap, &VAR_22->rsr_paddr, "RX stat ring");
 if (VAR_28)
  return (VAR_28);


 VAR_23 = &VAR_19->sc_rx_status;
 VAR_28 = FUNC_4(VAR_19, VAR_11,
     sizeof(struct et_rxstatus), &VAR_23->rxsd_dtag,
     (uint8_t **)&VAR_23->rxsd_status, &VAR_23->rxsd_dmap,
     &VAR_23->rxsd_paddr, "RX status block");
 if (VAR_28)
  return (VAR_28);


 VAR_28 = FUNC_0(FUNC_2(VAR_19->dev), 1, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0),
     VAR_1, 0, VAR_1, 0, ((void*)0), ((void*)0),
     &VAR_19->sc_mbuf_dtag);
 if (VAR_28 != 0) {
  FUNC_3(VAR_19->dev,
      "could not allocate parent dma tag for mbuf\n");
  return (VAR_28);
 }


 VAR_28 = FUNC_0(VAR_19->sc_mbuf_dtag, 1, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0), VAR_15, 1,
     VAR_15, 0, ((void*)0), ((void*)0), &VAR_19->sc_rx_mini_tag);
 if (VAR_28) {
  FUNC_3(VAR_19->dev, "could not create mini RX dma tag\n");
  return (VAR_28);
 }


 VAR_28 = FUNC_0(VAR_19->sc_mbuf_dtag, 1, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0), VAR_14, 1,
     VAR_14, 0, ((void*)0), ((void*)0), &VAR_19->sc_rx_tag);
 if (VAR_28) {
  FUNC_3(VAR_19->dev, "could not create RX dma tag\n");
  return (VAR_28);
 }


 VAR_28 = FUNC_0(VAR_19->sc_mbuf_dtag, 1, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0),
     VAR_14 * VAR_2, VAR_2, VAR_14, 0, ((void*)0), ((void*)0),
     &VAR_19->sc_tx_tag);
 if (VAR_28) {
  FUNC_3(VAR_19->dev, "could not create TX dma tag\n");
  return (VAR_28);
 }


 VAR_24 = &VAR_19->sc_rx_data[0];
 VAR_24->rbd_bufsize = VAR_4;
 VAR_24->rbd_newbuf = VAR_17;
 VAR_24->rbd_discard = VAR_18;
 VAR_24->rbd_softc = VAR_19;
 VAR_24->rbd_ring = &VAR_19->sc_rx_ring[0];

 for (VAR_27 = 0; VAR_27 < VAR_7; VAR_27++) {
  VAR_28 = FUNC_1(VAR_19->sc_rx_mini_tag, 0,
      &VAR_24->rbd_buf[VAR_27].rb_dmap);
  if (VAR_28) {
   FUNC_3(VAR_19->dev,
       "could not create DMA map for mini RX mbufs\n");
   return (VAR_28);
  }
 }


 VAR_28 = FUNC_1(VAR_19->sc_rx_mini_tag, 0,
     &VAR_19->sc_rx_mini_sparemap);
 if (VAR_28) {
  FUNC_3(VAR_19->dev,
      "could not create spare DMA map for mini RX mbuf\n");
  return (VAR_28);
 }


 VAR_24 = &VAR_19->sc_rx_data[1];
 VAR_24->rbd_bufsize = VAR_5;
 VAR_24->rbd_newbuf = VAR_16;
 VAR_24->rbd_discard = VAR_18;
 VAR_24->rbd_softc = VAR_19;
 VAR_24->rbd_ring = &VAR_19->sc_rx_ring[1];

 for (VAR_27 = 0; VAR_27 < VAR_7; VAR_27++) {
  VAR_28 = FUNC_1(VAR_19->sc_rx_tag, 0,
      &VAR_24->rbd_buf[VAR_27].rb_dmap);
  if (VAR_28) {
   FUNC_3(VAR_19->dev,
       "could not create DMA map for mini RX mbufs\n");
   return (VAR_28);
  }
 }


 VAR_28 = FUNC_1(VAR_19->sc_rx_tag, 0, &VAR_19->sc_rx_sparemap);
 if (VAR_28) {
  FUNC_3(VAR_19->dev,
      "could not create spare DMA map for RX mbuf\n");
  return (VAR_28);
 }


 VAR_25 = &VAR_19->sc_tx_data;
 for (VAR_27 = 0; VAR_27 < VAR_12; VAR_27++) {
  VAR_28 = FUNC_1(VAR_19->sc_tx_tag, 0,
      &VAR_25->tbd_buf[VAR_27].tb_dmap);
  if (VAR_28) {
   FUNC_3(VAR_19->dev,
       "could not create DMA map for TX mbufs\n");
   return (VAR_28);
  }
 }

 return (0);
}
