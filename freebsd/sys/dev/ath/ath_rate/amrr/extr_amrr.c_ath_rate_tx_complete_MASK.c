
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_tx_status {int ts_shortretry; int ts_longretry; } ;
struct ath_softc {int dummy; } ;
struct ath_rc_series {int dummy; } ;
struct ath_node {int an_node; } ;
struct amrr_node {scalar_t__ amn_interval; scalar_t__ amn_ticks; int amn_tx_failure_cnt; int amn_tx_try3_cnt; int amn_tx_try2_cnt; int amn_tx_try1_cnt; int amn_tx_try0_cnt; } ;


 struct amrr_node* FUNC_0 (struct ath_node*) ;
 int FUNC_1 (struct ath_softc*,int *) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(struct ath_softc *VAR_1, struct ath_node *VAR_2,
 const struct ath_rc_series *VAR_3, const struct ath_tx_status *VAR_4,
 int VAR_5, int VAR_6, int VAR_7)
{
 struct amrr_node *VAR_8 = FUNC_0(VAR_2);
 int VAR_9 = VAR_4->ts_shortretry;
 int VAR_10 = VAR_4->ts_longretry;
 int VAR_11 = VAR_9 + VAR_10;

 VAR_8->amn_tx_try0_cnt++;
 if (VAR_11 == 1) {
  VAR_8->amn_tx_try1_cnt++;
 } else if (VAR_11 == 2) {
  VAR_8->amn_tx_try1_cnt++;
  VAR_8->amn_tx_try2_cnt++;
 } else if (VAR_11 == 3) {
  VAR_8->amn_tx_try1_cnt++;
  VAR_8->amn_tx_try2_cnt++;
  VAR_8->amn_tx_try3_cnt++;
 } else if (VAR_11 > 3) {
  VAR_8->amn_tx_try1_cnt++;
  VAR_8->amn_tx_try2_cnt++;
  VAR_8->amn_tx_try3_cnt++;
  VAR_8->amn_tx_failure_cnt++;
 }
 if (VAR_8->amn_interval != 0 &&
     VAR_0 - VAR_8->amn_ticks > VAR_8->amn_interval) {
  FUNC_1(VAR_1, &VAR_2->an_node);
  VAR_8->amn_ticks = VAR_0;
 }
}
