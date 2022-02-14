
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct al_serdes_grp_obj {int dummy; } ;
struct al_serdes_adv_tx_params {int slew_rate; int c_minus_1; int c_plus_2; int c_plus_1; int total_driver_units; int amp; int override; } ;
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
 int FUNC_1 (struct al_serdes_grp_obj*,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct al_serdes_grp_obj*,int,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct al_serdes_grp_obj *VAR_18,
          enum al_serdes_lane VAR_19,
          void *VAR_20)
{
 uint8_t VAR_21 = 0;
 struct al_serdes_adv_tx_params *VAR_22 = VAR_20;

 if (!VAR_22->override) {
  FUNC_1(VAR_18,
   (enum al_serdes_reg_page)VAR_19,
   VAR_0,
   VAR_2,
   VAR_1,
   VAR_1);

  return;
 }

 FUNC_1(VAR_18,
   (enum al_serdes_reg_page)VAR_19,
   VAR_0,
   VAR_2,
   VAR_1,
   0);

 FUNC_0(VAR_21,
    VAR_3,
    VAR_4,
    VAR_22->amp);

 FUNC_0(VAR_21,
    VAR_5,
    VAR_6,
    VAR_22->total_driver_units);

 FUNC_2(VAR_18,
    (enum al_serdes_reg_page)VAR_19,
    VAR_0,
    VAR_7,
    VAR_21);

 VAR_21 = 0;
 FUNC_0(VAR_21,
    VAR_8,
    VAR_9,
    VAR_22->c_plus_1);

 FUNC_0(VAR_21,
    VAR_10,
    VAR_11,
    VAR_22->c_plus_2);

 FUNC_2(VAR_18,
    (enum al_serdes_reg_page)VAR_19,
    VAR_0,
    VAR_12,
    VAR_21);

 VAR_21 = 0;
 FUNC_0(VAR_21,
    VAR_13,
    VAR_14,
    VAR_22->c_minus_1);

 FUNC_0(VAR_21,
    VAR_16,
    VAR_17,
    VAR_22->slew_rate);

 FUNC_2(VAR_18,
    (enum al_serdes_reg_page)VAR_19,
    VAR_0,
    VAR_15,
    VAR_21);

}
