
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int rs_nrates; } ;
struct ieee80211_node {int ni_vap; TYPE_1__ ni_rates; } ;
struct ath_softc {int dummy; } ;
struct amrr_node {int amn_rix; int amn_success_threshold; int amn_success; int amn_recovery; scalar_t__ amn_tx_failure_cnt; scalar_t__ amn_tx_try3_cnt; scalar_t__ amn_tx_try2_cnt; scalar_t__ amn_tx_try1_cnt; scalar_t__ amn_tx_try0_cnt; } ;


 int FUNC_0 (struct ieee80211_node*) ;
 struct amrr_node* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,struct ieee80211_node*,char*,int,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ath_softc*,struct ieee80211_node*,int) ;
 scalar_t__ FUNC_4 (struct amrr_node*) ;
 scalar_t__ FUNC_5 (struct amrr_node*) ;
 scalar_t__ FUNC_6 (struct amrr_node*) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3, struct ieee80211_node *VAR_4)
{
 struct ath_softc *VAR_5 = VAR_3;
 struct amrr_node *VAR_6 = FUNC_1(FUNC_0 (VAR_4));
 int VAR_7;
 VAR_7 = VAR_6->amn_rix;

   FUNC_2(VAR_4->ni_vap, VAR_0, VAR_4,
     "cnt0: %d cnt1: %d cnt2: %d cnt3: %d -- threshold: %d",
     VAR_6->amn_tx_try0_cnt, VAR_6->amn_tx_try1_cnt, VAR_6->amn_tx_try2_cnt,
     VAR_6->amn_tx_try3_cnt, VAR_6->amn_success_threshold);
   if ((VAR_6->amn_tx_try1_cnt < (VAR_6->amn_tx_try0_cnt/10)) && (VAR_6->amn_tx_try0_cnt > 10)) {
  VAR_6->amn_success++;
  if (VAR_6->amn_success == VAR_6->amn_success_threshold &&
      VAR_7 + 1 < VAR_4->ni_rates.rs_nrates) {
     VAR_6->amn_recovery = 1;
     VAR_6->amn_success = 0;
     VAR_7++;
   FUNC_2(VAR_4->ni_vap, VAR_0, VAR_4,
       "increase rate to %d", VAR_7);
    } else {
   VAR_6->amn_recovery = 0;
  }
   } else if ((VAR_6->amn_tx_try1_cnt > (VAR_6->amn_tx_try0_cnt/3))) {
    VAR_6->amn_success = 0;
  if (VAR_7 > 0) {
     if (VAR_6->amn_recovery) {

      VAR_6->amn_success_threshold *= 2;
      VAR_6->amn_success_threshold = FUNC_7 (VAR_6->amn_success_threshold,
          (u_int)VAR_1);
    FUNC_2(VAR_4->ni_vap,
        VAR_0, VAR_4,
        "decrease rate recovery thr: %d",
        VAR_6->amn_success_threshold);
     } else {

     VAR_6->amn_success_threshold = VAR_2;
    FUNC_2(VAR_4->ni_vap,
        VAR_0, VAR_4,
        "decrease rate normal thr: %d",
        VAR_6->amn_success_threshold);
     }
   VAR_6->amn_recovery = 0;
     VAR_7--;
     } else {
   VAR_6->amn_recovery = 0;
  }

    }
 if ((VAR_6->amn_tx_try0_cnt > 10) || VAR_7 != VAR_6->amn_rix) {

  VAR_6->amn_tx_try0_cnt = 0;
  VAR_6->amn_tx_try1_cnt = 0;
  VAR_6->amn_tx_try2_cnt = 0;
  VAR_6->amn_tx_try3_cnt = 0;
  VAR_6->amn_tx_failure_cnt = 0;
 }
 if (VAR_7 != VAR_6->amn_rix) {
  FUNC_3(VAR_5, VAR_4, VAR_7);
 }
}
