
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_txq {int dummy; } ;
struct mwl_txbuf {int dummy; } ;
struct TYPE_2__ {int mst_tx_qstop; } ;
struct mwl_softc {int sc_mh; TYPE_1__ sc_stats; struct mwl_txq** sc_ac2q; scalar_t__ sc_invalid; int sc_running; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct mwl_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*) ;
 struct mwl_txbuf* FUNC_2 (struct mwl_softc*,struct mwl_txq*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mwl_txq*,struct mwl_txbuf*) ;
 scalar_t__ FUNC_5 (struct mwl_softc*,struct ieee80211_node*,struct mwl_txbuf*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_node *VAR_3, struct mbuf *VAR_4,
 const struct ieee80211_bpf_params *VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_3->ni_ic;
 struct mwl_softc *VAR_7 = VAR_6->ic_softc;
 struct mwl_txbuf *VAR_8;
 struct mwl_txq *VAR_9;

 if (!VAR_7->sc_running || VAR_7->sc_invalid) {
  FUNC_1(VAR_4);
  return VAR_1;
 }
 VAR_9 = VAR_7->sc_ac2q[FUNC_0(VAR_4)];
 VAR_8 = FUNC_2(VAR_7, VAR_9);
 if (VAR_8 == ((void*)0)) {
  VAR_7->sc_stats.mst_tx_qstop++;
  FUNC_1(VAR_4);
  return VAR_2;
 }



 if (FUNC_5(VAR_7, VAR_3, VAR_8, VAR_4)) {
  FUNC_4(VAR_9, VAR_8);

  return VAR_0;
 }
 FUNC_3(VAR_7->sc_mh, 0 );
 return 0;
}
