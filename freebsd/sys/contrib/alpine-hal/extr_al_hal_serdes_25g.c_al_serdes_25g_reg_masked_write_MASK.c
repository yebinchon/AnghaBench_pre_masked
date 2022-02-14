
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct al_serdes_grp_obj {int dummy; } ;
typedef enum al_serdes_reg_page { ____Placeholder_al_serdes_reg_page } al_serdes_reg_page ;


 int FUNC_0 (struct al_serdes_grp_obj*,int,int ,int ,int*) ;
 int FUNC_1 (struct al_serdes_grp_obj*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(
 struct al_serdes_grp_obj *VAR_0,
 enum al_serdes_reg_page VAR_1,
 uint16_t VAR_2,
 uint8_t VAR_3,
 uint8_t VAR_4,
 uint8_t VAR_5)
{
 uint8_t VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_0, VAR_1, 0, VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6 &= (~VAR_3);
 VAR_6 |= (VAR_5 << VAR_4);
 return FUNC_1(VAR_0, VAR_1, 0, VAR_2, VAR_6);
}
