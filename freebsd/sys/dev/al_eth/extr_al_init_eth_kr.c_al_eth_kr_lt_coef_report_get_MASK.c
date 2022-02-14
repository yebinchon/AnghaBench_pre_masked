
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_kr_status_report_data {int c_minus; int c_plus; int c_zero; } ;
typedef enum al_eth_kr_coef { ____Placeholder_al_eth_kr_coef } al_eth_kr_coef ;
typedef enum al_eth_kr_cl72_cstate { ____Placeholder_al_eth_kr_cl72_cstate } al_eth_kr_cl72_cstate ;






__attribute__((used)) static enum al_eth_kr_cl72_cstate
FUNC_0(struct al_eth_kr_status_report_data *VAR_0,
    enum al_eth_kr_coef VAR_1)
{

 switch (VAR_1) {
 case 130:
  return (VAR_0->c_minus);
 case 129:
  return (VAR_0->c_plus);
 case 128:
  return (VAR_0->c_zero);
 }

 return (0);
}
