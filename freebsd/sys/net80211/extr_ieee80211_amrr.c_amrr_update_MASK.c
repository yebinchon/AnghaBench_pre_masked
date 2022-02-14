
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rateset {int* rs_rates; int rs_nrates; } ;
struct ieee80211_node {int ni_vap; struct ieee80211_rateset ni_rates; int ni_htrates; } ;
struct ieee80211_amrr_node {int amn_rix; int amn_success; int amn_success_threshold; int amn_recovery; scalar_t__ amn_retrycnt; scalar_t__ amn_txcnt; } ;
struct ieee80211_amrr {int amrr_max_success_threshold; int amrr_min_success_threshold; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct ieee80211_node*,char*,int,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (struct ieee80211_amrr_node*) ;
 scalar_t__ FUNC_4 (struct ieee80211_amrr_node*) ;
 scalar_t__ FUNC_5 (struct ieee80211_amrr_node*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_amrr *VAR_2, struct ieee80211_amrr_node *VAR_3,
    struct ieee80211_node *VAR_4)
{
 int VAR_5 = VAR_3->amn_rix;
 const struct ieee80211_rateset *VAR_6 = ((void*)0);

 FUNC_1(FUNC_3(VAR_3), ("txcnt %d", VAR_3->amn_txcnt));


 if (FUNC_2(VAR_4)) {

  VAR_6 = (struct ieee80211_rateset *) &VAR_4->ni_htrates;
 } else {
  VAR_6 = &VAR_4->ni_rates;
 }



 FUNC_0(VAR_4->ni_vap, VAR_0, VAR_4,
     "AMRR: current rate %d, txcnt=%d, retrycnt=%d",
     VAR_6->rs_rates[VAR_5] & VAR_1,
     VAR_3->amn_txcnt,
     VAR_3->amn_retrycnt);
 if (FUNC_5(VAR_3)) {
  VAR_3->amn_success++;
  if (VAR_3->amn_success >= VAR_3->amn_success_threshold &&
      VAR_5 + 1 < VAR_6->rs_nrates) {
   VAR_3->amn_recovery = 1;
   VAR_3->amn_success = 0;
   VAR_5++;


   FUNC_0(VAR_4->ni_vap, VAR_0, VAR_4,
       "AMRR increasing rate %d (txcnt=%d retrycnt=%d)",
       VAR_6->rs_rates[VAR_5] & VAR_1,
       VAR_3->amn_txcnt, VAR_3->amn_retrycnt);
  } else {
   VAR_3->amn_recovery = 0;
  }
 } else if (FUNC_4(VAR_3)) {
  VAR_3->amn_success = 0;
  if (VAR_5 > 0) {
   if (VAR_3->amn_recovery) {
    VAR_3->amn_success_threshold *= 2;
    if (VAR_3->amn_success_threshold >
        VAR_2->amrr_max_success_threshold)
     VAR_3->amn_success_threshold =
         VAR_2->amrr_max_success_threshold;
   } else {
    VAR_3->amn_success_threshold =
        VAR_2->amrr_min_success_threshold;
   }
   VAR_5--;


   FUNC_0(VAR_4->ni_vap, VAR_0, VAR_4,
       "AMRR decreasing rate %d (txcnt=%d retrycnt=%d)",
       VAR_6->rs_rates[VAR_5] & VAR_1,
       VAR_3->amn_txcnt, VAR_3->amn_retrycnt);
  }
  VAR_3->amn_recovery = 0;
 }


 VAR_3->amn_txcnt = 0;
 VAR_3->amn_retrycnt = 0;

 return VAR_5;
}
