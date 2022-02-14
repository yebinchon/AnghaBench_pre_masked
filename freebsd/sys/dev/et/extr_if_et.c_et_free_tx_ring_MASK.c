
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_txdesc_ring {int dummy; } ;
struct et_txbuf_data {struct et_txbuf* tbd_buf; } ;
struct et_txbuf {int * tb_mbuf; int tb_dmap; } ;
struct et_softc {int sc_mbuf_dtag; int sc_tx_tag; struct et_txdesc_ring sc_tx_ring; struct et_txbuf_data sc_tx_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct et_softc *VAR_2)
{
 struct et_txdesc_ring *VAR_3;
 struct et_txbuf_data *VAR_4;
 struct et_txbuf *VAR_5;
 int VAR_6;

 VAR_4 = &VAR_2->sc_tx_data;
 VAR_3 = &VAR_2->sc_tx_ring;
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  VAR_5 = &VAR_4->tbd_buf[VAR_6];
  if (VAR_5->tb_mbuf != ((void*)0)) {
   FUNC_0(VAR_2->sc_tx_tag, VAR_5->tb_dmap,
       VAR_0);
   FUNC_1(VAR_2->sc_mbuf_dtag, VAR_5->tb_dmap);
   FUNC_2(VAR_5->tb_mbuf);
   VAR_5->tb_mbuf = ((void*)0);
  }
 }
}
