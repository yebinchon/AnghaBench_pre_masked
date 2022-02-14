
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct onoe_node {int on_tx_try0; int on_tx_rate3; int on_tx_rate2; int on_tx_rate1; int on_tx_rate0; } ;
struct ath_softc {int dummy; } ;
struct ath_rc_series {int tries; int rix; scalar_t__ flags; } ;
struct ath_node {int dummy; } ;


 struct onoe_node* FUNC_0 (struct ath_node*) ;

void
FUNC_1(struct ath_softc *VAR_0, struct ath_node *VAR_1,
    uint8_t VAR_2, struct ath_rc_series *VAR_3)
{
 struct onoe_node *VAR_4 = FUNC_0(VAR_1);

 VAR_3[0].flags = VAR_3[1].flags = VAR_3[2].flags = VAR_3[3].flags = 0;

 VAR_3[0].rix = VAR_4->on_tx_rate0;
 VAR_3[1].rix = VAR_4->on_tx_rate1;
 VAR_3[2].rix = VAR_4->on_tx_rate2;
 VAR_3[3].rix = VAR_4->on_tx_rate3;

 VAR_3[0].tries = VAR_4->on_tx_try0;
 VAR_3[1].tries = 2;
 VAR_3[2].tries = 2;
 VAR_3[3].tries = 2;
}
