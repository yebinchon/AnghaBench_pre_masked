
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct r92c_tx_desc {int txdw5; } ;
struct ieee80211vap {int iv_flags_ht; } ;
struct ieee80211_node {int ni_htcap; scalar_t__ ni_chan; struct ieee80211vap* ni_vap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct rtwn_softc *VAR_6, void *VAR_7, struct ieee80211_node *VAR_8)
{
 struct r92c_tx_desc *VAR_9 = (struct r92c_tx_desc *)VAR_7;
 struct ieee80211vap *VAR_10 = VAR_8->ni_vap;

 if ((VAR_10->iv_flags_ht & VAR_1) &&
     (VAR_8->ni_htcap & VAR_3))
  VAR_9->txdw5 |= FUNC_1(VAR_5);
 else if (VAR_8->ni_chan != VAR_0 &&
     FUNC_0(VAR_8->ni_chan) &&
     (VAR_8->ni_htcap & VAR_4) &&
     (VAR_10->iv_flags_ht & VAR_2))
  VAR_9->txdw5 |= FUNC_1(VAR_5);
}
