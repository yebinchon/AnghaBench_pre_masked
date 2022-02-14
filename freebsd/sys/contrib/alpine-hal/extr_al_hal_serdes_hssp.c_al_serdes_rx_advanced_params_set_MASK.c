
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct al_serdes_grp_obj {int dummy; } ;
struct al_serdes_adv_rx_params {int high_freq_agc_boost; int precal_code_sel; int low_freq_agc_gain; int dfe_fourth_tap_ctrl; int dfe_third_tap_ctrl; int dfe_secound_tap_ctrl; int dfe_first_tap_ctrl; int dfe_gain; int dfe_3db_freq; int dcgain; int override; } ;
typedef enum al_serdes_reg_page { ____Placeholder_al_serdes_reg_page } al_serdes_reg_page ;
typedef enum al_serdes_lane { ____Placeholder_al_serdes_lane } al_serdes_lane ;


 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (struct al_serdes_grp_obj*,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct al_serdes_grp_obj*,int,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct al_serdes_grp_obj *VAR_28,
          enum al_serdes_lane VAR_29,
          void *VAR_30)
{
 struct al_serdes_adv_rx_params *VAR_31 = VAR_30;
 uint8_t VAR_32 = 0;

 if (!VAR_31->override) {
  FUNC_1(VAR_28,
   (enum al_serdes_reg_page)VAR_29,
   VAR_0,
   VAR_2,
   VAR_1,
   VAR_1);

  return;
 }

 FUNC_1(VAR_28,
   (enum al_serdes_reg_page)VAR_29,
   VAR_0,
   VAR_2,
   VAR_1,
   0);

 FUNC_0(VAR_32,
    VAR_3,
    VAR_4,
    VAR_31->dcgain);

 FUNC_0(VAR_32,
    VAR_5,
    VAR_6,
    VAR_31->dfe_3db_freq);

 FUNC_2(VAR_28,
    (enum al_serdes_reg_page)VAR_29,
    VAR_0,
    VAR_7,
    VAR_32);

 VAR_32 = 0;
 FUNC_0(VAR_32,
    VAR_8,
    VAR_9,
    VAR_31->dfe_gain);

 FUNC_0(VAR_32,
    VAR_10,
    VAR_11,
    VAR_31->dfe_first_tap_ctrl);

 FUNC_2(VAR_28,
    (enum al_serdes_reg_page)VAR_29,
    VAR_0,
    VAR_12,
    VAR_32);

 VAR_32 = 0;
 FUNC_0(VAR_32,
    VAR_13,
    VAR_14,
    VAR_31->dfe_secound_tap_ctrl);

 FUNC_0(VAR_32,
    VAR_15,
    VAR_16,
    VAR_31->dfe_third_tap_ctrl);

 FUNC_2(VAR_28,
    (enum al_serdes_reg_page)VAR_29,
    VAR_0,
    VAR_17,
    VAR_32);

 VAR_32 = 0;
 FUNC_0(VAR_32,
    VAR_18,
    VAR_19,
    VAR_31->dfe_fourth_tap_ctrl);

 FUNC_0(VAR_32,
    VAR_20,
    VAR_21,
    VAR_31->low_freq_agc_gain);

 FUNC_2(VAR_28,
    (enum al_serdes_reg_page)VAR_29,
    VAR_0,
    VAR_22,
    VAR_32);

 VAR_32 = 0;
 FUNC_0(VAR_32,
    VAR_25,
    VAR_26,
    VAR_31->precal_code_sel);

 FUNC_0(VAR_32,
    VAR_23,
    VAR_24,
    VAR_31->high_freq_agc_boost);

 FUNC_2(VAR_28,
    (enum al_serdes_reg_page)VAR_29,
    VAR_0,
    VAR_27,
    VAR_32);
}
