
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct al_serdes_adv_tx_params {int dummy; } ;
struct al_serdes_adv_rx_params {int dummy; } ;
struct al_eth_lm_context {int lane; TYPE_1__* serdes_obj; struct al_serdes_adv_rx_params rx_params_override; scalar_t__ serdes_rx_params_valid; struct al_serdes_adv_tx_params tx_params_override; scalar_t__ serdes_tx_params_valid; } ;
struct TYPE_3__ {int (* rx_advanced_params_get ) (TYPE_1__*,int ,struct al_serdes_adv_rx_params*) ;int (* tx_advanced_params_get ) (TYPE_1__*,int ,struct al_serdes_adv_tx_params*) ;} ;


 int FUNC_0 (TYPE_1__*,int ,struct al_serdes_adv_tx_params*) ;
 int FUNC_1 (TYPE_1__*,int ,struct al_serdes_adv_rx_params*) ;

int
FUNC_2(struct al_eth_lm_context *VAR_0,
    struct al_serdes_adv_tx_params *VAR_1,
    struct al_serdes_adv_rx_params *VAR_2)
{

 if (VAR_1 != ((void*)0)) {
  if (VAR_0->serdes_tx_params_valid)
   *VAR_1 = VAR_0->tx_params_override;
  else
   VAR_0->serdes_obj->tx_advanced_params_get(
       VAR_0->serdes_obj,
       VAR_0->lane,
       VAR_1);
 }

 if (VAR_2 != ((void*)0)) {
  if (VAR_0->serdes_rx_params_valid)
   *VAR_2 = VAR_0->rx_params_override;
  else
   VAR_0->serdes_obj->rx_advanced_params_get(
       VAR_0->serdes_obj,
       VAR_0->lane,
       VAR_2);
 }

 return (0);
}
