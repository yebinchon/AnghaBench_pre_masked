
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ural_tx_data {int desc; int rate; struct ieee80211_node* ni; struct mbuf* m; } ;
struct ural_softc {scalar_t__ tx_nfree; int * sc_xfer; int tx_q; int tx_free; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211vap {struct ieee80211_txparam* iv_txparms; } ;
struct ieee80211com {scalar_t__ ic_bsschan; } ;
struct ieee80211_txparam {int mgmtrate; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; struct ieee80211vap* ni_vap; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ural_tx_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ural_tx_data*,int ) ;
 int FUNC_3 (int *,int ) ;
 size_t VAR_5 ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (struct mbuf*) ;
 int VAR_6 ;
 int FUNC_7 (struct ural_softc*,int *,int,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct ural_softc *VAR_7, struct mbuf *VAR_8, struct ieee80211_node *VAR_9)
{
 struct ieee80211vap *VAR_10 = VAR_9->ni_vap;
 struct ieee80211com *VAR_11 = VAR_9->ni_ic;
 const struct ieee80211_txparam *VAR_12;
 struct ural_tx_data *VAR_13;

 if (VAR_7->tx_nfree == 0) {
  FUNC_6(VAR_8);
  FUNC_5(VAR_9);
  return (VAR_0);
 }
 if (VAR_11->ic_bsschan == VAR_2) {
  FUNC_6(VAR_8);
  FUNC_5(VAR_9);
  return (VAR_1);
 }
 VAR_13 = FUNC_1(&VAR_7->tx_free);
 FUNC_3(&VAR_7->tx_free, VAR_6);
 VAR_7->tx_nfree--;
 VAR_12 = &VAR_10->iv_txparms[FUNC_4(VAR_11->ic_bsschan)];

 VAR_13->m = VAR_8;
 VAR_13->ni = VAR_9;
 VAR_13->rate = VAR_12->mgmtrate;

 FUNC_7(VAR_7, &VAR_13->desc,
     VAR_3 | VAR_4, VAR_8->m_pkthdr.len,
     VAR_12->mgmtrate);

 FUNC_0(10, "sending beacon frame len=%u rate=%u\n",
     VAR_8->m_pkthdr.len, VAR_12->mgmtrate);

 FUNC_2(&VAR_7->tx_q, VAR_13, VAR_6);
 FUNC_8(VAR_7->sc_xfer[VAR_5]);

 return (0);
}
