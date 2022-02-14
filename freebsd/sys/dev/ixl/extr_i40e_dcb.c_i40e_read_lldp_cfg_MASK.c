
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_lldp_variables {int dummy; } ;
struct i40e_hw {int dummy; } ;
typedef int mem ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


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
 int FUNC_0 (struct i40e_hw*,struct i40e_lldp_variables*,int ,int ) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int ,int,int*,int ,int *) ;
 int FUNC_3 (struct i40e_hw*) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_10,
      struct i40e_lldp_variables *VAR_11)
{
 enum i40e_status_code VAR_12 = VAR_8;
 u32 VAR_13;

 if (!VAR_11)
  return VAR_1;

 VAR_12 = FUNC_1(VAR_10, VAR_3);
 if (VAR_12 != VAR_8)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_10, VAR_6, 0, sizeof(VAR_13),
          &VAR_13, VAR_9, ((void*)0));
 FUNC_3(VAR_10);
 if (VAR_12 != VAR_8)
  return VAR_12;





 if (VAR_13 & VAR_7) {

  VAR_12 = FUNC_0(VAR_10, VAR_11, VAR_4,
       VAR_5);
 } else {

  VAR_12 = FUNC_0(VAR_10, VAR_11, VAR_0,
       VAR_2);
 }

 return VAR_12;
}
