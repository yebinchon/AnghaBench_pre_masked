
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,struct i40e_asq_cmd_details*,int *,scalar_t__*,scalar_t__*) ;

enum i40e_status_code FUNC_1(struct i40e_hw *VAR_3, u16 VAR_4,
   u16 VAR_5, u16 VAR_6, u16 VAR_7, __le16 *VAR_8,
   struct i40e_asq_cmd_details *VAR_9,
   u16 *VAR_10, u16 *VAR_11)
{

 if (VAR_5 == VAR_0) {




  if (VAR_7 == 0 || !VAR_8)
   return VAR_1;
 }

 return FUNC_0(VAR_3, VAR_2, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, ((void*)0), VAR_10, VAR_11);
}
