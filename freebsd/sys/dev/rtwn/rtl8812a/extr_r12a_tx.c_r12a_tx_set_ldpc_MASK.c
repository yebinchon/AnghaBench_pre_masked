
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct r12a_tx_desc {int txdw5; } ;
struct ieee80211vap {int iv_flags_ht; } ;
struct ieee80211_node {int ni_htcap; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_3, struct r12a_tx_desc *VAR_4,
    struct ieee80211_node *VAR_5)
{
 struct ieee80211vap *VAR_6 = VAR_5->ni_vap;

 if ((VAR_6->iv_flags_ht & VAR_0) &&
     (VAR_5->ni_htcap & VAR_1))
  VAR_4->txdw5 |= FUNC_0(VAR_2);
}
