
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct al_serdes_grp_obj {int dummy; } ;
typedef enum al_serdes_reg_page { ____Placeholder_al_serdes_reg_page } al_serdes_reg_page ;
typedef enum al_serdes_lane { ____Placeholder_al_serdes_lane } al_serdes_lane ;
typedef int al_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct al_serdes_grp_obj*,int,int ,int ,int ,int *) ;

__attribute__((used)) static al_bool FUNC_1(
  struct al_serdes_grp_obj *VAR_3,
  enum al_serdes_lane VAR_4)
{
 uint8_t VAR_5;

 FUNC_0(VAR_3,
    (enum al_serdes_reg_page)VAR_4,
    VAR_0,
    VAR_1,
    VAR_2,
    &VAR_5);

 return !!VAR_5;

}
