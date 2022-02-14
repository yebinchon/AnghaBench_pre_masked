
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amrr_node {int amn_success_threshold; scalar_t__ amn_recovery; scalar_t__ amn_success; scalar_t__ amn_tx_failure_cnt; scalar_t__ amn_tx_try3_cnt; scalar_t__ amn_tx_try2_cnt; scalar_t__ amn_tx_try1_cnt; scalar_t__ amn_tx_try0_cnt; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct amrr_node *VAR_1)
{
 VAR_1->amn_tx_try0_cnt = 0;
 VAR_1->amn_tx_try1_cnt = 0;
 VAR_1->amn_tx_try2_cnt = 0;
 VAR_1->amn_tx_try3_cnt = 0;
 VAR_1->amn_tx_failure_cnt = 0;
   VAR_1->amn_success = 0;
   VAR_1->amn_recovery = 0;
   VAR_1->amn_success_threshold = VAR_0;
}
