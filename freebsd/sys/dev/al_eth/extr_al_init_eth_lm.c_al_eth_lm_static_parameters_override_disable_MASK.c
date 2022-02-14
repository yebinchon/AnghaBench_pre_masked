
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_lm_context {void* serdes_tx_params_valid; } ;
typedef scalar_t__ boolean_t ;


 void* VAR_0 ;

int
FUNC_0(struct al_eth_lm_context *VAR_1,
    boolean_t VAR_2, boolean_t VAR_3)
{

 if (VAR_2 != 0)
  VAR_1->serdes_tx_params_valid = VAR_0;
 if (VAR_3 != 0)
  VAR_1->serdes_tx_params_valid = VAR_0;

 return (0);
}
