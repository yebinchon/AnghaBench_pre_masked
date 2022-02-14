
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct malo_txq {int nfree; int free; } ;
struct malo_txbuf {int * bf_node; int * bf_m; } ;
struct malo_softc {int malo_mh; struct malo_txq* malo_txq; scalar_t__ malo_invalid; int malo_running; } ;
struct ieee80211com {struct malo_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct malo_txq*) ;
 int FUNC_1 (struct malo_txq*) ;
 int FUNC_2 (int *,struct malo_txbuf*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct mbuf*) ;
 struct malo_txbuf* FUNC_4 (struct malo_softc*,struct malo_txq*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct malo_softc*,struct ieee80211_node*,struct malo_txbuf*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_node *VAR_4, struct mbuf *VAR_5,
 const struct ieee80211_bpf_params *VAR_6)
{
 struct ieee80211com *VAR_7 = VAR_4->ni_ic;
 struct malo_softc *VAR_8 = VAR_7->ic_softc;
 struct malo_txbuf *VAR_9;
 struct malo_txq *VAR_10;

 if (!VAR_8->malo_running || VAR_8->malo_invalid) {
  FUNC_3(VAR_5);
  return VAR_1;
 }







 VAR_10 = &VAR_8->malo_txq[0];
 VAR_9 = FUNC_4(VAR_8, VAR_10);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_5);
  return VAR_2;
 }




 if (FUNC_6(VAR_8, VAR_4, VAR_9, VAR_5) != 0) {
  VAR_9->bf_m = ((void*)0);
  VAR_9->bf_node = ((void*)0);
  FUNC_0(VAR_10);
  FUNC_2(&VAR_10->free, VAR_9, VAR_3);
  VAR_10->nfree++;
  FUNC_1(VAR_10);

  return VAR_0;
 }
 FUNC_5(VAR_8->malo_mh, 0 );

 return 0;
}
