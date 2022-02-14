
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct al_serdes_adv_rx_params {int high_freq_agc_boost; int low_freq_agc_gain; int dfe_fourth_tap_ctrl; int dfe_third_tap_ctrl; int dfe_secound_tap_ctrl; int dfe_first_tap_ctrl; int dfe_gain; int dfe_3db_freq; int dcgain; int override; scalar_t__ precal_code_sel; } ;
struct al_eth_lm_context {int lane; TYPE_1__* serdes_obj; } ;
struct TYPE_9__ {int (* rx_equalization ) (TYPE_1__*,int ) ;int (* rx_advanced_params_set ) (TYPE_1__*,int ,struct al_serdes_adv_rx_params*) ;int (* rx_advanced_params_get ) (TYPE_1__*,int ,struct al_serdes_adv_rx_params*) ;int (* dcgain_set ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*,int ,struct al_serdes_adv_rx_params*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,struct al_serdes_adv_rx_params*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,struct al_serdes_adv_rx_params*) ;
 int FUNC_9 (TYPE_1__*,int ,struct al_serdes_adv_rx_params*) ;

__attribute__((used)) static int
FUNC_10(struct al_eth_lm_context *VAR_4)
{
 struct al_serdes_adv_rx_params VAR_5;
 int VAR_6;
 int VAR_7 = -1;
 int VAR_8;
 int VAR_9 = -1;
 int VAR_10 = -1;

 VAR_5.override = VAR_2;
 VAR_4->serdes_obj->rx_advanced_params_set(VAR_4->serdes_obj,
       VAR_4->lane, &VAR_5);

 FUNC_1("score | dcgain | dfe3db | dfegain | tap1 | tap2 | tap3 | "
     "tap4 | low freq | high freq\n");

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4->serdes_obj->dcgain_set(
     VAR_4->serdes_obj,
     VAR_6);

  VAR_10 = VAR_4->serdes_obj->rx_equalization(
     VAR_4->serdes_obj,
     VAR_4->lane);

  if (VAR_10 < 0) {
   FUNC_0("serdes rx equalization failed on error\n");
   return (VAR_10);
  }

  if (VAR_10 > VAR_9) {
   VAR_9 = VAR_10;
   VAR_7 = VAR_6;
  }

  VAR_4->serdes_obj->rx_advanced_params_get(
     VAR_4->serdes_obj,
     VAR_4->lane,
     &VAR_5);

  FUNC_1("%6d|%8x|%8x|%9x|%6x|%6x|%6x|%6x|%10x|%10x|\n",
      VAR_10, VAR_5.dcgain, VAR_5.dfe_3db_freq,
      VAR_5.dfe_gain, VAR_5.dfe_first_tap_ctrl,
      VAR_5.dfe_secound_tap_ctrl, VAR_5.dfe_third_tap_ctrl,
      VAR_5.dfe_fourth_tap_ctrl, VAR_5.low_freq_agc_gain,
      VAR_5.high_freq_agc_boost);
 }

 VAR_4->serdes_obj->dcgain_set(
     VAR_4->serdes_obj,
     VAR_7);

 VAR_9 = -1;
 for(VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_10 = VAR_4->serdes_obj->rx_equalization(
      VAR_4->serdes_obj,
      VAR_4->lane);

  if (VAR_10 < 0) {
   FUNC_0("serdes rx equalization failed on error\n");
   return (VAR_10);
  }

  if (VAR_10 > VAR_9) {
   VAR_9 = VAR_10;
   VAR_4->serdes_obj->rx_advanced_params_get(
      VAR_4->serdes_obj,
      VAR_4->lane,
      &VAR_5);
  }
 }

 VAR_5.precal_code_sel = 0;
 VAR_5.override = VAR_3;
 VAR_4->serdes_obj->rx_advanced_params_set(
     VAR_4->serdes_obj,
     VAR_4->lane,
     &VAR_5);

 FUNC_1("-------------------- best dcgain %d ------------------------------------\n", VAR_7);
 FUNC_1("%6d|%8x|%8x|%9x|%6x|%6x|%6x|%6x|%10x|%10x|\n",
     VAR_9, VAR_5.dcgain, VAR_5.dfe_3db_freq,
     VAR_5.dfe_gain, VAR_5.dfe_first_tap_ctrl,
     VAR_5.dfe_secound_tap_ctrl, VAR_5.dfe_third_tap_ctrl,
     VAR_5.dfe_fourth_tap_ctrl, VAR_5.low_freq_agc_gain,
     VAR_5.high_freq_agc_boost);

 return (0);
}
