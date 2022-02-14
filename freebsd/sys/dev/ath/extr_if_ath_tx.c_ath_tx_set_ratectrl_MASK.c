
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_node {int dummy; } ;
struct ath_softc {int sc_ah; } ;
struct ath_rc_series {int tries; int ratecode; } ;
struct TYPE_2__ {int bfs_txflags; int bfs_ismrr; struct ath_rc_series* bfs_rc; } ;
struct ath_buf {int bf_desc; TYPE_1__ bf_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,struct ieee80211_node*,struct ath_buf*) ;
 int FUNC_1 (int ,int ,int ,int,int ,int,int ,int) ;
 scalar_t__ FUNC_2 (struct ath_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ath_softc *VAR_1, struct ieee80211_node *VAR_2,
    struct ath_buf *VAR_3)
{
 struct ath_rc_series *VAR_4 = VAR_3->bf_state.bfs_rc;


 if (! VAR_3->bf_state.bfs_ismrr)
  VAR_4[1].tries = VAR_4[2].tries = VAR_4[3].tries = 0;
 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
 } else {
  FUNC_1(VAR_1->sc_ah, VAR_3->bf_desc
   , VAR_4[1].ratecode, VAR_4[1].tries
   , VAR_4[2].ratecode, VAR_4[2].tries
   , VAR_4[3].ratecode, VAR_4[3].tries
  );
 }
}
