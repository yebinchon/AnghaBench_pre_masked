
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_node {int dummy; } ;
struct ath_txq {int dummy; } ;
struct ath_tx_status {int ts_status; } ;
struct ath_softc {int dummy; } ;
struct TYPE_2__ {int bfs_txflags; int bfs_pktlen; int bfs_rc; } ;
struct ath_buf {int (* bf_comp ) (struct ath_softc*,struct ath_buf*,int ) ;TYPE_1__ bf_state; struct ieee80211_node* bf_node; } ;


 int FUNC_0 (struct ath_txq*) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ath_softc*,struct ath_buf*,int ) ;
 int FUNC_3 (struct ath_softc*,struct ieee80211_node*,int ,struct ath_tx_status*,int ,int,int) ;
 int FUNC_4 (struct ath_softc*,struct ath_tx_status*,struct ath_buf*) ;
 int FUNC_5 (struct ath_softc*,struct ath_buf*,int ) ;

void
FUNC_6(struct ath_softc *VAR_2, struct ath_txq *VAR_3,
    struct ath_tx_status *VAR_4, struct ath_buf *VAR_5)
{
 struct ieee80211_node *VAR_6 = VAR_5->bf_node;

 FUNC_1(VAR_2);
 FUNC_0(VAR_3);


 if (VAR_6 != ((void*)0)) {

  FUNC_4(VAR_2, VAR_4, VAR_5);
 }
 if (VAR_5->bf_comp == ((void*)0)) {
  if ((VAR_4->ts_status & VAR_1) == 0 &&
      (VAR_5->bf_state.bfs_txflags & VAR_0) == 0) {




   FUNC_3(VAR_2, VAR_6,
        VAR_5->bf_state.bfs_rc, VAR_4,
       VAR_5->bf_state.bfs_pktlen, 1,
       (VAR_4->ts_status == 0 ? 0 : 1));
  }
  FUNC_2(VAR_2, VAR_5, 0);
 } else
  VAR_5->bf_comp(VAR_2, VAR_5, 0);
}
