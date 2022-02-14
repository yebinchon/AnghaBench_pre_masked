
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_serdes_grp_obj {int dummy; } ;
typedef enum al_serdes_reg_page { ____Placeholder_al_serdes_reg_page } al_serdes_reg_page ;
typedef enum al_serdes_pcie_rate { ____Placeholder_al_serdes_pcie_rate } al_serdes_pcie_rate ;
typedef enum al_serdes_lane { ____Placeholder_al_serdes_lane } al_serdes_lane ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct al_serdes_grp_obj*,int,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(
 struct al_serdes_grp_obj *VAR_4,
 enum al_serdes_lane VAR_5,
 enum al_serdes_pcie_rate VAR_6)
{
 FUNC_0(
  VAR_4,
  (enum al_serdes_reg_page)VAR_5,
  VAR_0,
  VAR_2,
  VAR_1,
  VAR_6 << VAR_3);
}
