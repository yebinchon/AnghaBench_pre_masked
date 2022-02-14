
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_softc {int sc_rx_tag; struct et_rxbuf_data* sc_rx_data; struct et_rxdesc_ring* sc_rx_ring; int sc_rx_mini_tag; } ;
struct et_rxdesc_ring {int rr_dmap; } ;
struct et_rxbuf_data {struct et_rxbuf* rbd_buf; } ;
struct et_rxbuf {int * rb_mbuf; int rb_dmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct et_softc *VAR_2)
{
 struct et_rxbuf_data *VAR_3;
 struct et_rxdesc_ring *VAR_4;
 struct et_rxbuf *VAR_5;
 int VAR_6;


 VAR_4 = &VAR_2->sc_rx_ring[0];
 VAR_3 = &VAR_2->sc_rx_data[0];
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  VAR_5 = &VAR_3->rbd_buf[VAR_6];
  if (VAR_5->rb_mbuf != ((void*)0)) {
   FUNC_0(VAR_2->sc_rx_mini_tag, VAR_4->rr_dmap,
       VAR_0);
   FUNC_1(VAR_2->sc_rx_mini_tag, VAR_5->rb_dmap);
   FUNC_2(VAR_5->rb_mbuf);
   VAR_5->rb_mbuf = ((void*)0);
  }
 }


 VAR_4 = &VAR_2->sc_rx_ring[1];
 VAR_3 = &VAR_2->sc_rx_data[1];
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  VAR_5 = &VAR_3->rbd_buf[VAR_6];
  if (VAR_5->rb_mbuf != ((void*)0)) {
   FUNC_0(VAR_2->sc_rx_tag, VAR_4->rr_dmap,
       VAR_0);
   FUNC_1(VAR_2->sc_rx_tag, VAR_5->rb_dmap);
   FUNC_2(VAR_5->rb_mbuf);
   VAR_5->rb_mbuf = ((void*)0);
  }
 }
}
