
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ratectl_tx_stats {int nframes; int nsuccess; int flags; int nretries; } ;
struct ieee80211_node {struct ieee80211_amrr_node* ni_rctls; } ;
struct ieee80211_amrr_node {int amn_txcnt; int amn_success; int amn_retrycnt; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1, struct ieee80211_node *VAR_2)
{
 struct ieee80211_ratectl_tx_stats *VAR_3 = VAR_1;
 struct ieee80211_amrr_node *VAR_4 = VAR_2->ni_rctls;
 int VAR_5, VAR_6, VAR_7;

 if (!VAR_4)
  return;

 VAR_5 = VAR_3->nframes;
 VAR_6 = VAR_3->nsuccess;
 VAR_7 = 0;
 if (VAR_3->flags & VAR_0)
  VAR_7 = VAR_3->nretries;

 VAR_4->amn_txcnt += VAR_5;
 VAR_4->amn_success += VAR_6;
 VAR_4->amn_retrycnt += VAR_7;
}
