
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ath_softc {int dummy; } ;
struct ath_node {int dummy; } ;
struct amrr_node {int amn_tx_try0; int amn_tx_rate0; int amn_tx_rate0sp; int amn_tx_rix0; } ;


 struct amrr_node* FUNC_0 (struct ath_node*) ;

void
FUNC_1(struct ath_softc *VAR_0, struct ath_node *VAR_1,
 int VAR_2, size_t VAR_3,
 u_int8_t *VAR_4, int *VAR_5, u_int8_t *VAR_6)
{
 struct amrr_node *VAR_7 = FUNC_0(VAR_1);

 *VAR_4 = VAR_7->amn_tx_rix0;
 *VAR_5 = VAR_7->amn_tx_try0;
 if (VAR_2)
  *VAR_6 = VAR_7->amn_tx_rate0sp;
 else
  *VAR_6 = VAR_7->amn_tx_rate0;
}
