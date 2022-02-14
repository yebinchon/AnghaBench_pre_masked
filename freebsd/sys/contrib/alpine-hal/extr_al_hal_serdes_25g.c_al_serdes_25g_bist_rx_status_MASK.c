
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct al_serdes_grp_obj {int dummy; } ;
typedef enum al_serdes_reg_page { ____Placeholder_al_serdes_reg_page } al_serdes_reg_page ;
typedef enum al_serdes_lane { ____Placeholder_al_serdes_lane } al_serdes_lane ;
typedef int al_bool ;


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
 int FUNC_0 (struct al_serdes_grp_obj*,int,int ,int ,int ,int*) ;

__attribute__((used)) static void FUNC_1(
 struct al_serdes_grp_obj *VAR_14,
 enum al_serdes_lane VAR_15,
 al_bool *VAR_16,
 al_bool *VAR_17,
 uint32_t *VAR_18)
{
 uint8_t VAR_19;
 uint8_t VAR_20;
 uint8_t VAR_21;
 uint8_t VAR_22;

 FUNC_0(
  VAR_14,
  (enum al_serdes_reg_page)VAR_15,
  VAR_11,
  VAR_12,
  VAR_13,
  &VAR_19);

 if (VAR_19 != 3) {
  *VAR_16 = VAR_0;
  return;
 }

 *VAR_16 = VAR_1;
 *VAR_17 = VAR_0;

 FUNC_0(
  VAR_14,
  (enum al_serdes_reg_page)VAR_15,
  VAR_2,
  VAR_3,
  VAR_4,
  &VAR_20);

 FUNC_0(
  VAR_14,
  (enum al_serdes_reg_page)VAR_15,
  VAR_5,
  VAR_6,
  VAR_7,
  &VAR_21);

 FUNC_0(
  VAR_14,
  (enum al_serdes_reg_page)VAR_15,
  VAR_8,
  VAR_9,
  VAR_10,
  &VAR_22);

 *VAR_18 = (VAR_20 + (VAR_21 << 8) + (VAR_22 << 16));
}
