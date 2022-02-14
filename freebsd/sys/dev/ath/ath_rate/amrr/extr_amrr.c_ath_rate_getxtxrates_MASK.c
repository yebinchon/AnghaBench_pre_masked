
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ath_softc {int dummy; } ;
struct ath_rc_series {int tries; int rix; scalar_t__ flags; } ;
struct ath_node {int dummy; } ;
struct amrr_node {int amn_tx_try3; int amn_tx_try2; int amn_tx_try1; int amn_tx_try0; int amn_tx_rate3; int amn_tx_rate2; int amn_tx_rate1; int amn_tx_rate0; } ;


 struct amrr_node* FUNC_0 (struct ath_node*) ;

void
FUNC_1(struct ath_softc *VAR_0, struct ath_node *VAR_1,
    uint8_t VAR_2, struct ath_rc_series *VAR_3)
{
 struct amrr_node *VAR_4 = FUNC_0(VAR_1);

 VAR_3[0].flags = VAR_3[1].flags = VAR_3[2].flags = VAR_3[3].flags = 0;

 VAR_3[0].rix = VAR_4->amn_tx_rate0;
 VAR_3[1].rix = VAR_4->amn_tx_rate1;
 VAR_3[2].rix = VAR_4->amn_tx_rate2;
 VAR_3[3].rix = VAR_4->amn_tx_rate3;

 VAR_3[0].tries = VAR_4->amn_tx_try0;
 VAR_3[1].tries = VAR_4->amn_tx_try1;
 VAR_3[2].tries = VAR_4->amn_tx_try2;
 VAR_3[3].tries = VAR_4->amn_tx_try3;
}
