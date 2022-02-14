
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ieee80211_rateset {int* rs_rates; } ;
struct ieee80211_node {struct ieee80211_rateset ni_rates; int ni_htrates; struct ieee80211_amrr_node* ni_rctls; } ;
struct ieee80211_amrr_node {size_t amn_rix; int amn_ticks; int amn_txcnt; int amn_success; int amn_success_threshold; int amn_recovery; int amn_retrycnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct sbuf*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_node *VAR_1, struct sbuf *VAR_2)
{
 int VAR_3;
 struct ieee80211_amrr_node *VAR_4 = VAR_1->ni_rctls;
 struct ieee80211_rateset *VAR_5;



 if (!VAR_4)
  return;


 if (FUNC_0(VAR_1)) {
  VAR_5 = (struct ieee80211_rateset *) &VAR_1->ni_htrates;
  VAR_3 = VAR_5->rs_rates[VAR_4->amn_rix] & VAR_0;
  FUNC_1(VAR_2, "rate: MCS %d\n", VAR_3);
 } else {
  VAR_5 = &VAR_1->ni_rates;
  VAR_3 = VAR_5->rs_rates[VAR_4->amn_rix] & VAR_0;
  FUNC_1(VAR_2, "rate: %d Mbit\n", VAR_3 / 2);
 }

 FUNC_1(VAR_2, "ticks: %d\n", VAR_4->amn_ticks);
 FUNC_1(VAR_2, "txcnt: %u\n", VAR_4->amn_txcnt);
 FUNC_1(VAR_2, "success: %u\n", VAR_4->amn_success);
 FUNC_1(VAR_2, "success_threshold: %u\n", VAR_4->amn_success_threshold);
 FUNC_1(VAR_2, "recovery: %u\n", VAR_4->amn_recovery);
 FUNC_1(VAR_2, "retry_cnt: %u\n", VAR_4->amn_retrycnt);
}
