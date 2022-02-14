
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_tx_ampdu {int dummy; } ;
struct ieee80211_node {int dummy; } ;
struct ath_tid {int tid; } ;
struct TYPE_6__ {int ast_tx_aggr_fail; int ast_tx_aggr_failall; } ;
struct ath_softc {TYPE_3__ sc_stats; } ;
struct ath_node {int dummy; } ;
struct TYPE_5__ {int bfs_nframes; int bfs_pktlen; int bfs_rc; } ;
struct TYPE_4__ {int ds_txstat; } ;
struct ath_buf {struct ath_buf* bf_next; TYPE_2__ bf_state; TYPE_1__ bf_status; struct ieee80211_node* bf_node; } ;
typedef int ath_bufhead ;


 struct ath_node* FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct ath_tid*,struct ath_buf*,int ) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 struct ath_buf* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct ath_buf*,int ) ;
 struct ath_buf* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,struct ath_buf*,int ) ;
 int VAR_0 ;
 int FUNC_9 (struct ath_softc*,struct ath_buf*,int ) ;
 struct ieee80211_tx_ampdu* FUNC_10 (struct ath_node*,int ) ;
 scalar_t__ FUNC_11 (struct ath_softc*,struct ath_buf*,int *) ;
 int FUNC_12 (struct ath_softc*,struct ath_tid*) ;
 int FUNC_13 (struct ath_softc*,struct ath_tid*) ;
 scalar_t__ FUNC_14 (struct ath_softc*,struct ath_tid*) ;
 int FUNC_15 (struct ath_softc*,struct ath_tid*) ;
 int FUNC_16 (struct ath_softc*,struct ieee80211_node*,int ,int *,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_17(struct ath_softc *VAR_2, struct ath_buf *VAR_3,
    struct ath_tid *VAR_4)
{
 struct ieee80211_node *VAR_5 = VAR_3->bf_node;
 struct ath_node *VAR_6 = FUNC_0(VAR_5);
 struct ath_buf *VAR_7, *VAR_8;
 ath_bufhead VAR_9;
 int VAR_10 = 0;
 struct ieee80211_tx_ampdu *VAR_11;
 ath_bufhead VAR_12;

 FUNC_5(&VAR_9);
 FUNC_5(&VAR_12);







 FUNC_16(VAR_2, VAR_5, VAR_3->bf_state.bfs_rc,
     &VAR_3->bf_status.ds_txstat,
     VAR_3->bf_state.bfs_pktlen,
     VAR_3->bf_state.bfs_nframes, VAR_3->bf_state.bfs_nframes);

 FUNC_2(VAR_2);
 VAR_11 = FUNC_10(VAR_6, VAR_4->tid);
 VAR_2->sc_stats.ast_tx_aggr_failall++;


 VAR_8 = VAR_3;
 while (VAR_8) {
  VAR_7 = VAR_8->bf_next;
  VAR_8->bf_next = ((void*)0);
  VAR_2->sc_stats.ast_tx_aggr_fail++;
  if (FUNC_11(VAR_2, VAR_8, &VAR_9)) {
   VAR_10++;
   VAR_8->bf_next = ((void*)0);
   FUNC_6(&VAR_12, VAR_8, VAR_1);
  }
  VAR_8 = VAR_7;
 }


 while ((VAR_8 = FUNC_7(&VAR_9, VAR_0)) != ((void*)0)) {
  FUNC_8(&VAR_9, VAR_8, VAR_1);
  FUNC_1(VAR_4, VAR_8, VAR_1);
 }




 FUNC_15(VAR_2, VAR_4);
 if (VAR_10) {

  FUNC_12(VAR_2, VAR_4);
 }




 if (FUNC_14(VAR_2, VAR_4))
  FUNC_13(VAR_2, VAR_4);

 FUNC_3(VAR_2);


 while ((VAR_8 = FUNC_4(&VAR_12)) != ((void*)0)) {
  FUNC_8(&VAR_12, VAR_8, VAR_1);
  FUNC_9(VAR_2, VAR_8, 0);
 }
}
