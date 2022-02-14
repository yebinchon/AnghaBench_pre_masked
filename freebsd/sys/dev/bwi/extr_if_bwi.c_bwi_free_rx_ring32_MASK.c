
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_rxbuf_data {struct bwi_rxbuf* rbd_buf; } ;
struct bwi_ring_data {int rdata_txrx_ctrl; } ;
struct bwi_softc {int sc_buf_dtag; struct bwi_rxbuf_data sc_rx_bdata; struct bwi_ring_data sc_rx_rdata; } ;
struct bwi_rxbuf {int * rb_mbuf; int rb_dmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct bwi_softc *VAR_1)
{
 struct bwi_ring_data *VAR_2 = &VAR_1->sc_rx_rdata;
 struct bwi_rxbuf_data *VAR_3 = &VAR_1->sc_rx_bdata;
 int VAR_4;

 FUNC_1(VAR_1, VAR_2->rdata_txrx_ctrl);

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct bwi_rxbuf *VAR_5 = &VAR_3->rbd_buf[VAR_4];

  if (VAR_5->rb_mbuf != ((void*)0)) {
   FUNC_0(VAR_1->sc_buf_dtag, VAR_5->rb_dmap);
   FUNC_2(VAR_5->rb_mbuf);
   VAR_5->rb_mbuf = ((void*)0);
  }
 }
}
