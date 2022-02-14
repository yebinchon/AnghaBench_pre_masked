
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct onoe_node {int on_tx_rate3sp; int on_tx_rate2sp; int on_tx_rate1sp; } ;
struct ath_softc {int sc_ah; } ;
struct ath_node {int dummy; } ;
struct ath_desc {int dummy; } ;


 struct onoe_node* FUNC_0 (struct ath_node*) ;
 int FUNC_1 (int ,struct ath_desc*,int ,int,int ,int,int ,int) ;

void
FUNC_2(struct ath_softc *VAR_0, struct ath_node *VAR_1,
 struct ath_desc *VAR_2, int VAR_3, u_int8_t VAR_4)
{
 struct onoe_node *VAR_5 = FUNC_0(VAR_1);

 FUNC_1(VAR_0->sc_ah, VAR_2
  , VAR_5->on_tx_rate1sp, 2
  , VAR_5->on_tx_rate2sp, 2
  , VAR_5->on_tx_rate3sp, 2
 );
}
