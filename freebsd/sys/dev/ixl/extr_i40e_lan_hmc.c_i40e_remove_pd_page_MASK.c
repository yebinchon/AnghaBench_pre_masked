
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_hmc_info {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i40e_hmc_info*,int ) ;
 int FUNC_1 (struct i40e_hw*,struct i40e_hmc_info*,int ,int ) ;

__attribute__((used)) static enum i40e_status_code FUNC_2(struct i40e_hw *VAR_2,
       struct i40e_hmc_info *VAR_3,
       u32 VAR_4)
{
 enum i40e_status_code VAR_5 = VAR_0;

 if (FUNC_0(VAR_3, VAR_4) == VAR_0)
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1);

 return VAR_5;
}
