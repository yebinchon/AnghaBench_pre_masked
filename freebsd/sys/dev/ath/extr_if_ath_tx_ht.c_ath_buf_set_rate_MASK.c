
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_node {int dummy; } ;
struct ath_softc {int sc_debug; struct ath_hal* sc_ah; } ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct TYPE_2__ {scalar_t__ bfs_atype; int bfs_ctsrate; int bfs_txflags; } ;
struct ath_buf {TYPE_1__ bf_state; struct ath_desc* bf_desc; } ;
typedef int series ;
typedef int HAL_11N_RATE_SERIES ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath_hal*,struct ath_desc*,int,int,int *,int,int) ;
 int FUNC_1 (struct ath_softc*,int *) ;
 int FUNC_2 (struct ath_softc*,struct ieee80211_node*,struct ath_buf*,int *) ;
 int FUNC_3 (int **,int ,int) ;

void
FUNC_4(struct ath_softc *VAR_2, struct ieee80211_node *VAR_3,
    struct ath_buf *VAR_4)
{
 HAL_11N_RATE_SERIES VAR_5[4];
 struct ath_desc *VAR_6 = VAR_4->bf_desc;
 struct ath_hal *VAR_7 = VAR_2->sc_ah;
 int VAR_8 = (VAR_4->bf_state.bfs_atype == VAR_1);
 int VAR_9 = VAR_4->bf_state.bfs_ctsrate;
 int VAR_10 = VAR_4->bf_state.bfs_txflags;


 FUNC_3(&VAR_5, 0, sizeof(VAR_5));

 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_7, VAR_6,
     !VAR_8,
     VAR_9,
     VAR_5,
     4,
     VAR_10);
}
