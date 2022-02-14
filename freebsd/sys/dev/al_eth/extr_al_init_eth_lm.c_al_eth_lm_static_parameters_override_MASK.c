
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_serdes_adv_tx_params {int dummy; } ;
struct al_serdes_adv_rx_params {int dummy; } ;
struct al_eth_lm_context {int tx_param_dirty; int rx_param_dirty; void* serdes_rx_params_valid; struct al_serdes_adv_rx_params rx_params_override; void* serdes_tx_params_valid; struct al_serdes_adv_tx_params tx_params_override; } ;


 void* VAR_0 ;

int
FUNC_0(struct al_eth_lm_context *VAR_1,
    struct al_serdes_adv_tx_params *VAR_2,
    struct al_serdes_adv_rx_params *VAR_3)
{

 if (VAR_2 != ((void*)0)) {
  VAR_1->tx_params_override = *VAR_2;
  VAR_1->tx_param_dirty = 1;
  VAR_1->serdes_tx_params_valid = VAR_0;
 }

 if (VAR_3 != ((void*)0)) {
  VAR_1->rx_params_override = *VAR_3;
  VAR_1->rx_param_dirty = 1;
  VAR_1->serdes_rx_params_valid = VAR_0;
 }

 return (0);
}
