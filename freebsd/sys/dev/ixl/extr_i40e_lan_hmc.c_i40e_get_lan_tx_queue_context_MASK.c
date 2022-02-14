
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_hmc_obj_txq {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (struct i40e_hw*,int **,int ,int ) ;
 int VAR_1 ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_2,
          u16 VAR_3,
          struct i40e_hmc_obj_txq *VAR_4)
{
 enum i40e_status_code VAR_5;
 u8 *VAR_6;

 VAR_5 = FUNC_1(VAR_2, &VAR_6, VAR_0, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(VAR_6,
        VAR_1, (u8 *)VAR_4);
}
