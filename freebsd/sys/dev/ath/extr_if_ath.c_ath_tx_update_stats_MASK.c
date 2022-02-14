
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct TYPE_5__ {int wme_hipri_traffic; } ;
struct ieee80211com {TYPE_1__ ic_wme; } ;
struct ieee80211_node {int ni_inact_reload; int ni_inact; } ;
struct ath_tx_status {int ts_status; size_t ts_antenna; scalar_t__ ts_finaltsi; int ts_flags; int ts_shortretry; int ts_longretry; } ;
struct TYPE_7__ {int ast_tx_shortretry; int ast_tx_longretry; int ast_tx_delim_underrun; int ast_tx_data_underrun; int ast_tx_desccfgerr; int ast_ff_txerr; int ast_tx_timerexpired; int ast_tx_xtxop; int ast_tx_filtered; int ast_tx_fifoerr; int ast_tx_xretries; int ast_tx_altrate; int * ast_ant_tx; } ;
struct ath_softc {TYPE_3__ sc_stats; int * sc_ant_tx; struct ieee80211com sc_ic; } ;
struct TYPE_6__ {int bfs_txflags; } ;
struct ath_buf {TYPE_4__* bf_m; TYPE_2__ bf_state; struct ieee80211_node* bf_node; } ;
struct TYPE_8__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_1(struct ath_softc *VAR_11, struct ath_tx_status *VAR_12,
    struct ath_buf *VAR_13)
{
 struct ieee80211_node *VAR_14 = VAR_13->bf_node;
 struct ieee80211com *VAR_15 = &VAR_11->sc_ic;
 int VAR_16, VAR_17, VAR_18;

 if (VAR_12->ts_status == 0) {
  u_int8_t VAR_19 = VAR_12->ts_antenna;
  VAR_11->sc_stats.ast_ant_tx[VAR_19]++;
  VAR_11->sc_ant_tx[VAR_19]++;
  if (VAR_12->ts_finaltsi != 0)
   VAR_11->sc_stats.ast_tx_altrate++;


  VAR_18 = FUNC_0(VAR_13->bf_m);
  if (VAR_18 >= VAR_10)
   VAR_15->ic_wme.wme_hipri_traffic++;

  if ((VAR_13->bf_state.bfs_txflags & VAR_0) == 0)
   VAR_14->ni_inact = VAR_14->ni_inact_reload;
 } else {
  if (VAR_12->ts_status & VAR_4)
   VAR_11->sc_stats.ast_tx_xretries++;
  if (VAR_12->ts_status & VAR_1)
   VAR_11->sc_stats.ast_tx_fifoerr++;
  if (VAR_12->ts_status & VAR_2)
   VAR_11->sc_stats.ast_tx_filtered++;
  if (VAR_12->ts_status & VAR_5)
   VAR_11->sc_stats.ast_tx_xtxop++;
  if (VAR_12->ts_status & VAR_3)
   VAR_11->sc_stats.ast_tx_timerexpired++;

  if (VAR_13->bf_m->m_flags & VAR_9)
   VAR_11->sc_stats.ast_ff_txerr++;
 }

 if (VAR_12->ts_flags & VAR_8)
  VAR_11->sc_stats.ast_tx_desccfgerr++;
 if (VAR_12->ts_flags & VAR_6)
  VAR_11->sc_stats.ast_tx_data_underrun++;
 if (VAR_12->ts_flags & VAR_7)
  VAR_11->sc_stats.ast_tx_delim_underrun++;

 VAR_16 = VAR_12->ts_shortretry;
 VAR_17 = VAR_12->ts_longretry;
 VAR_11->sc_stats.ast_tx_shortretry += VAR_16;
 VAR_11->sc_stats.ast_tx_longretry += VAR_17;

}
