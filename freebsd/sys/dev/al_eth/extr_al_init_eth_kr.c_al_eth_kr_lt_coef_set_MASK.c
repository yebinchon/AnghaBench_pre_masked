
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_kr_coef_up_data {int c_minus; int c_plus; int c_zero; } ;
typedef enum al_eth_kr_coef { ____Placeholder_al_eth_kr_coef } al_eth_kr_coef ;
typedef enum al_eth_kr_cl72_coef_op { ____Placeholder_al_eth_kr_cl72_coef_op } al_eth_kr_cl72_coef_op ;






__attribute__((used)) static void
FUNC_0(struct al_eth_kr_coef_up_data *VAR_0,
    enum al_eth_kr_coef VAR_1, enum al_eth_kr_cl72_coef_op VAR_2)
{

 switch (VAR_1) {
 case 130:
  VAR_0->c_minus = VAR_2;
  break;
 case 129:
  VAR_0->c_plus = VAR_2;
  break;
 case 128:
  VAR_0->c_zero = VAR_2;
  break;
 }
}
