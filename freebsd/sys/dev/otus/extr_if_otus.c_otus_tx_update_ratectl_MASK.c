
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ratectl_tx_stats {int flags; scalar_t__ nretries; scalar_t__ nsuccess; scalar_t__ nframes; struct ieee80211_node* ni; } ;
struct otus_softc {struct ieee80211_ratectl_tx_stats sc_txs; } ;
struct otus_node {scalar_t__ tx_retries; scalar_t__ tx_err; scalar_t__ tx_done; } ;
struct ieee80211_node {int ni_vap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct otus_node* FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (int ,struct ieee80211_ratectl_tx_stats*) ;

__attribute__((used)) static void
FUNC_2(struct otus_softc *VAR_2, struct ieee80211_node *VAR_3)
{
 struct ieee80211_ratectl_tx_stats *VAR_4 = &VAR_2->sc_txs;
 struct otus_node *VAR_5 = FUNC_0(VAR_3);

 VAR_4->flags = VAR_0 |
       VAR_1;
 VAR_4->ni = VAR_3;
 VAR_4->nframes = VAR_5->tx_done;
 VAR_4->nsuccess = VAR_5->tx_done - VAR_5->tx_err;
 VAR_4->nretries = VAR_5->tx_retries;

 FUNC_1(VAR_3->ni_vap, VAR_4);
 VAR_5->tx_done = VAR_5->tx_err = VAR_5->tx_retries = 0;
}
