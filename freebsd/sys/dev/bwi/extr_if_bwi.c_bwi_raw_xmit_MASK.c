
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ieee80211com {struct bwi_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;
struct bwi_txbuf_data {int tbd_idx; int tbd_used; TYPE_1__* tbd_buf; } ;
struct bwi_softc {int sc_flags; int sc_tx_timer; struct bwi_txbuf_data* sc_tx_bdata; } ;
struct TYPE_2__ {int * tb_mbuf; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_softc*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bwi_softc*) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct bwi_softc*,int,struct mbuf*,struct ieee80211_node*) ;
 int FUNC_4 (struct bwi_softc*,int,struct mbuf*,struct ieee80211_node*,struct ieee80211_bpf_params const*) ;
 int FUNC_5 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_node *VAR_4, struct mbuf *VAR_5,
 const struct ieee80211_bpf_params *VAR_6)
{
 struct ieee80211com *VAR_7 = VAR_4->ni_ic;
 struct bwi_softc *VAR_8 = VAR_7->ic_softc;

 struct bwi_txbuf_data *VAR_9 = &VAR_8->sc_tx_bdata[VAR_1];
 int VAR_10, VAR_11;

 if ((VAR_8->sc_flags & VAR_0) == 0) {
  FUNC_5(VAR_5);
  return VAR_3;
 }

 FUNC_0(VAR_8);
 VAR_10 = VAR_9->tbd_idx;
 FUNC_2(VAR_9->tbd_buf[VAR_10].tb_mbuf == ((void*)0), ("slot %d not empty", VAR_10));
 if (VAR_6 == ((void*)0)) {




  VAR_11 = FUNC_3(VAR_8, VAR_10, VAR_5, VAR_4);
 } else {




  VAR_11 = FUNC_4(VAR_8, VAR_10, VAR_5, VAR_4, VAR_6);
 }
 if (VAR_11 == 0) {
  VAR_9->tbd_used++;
  VAR_9->tbd_idx = (VAR_10 + 1) % VAR_2;
  VAR_8->sc_tx_timer = 5;
 }
 FUNC_1(VAR_8);
 return VAR_11;
}
