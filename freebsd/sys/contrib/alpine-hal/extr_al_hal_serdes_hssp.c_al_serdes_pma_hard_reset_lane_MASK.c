
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_serdes_grp_obj {int dummy; } ;
typedef enum al_serdes_reg_page { ____Placeholder_al_serdes_reg_page } al_serdes_reg_page ;
typedef enum al_serdes_lane { ____Placeholder_al_serdes_lane } al_serdes_lane ;
typedef scalar_t__ al_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct al_serdes_grp_obj*,int) ;
 int FUNC_1 (struct al_serdes_grp_obj*,int) ;
 int FUNC_2 (struct al_serdes_grp_obj*,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 struct al_serdes_grp_obj *VAR_8,
 enum al_serdes_lane VAR_9,
 al_bool VAR_10)
{
 if (VAR_10)
  FUNC_0(VAR_8, VAR_9);


 FUNC_2(
  VAR_8,
  (enum al_serdes_reg_page)VAR_9,
  VAR_0,
  VAR_2,
  VAR_1,
  VAR_3);


 FUNC_2(
  VAR_8,
  (enum al_serdes_reg_page)VAR_9,
  VAR_0,
  VAR_5,
  VAR_4,
  VAR_10 ?
  VAR_6 :
  VAR_7);

 if (!VAR_10)
  FUNC_1(VAR_8, VAR_9);
}
