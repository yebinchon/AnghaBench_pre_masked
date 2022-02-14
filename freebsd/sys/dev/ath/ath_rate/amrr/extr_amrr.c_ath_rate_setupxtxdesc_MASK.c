
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ath_softc {int sc_ah; } ;
struct ath_node {int dummy; } ;
struct ath_desc {int dummy; } ;
struct amrr_node {int amn_tx_try3; int amn_tx_rate3sp; int amn_tx_try2; int amn_tx_rate2sp; int amn_tx_try1; int amn_tx_rate1sp; } ;


 struct amrr_node* FUNC_0 (struct ath_node*) ;
 int FUNC_1 (int ,struct ath_desc*,int ,int ,int ,int ,int ,int ) ;

void
FUNC_2(struct ath_softc *VAR_0, struct ath_node *VAR_1,
 struct ath_desc *VAR_2, int VAR_3, u_int8_t VAR_4)
{
 struct amrr_node *VAR_5 = FUNC_0(VAR_1);

 FUNC_1(VAR_0->sc_ah, VAR_2
  , VAR_5->amn_tx_rate1sp, VAR_5->amn_tx_try1
  , VAR_5->amn_tx_rate2sp, VAR_5->amn_tx_try2
  , VAR_5->amn_tx_rate3sp, VAR_5->amn_tx_try3
 );
}
