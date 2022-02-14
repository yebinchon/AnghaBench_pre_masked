
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_serdes_grp_obj {int dummy; } ;
struct al_serdes_adv_tx_params {int total_driver_units; int c_plus_1; int c_minus_1; } ;
typedef enum al_serdes_reg_page { ____Placeholder_al_serdes_reg_page } al_serdes_reg_page ;
typedef enum al_serdes_lane { ____Placeholder_al_serdes_lane } al_serdes_lane ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct al_serdes_grp_obj*,int,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct al_serdes_grp_obj *VAR_9,
  enum al_serdes_lane VAR_10,
  void *VAR_11)
{
 struct al_serdes_adv_tx_params *VAR_12 = VAR_11;

 FUNC_0(VAR_9,
     (enum al_serdes_reg_page)VAR_10,
     VAR_3,
     VAR_4,
     VAR_5,
     &VAR_12->c_minus_1);

 FUNC_0(VAR_9,
     (enum al_serdes_reg_page)VAR_10,
     VAR_0,
     VAR_1,
     VAR_2,
     &VAR_12->c_plus_1);

 FUNC_0(VAR_9,
     (enum al_serdes_reg_page)VAR_10,
     VAR_6,
     VAR_7,
     VAR_8,
     &VAR_12->total_driver_units);
}
