
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ieee80211com {int ic_flags; } ;
struct ieee80211_node {int ni_capinfo; struct ieee80211com* ni_ic; } ;
struct ath_softc {int sc_cur_txchainmask; TYPE_3__* sc_currates; struct ath_hal* sc_ah; } ;
struct ath_rc_series {scalar_t__ tries; size_t rix; int flags; int tx_power_cap; } ;
struct ath_hal {int dummy; } ;
struct TYPE_8__ {int bfs_al; int bfs_pktlen; scalar_t__ bfs_aggr; struct ath_rc_series* bfs_rc; } ;
struct ath_buf {TYPE_1__ bf_state; } ;
struct TYPE_11__ {scalar_t__ Tries; size_t RateIndex; int RateFlags; int PktDuration; int Rate; int tx_power_cap; int ChSel; } ;
struct TYPE_10__ {TYPE_2__* info; } ;
struct TYPE_9__ {int shortPreamble; int rateCode; } ;
typedef TYPE_3__ HAL_RATE_TABLE ;
typedef scalar_t__ HAL_BOOL ;
typedef TYPE_4__ HAL_11N_RATE_SERIES ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int,int ,int ,int,int) ;
 int FUNC_2 (struct ath_hal*,TYPE_3__ const*,int,size_t,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ath_softc *VAR_14, struct ieee80211_node *VAR_15,
    struct ath_buf *VAR_16, HAL_11N_RATE_SERIES *VAR_17)
{
 struct ieee80211com *VAR_18 = VAR_15->ni_ic;
 struct ath_hal *VAR_19 = VAR_14->sc_ah;
 HAL_BOOL VAR_20 = VAR_0;
 const HAL_RATE_TABLE *VAR_21 = VAR_14->sc_currates;
 int VAR_22;
 int VAR_23;
 struct ath_rc_series *VAR_24 = VAR_16->bf_state.bfs_rc;

 if ((VAR_18->ic_flags & VAR_13) &&
     (VAR_15->ni_capinfo & VAR_12))
  VAR_20 = VAR_1;





 if (VAR_16->bf_state.bfs_aggr)
  VAR_23 = VAR_16->bf_state.bfs_al;
 else
  VAR_23 = VAR_16->bf_state.bfs_pktlen;





 FUNC_3(VAR_17, 0, sizeof(HAL_11N_RATE_SERIES) * 4);
 for (VAR_22 = 0; VAR_22 < VAR_4; VAR_22++) {

  if (VAR_24[VAR_22].tries == 0)
   continue;

  VAR_17[VAR_22].Tries = VAR_24[VAR_22].tries;
  VAR_17[VAR_22].ChSel = VAR_14->sc_cur_txchainmask;




  VAR_17[VAR_22].Rate = VAR_21->info[VAR_24[VAR_22].rix].rateCode;
  VAR_17[VAR_22].RateIndex = VAR_24[VAR_22].rix;
  VAR_17[VAR_22].tx_power_cap = VAR_24[VAR_22].tx_power_cap;




  if (VAR_24[VAR_22].flags & VAR_5)
   VAR_17[VAR_22].RateFlags |= VAR_10;




  if (VAR_24[VAR_22].flags & VAR_3) {
   if (VAR_24[VAR_22].flags & VAR_2)
    VAR_17[VAR_22].RateFlags |= VAR_8;

   if (VAR_24[VAR_22].flags & VAR_6)
    VAR_17[VAR_22].RateFlags |= VAR_9;

   if (VAR_24[VAR_22].flags & VAR_7)
    VAR_17[VAR_22].RateFlags |= VAR_11;
  }
  if (VAR_24[VAR_22].flags & VAR_3) {
   VAR_17[VAR_22].PktDuration =
       FUNC_1(VAR_23
    , VAR_17[VAR_22].Rate
    , FUNC_0(VAR_17[VAR_22].Rate)
    , VAR_17[VAR_22].RateFlags & VAR_8
    , VAR_17[VAR_22].RateFlags & VAR_9);
  } else {
   if (VAR_20)
    VAR_17[VAR_22].Rate |=
        VAR_21->info[VAR_24[VAR_22].rix].shortPreamble;

   VAR_17[VAR_22].PktDuration = FUNC_2(VAR_19,
       VAR_21, VAR_23, VAR_24[VAR_22].rix, VAR_20, VAR_1);
  }
 }
}
