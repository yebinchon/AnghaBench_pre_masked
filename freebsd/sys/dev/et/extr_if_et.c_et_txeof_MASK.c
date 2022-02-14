
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct et_txdesc_ring {int tr_dmap; int tr_dtag; } ;
struct et_txbuf_data {int tbd_used; int tbd_start_index; int tbd_start_wrap; struct et_txbuf* tbd_buf; } ;
struct et_txbuf {int * tb_mbuf; int tb_dmap; } ;
struct et_softc {int sc_flags; scalar_t__ watchdog_timer; int sc_tx_tag; struct et_txbuf_data sc_tx_data; struct et_txdesc_ring sc_tx_ring; struct ifnet* ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct et_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct et_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct et_softc *VAR_8)
{
 struct et_txdesc_ring *VAR_9;
 struct et_txbuf_data *VAR_10;
 struct et_txbuf *VAR_11;
 struct ifnet *VAR_12;
 uint32_t VAR_13;
 int VAR_14, VAR_15;

 FUNC_1(VAR_8);

 VAR_12 = VAR_8->ifp;
 VAR_9 = &VAR_8->sc_tx_ring;
 VAR_10 = &VAR_8->sc_tx_data;

 if ((VAR_8->sc_flags & VAR_1) == 0)
  return;

 if (VAR_10->tbd_used == 0)
  return;

 FUNC_3(VAR_9->tr_dtag, VAR_9->tr_dmap,
     VAR_0);

 VAR_13 = FUNC_0(VAR_8, VAR_3);
 VAR_14 = VAR_13 & VAR_4;
 VAR_15 = (VAR_13 & VAR_5) ? 1 : 0;

 while (VAR_10->tbd_start_index != VAR_14 || VAR_10->tbd_start_wrap != VAR_15) {
  FUNC_2(VAR_10->tbd_start_index < VAR_6);
  VAR_11 = &VAR_10->tbd_buf[VAR_10->tbd_start_index];
  if (VAR_11->tb_mbuf != ((void*)0)) {
   FUNC_3(VAR_8->sc_tx_tag, VAR_11->tb_dmap,
       VAR_0);
   FUNC_4(VAR_8->sc_tx_tag, VAR_11->tb_dmap);
   FUNC_5(VAR_11->tb_mbuf);
   VAR_11->tb_mbuf = ((void*)0);
  }

  if (++VAR_10->tbd_start_index == VAR_6) {
   VAR_10->tbd_start_index = 0;
   VAR_10->tbd_start_wrap ^= 1;
  }

  FUNC_2(VAR_10->tbd_used > 0);
  VAR_10->tbd_used--;
 }

 if (VAR_10->tbd_used == 0)
  VAR_8->watchdog_timer = 0;
 if (VAR_10->tbd_used + VAR_2 < VAR_6)
  VAR_12->if_drv_flags &= ~VAR_7;
}
