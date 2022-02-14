
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
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
 int FUNC_0 (struct al_serdes_grp_obj*,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(
 struct al_serdes_grp_obj *VAR_8,
 enum al_serdes_lane VAR_9,
 al_bool *VAR_10,
 al_bool *VAR_11,
 uint32_t *VAR_12)
{
 uint8_t VAR_13;
 uint16_t VAR_14;
 uint16_t VAR_15;

 VAR_13 = FUNC_0(
  VAR_8,
  (enum al_serdes_reg_page)VAR_9,
  VAR_1,
  VAR_7);

 VAR_14 = FUNC_0(
  VAR_8,
  (enum al_serdes_reg_page)VAR_9,
  VAR_1,
  VAR_4);

 VAR_15 = FUNC_0(
  VAR_8,
  (enum al_serdes_reg_page)VAR_9,
  VAR_1,
  VAR_3);

 *VAR_10 =
  (VAR_13 & VAR_6) ?
  VAR_2 : VAR_0;

 *VAR_11 =
  (VAR_13 & VAR_5) ?
  VAR_2 : VAR_0;

 *VAR_12 = (VAR_14 << 8) + VAR_15;
}
