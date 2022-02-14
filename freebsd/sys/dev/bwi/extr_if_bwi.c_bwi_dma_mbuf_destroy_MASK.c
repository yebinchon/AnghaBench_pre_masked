
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_txbuf_data {struct bwi_txbuf* tbd_buf; } ;
struct bwi_txbuf {int tb_dmap; int * tb_ni; int * tb_mbuf; } ;
struct bwi_rxbuf_data {struct bwi_rxbuf* rbd_buf; int rbd_tmp_dmap; } ;
struct bwi_softc {int * sc_buf_dtag; struct bwi_rxbuf_data sc_rx_bdata; struct bwi_txbuf_data* sc_tx_bdata; } ;
struct bwi_rxbuf {int rb_dmap; int * rb_mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bwi_softc *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_2->sc_buf_dtag == ((void*)0))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  struct bwi_txbuf_data *VAR_7 = &VAR_2->sc_tx_bdata[VAR_5];

  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
   struct bwi_txbuf *VAR_8 = &VAR_7->tbd_buf[VAR_6];

   if (VAR_8->tb_mbuf != ((void*)0)) {
    FUNC_2(VAR_2->sc_buf_dtag,
        VAR_8->tb_dmap);
    FUNC_4(VAR_8->tb_mbuf);
   }
   if (VAR_8->tb_ni != ((void*)0))
    FUNC_3(VAR_8->tb_ni);
   FUNC_1(VAR_2->sc_buf_dtag, VAR_8->tb_dmap);
  }
 }

 if (VAR_4) {
  struct bwi_rxbuf_data *VAR_9 = &VAR_2->sc_rx_bdata;

  FUNC_1(VAR_2->sc_buf_dtag, VAR_9->rbd_tmp_dmap);
  for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
   struct bwi_rxbuf *VAR_10 = &VAR_9->rbd_buf[VAR_6];

   if (VAR_10->rb_mbuf != ((void*)0)) {
    FUNC_2(VAR_2->sc_buf_dtag,
        VAR_10->rb_dmap);
    FUNC_4(VAR_10->rb_mbuf);
   }
   FUNC_1(VAR_2->sc_buf_dtag, VAR_10->rb_dmap);
  }
 }

 FUNC_0(VAR_2->sc_buf_dtag);
 VAR_2->sc_buf_dtag = ((void*)0);
}
