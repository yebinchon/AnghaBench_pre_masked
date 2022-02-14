
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct et_txstatus_data {int txsd_paddr; int txsd_dmap; int txsd_status; int txsd_dtag; } ;
struct et_txdesc_ring {int tr_paddr; int tr_dmap; int tr_desc; int tr_dtag; } ;
struct et_txbuf_data {TYPE_2__* tbd_buf; } ;
struct et_rxstatus_data {int dummy; } ;
struct et_rxstat_ring {int rsr_paddr; int rsr_dmap; int rsr_stat; int rsr_dtag; } ;
struct et_softc {int * sc_dtag; struct et_txstatus_data sc_tx_status; struct et_txdesc_ring sc_tx_ring; struct et_rxstatus_data sc_rx_status; struct et_rxstat_ring sc_rxstat_ring; struct et_rxdesc_ring* sc_rx_ring; int * sc_tx_tag; struct et_txbuf_data sc_tx_data; int * sc_rx_tag; int * sc_rx_sparemap; struct et_rxbuf_data* sc_rx_data; int * sc_rx_mini_tag; int * sc_rx_mini_sparemap; } ;
struct et_rxdesc_ring {int rr_paddr; int rr_dmap; int rr_desc; int rr_dtag; } ;
struct et_rxbuf_data {TYPE_1__* rbd_buf; } ;
struct TYPE_4__ {int * tb_dmap; } ;
struct TYPE_3__ {int * rb_dmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct et_softc*,int *,void*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct et_softc *VAR_2)
{
 struct et_txdesc_ring *VAR_3;
 struct et_rxdesc_ring *VAR_4;
 struct et_txstatus_data *VAR_5;
 struct et_rxstat_ring *VAR_6;
 struct et_rxstatus_data *VAR_7;
 struct et_rxbuf_data *VAR_8;
        struct et_txbuf_data *VAR_9;
 int VAR_10;


 VAR_8 = &VAR_2->sc_rx_data[0];
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (VAR_8->rbd_buf[VAR_10].rb_dmap) {
   FUNC_1(VAR_2->sc_rx_mini_tag,
       VAR_8->rbd_buf[VAR_10].rb_dmap);
   VAR_8->rbd_buf[VAR_10].rb_dmap = ((void*)0);
  }
 }
 if (VAR_2->sc_rx_mini_sparemap) {
  FUNC_1(VAR_2->sc_rx_mini_tag, VAR_2->sc_rx_mini_sparemap);
  VAR_2->sc_rx_mini_sparemap = ((void*)0);
 }
 if (VAR_2->sc_rx_mini_tag) {
  FUNC_0(VAR_2->sc_rx_mini_tag);
  VAR_2->sc_rx_mini_tag = ((void*)0);
 }


 VAR_8 = &VAR_2->sc_rx_data[1];
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (VAR_8->rbd_buf[VAR_10].rb_dmap) {
   FUNC_1(VAR_2->sc_rx_tag,
       VAR_8->rbd_buf[VAR_10].rb_dmap);
   VAR_8->rbd_buf[VAR_10].rb_dmap = ((void*)0);
  }
 }
 if (VAR_2->sc_rx_sparemap) {
  FUNC_1(VAR_2->sc_rx_tag, VAR_2->sc_rx_sparemap);
  VAR_2->sc_rx_sparemap = ((void*)0);
 }
 if (VAR_2->sc_rx_tag) {
  FUNC_0(VAR_2->sc_rx_tag);
  VAR_2->sc_rx_tag = ((void*)0);
 }


 VAR_9 = &VAR_2->sc_tx_data;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_9->tbd_buf[VAR_10].tb_dmap) {
   FUNC_1(VAR_2->sc_tx_tag,
       VAR_9->tbd_buf[VAR_10].tb_dmap);
   VAR_9->tbd_buf[VAR_10].tb_dmap = ((void*)0);
  }
 }
 if (VAR_2->sc_tx_tag) {
  FUNC_0(VAR_2->sc_tx_tag);
  VAR_2->sc_tx_tag = ((void*)0);
 }


 VAR_4 = &VAR_2->sc_rx_ring[0];
 FUNC_2(VAR_2, &VAR_4->rr_dtag, (void *)&VAR_4->rr_desc,
     VAR_4->rr_dmap, &VAR_4->rr_paddr);

 VAR_4 = &VAR_2->sc_rx_ring[1];
 FUNC_2(VAR_2, &VAR_4->rr_dtag, (void *)&VAR_4->rr_desc,
     VAR_4->rr_dmap, &VAR_4->rr_paddr);

 VAR_6 = &VAR_2->sc_rxstat_ring;
 FUNC_2(VAR_2, &VAR_6->rsr_dtag, (void *)&VAR_6->rsr_stat,
     VAR_6->rsr_dmap, &VAR_6->rsr_paddr);

 VAR_7 = &VAR_2->sc_rx_status;
 FUNC_2(VAR_2, &VAR_6->rsr_dtag, (void *)&VAR_6->rsr_stat,
     VAR_6->rsr_dmap, &VAR_6->rsr_paddr);

 VAR_3 = &VAR_2->sc_tx_ring;
 FUNC_2(VAR_2, &VAR_3->tr_dtag, (void *)&VAR_3->tr_desc,
     VAR_3->tr_dmap, &VAR_3->tr_paddr);

 VAR_5 = &VAR_2->sc_tx_status;
 FUNC_2(VAR_2, &VAR_5->txsd_dtag, (void *)&VAR_5->txsd_status,
     VAR_5->txsd_dmap, &VAR_5->txsd_paddr);


 if (VAR_2->sc_dtag) {
  FUNC_0(VAR_2->sc_dtag);
  VAR_2->sc_dtag = ((void*)0);
 }
}
