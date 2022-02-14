
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ratectl_tx_status {int flags; int long_retries; scalar_t__ status; } ;
struct ieee80211_node {struct ieee80211_amrr_node* ni_rctls; } ;
struct ieee80211_amrr_node {int amn_retrycnt; int amn_success; int amn_txcnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(const struct ieee80211_node *VAR_2,
    const struct ieee80211_ratectl_tx_status *VAR_3)
{
 struct ieee80211_amrr_node *VAR_4 = VAR_2->ni_rctls;
 int VAR_5;

 if (!VAR_4)
  return;

 VAR_5 = 0;
 if (VAR_3->flags & VAR_0)
  VAR_5 = VAR_3->long_retries;

 VAR_4->amn_txcnt++;
 if (VAR_3->status == VAR_1)
  VAR_4->amn_success++;
 VAR_4->amn_retrycnt += VAR_5;
}
