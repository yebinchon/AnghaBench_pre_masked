
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_serdes_grp_obj {int dummy; } ;
typedef enum al_serdes_reg_page { ____Placeholder_al_serdes_reg_page } al_serdes_reg_page ;


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
 int FUNC_0 (struct al_serdes_grp_obj*,int,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(
 struct al_serdes_grp_obj *VAR_10)
{
 int VAR_11;

 FUNC_0(
  VAR_10,
  VAR_1,
  VAR_2,
  VAR_3,
  VAR_4,
  VAR_4);

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_0(
   VAR_10,
   (enum al_serdes_reg_page)VAR_11,
   VAR_2,
   VAR_5,
   VAR_6 |
   VAR_7,
   VAR_6 |
   VAR_7);

  FUNC_0(
   VAR_10,
   (enum al_serdes_reg_page)VAR_11,
   VAR_2,
   VAR_9,
   VAR_8,
   VAR_8);
 }
}
