
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aq_desc {int flags; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,void*,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_3,
    void *VAR_4, u16 VAR_5,
    struct i40e_asq_cmd_details *VAR_6)
{
 struct i40e_aq_desc VAR_7;
 enum i40e_status_code VAR_8;

 if (VAR_5 == 0 || !VAR_4)
  return VAR_1;

 FUNC_2(&VAR_7, VAR_2);

 VAR_7.flags |= FUNC_0((u16)VAR_0);
 VAR_8 = FUNC_1(VAR_3, &VAR_7, (void *)VAR_4, VAR_5,
           VAR_6);

 return VAR_8;
}
