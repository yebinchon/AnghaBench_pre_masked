
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_nvm_update {int length; int offset; int module_pointer; int command_flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_4 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_3, u8 VAR_4,
    u32 VAR_5, u16 VAR_6, bool VAR_7,
    struct i40e_asq_cmd_details *VAR_8)
{
 struct i40e_aq_desc VAR_9;
 struct i40e_aqc_nvm_update *VAR_10 =
  (struct i40e_aqc_nvm_update *)&VAR_9.params.raw;
 enum i40e_status_code VAR_11;

 FUNC_2("i40e_aq_erase_nvm");


 if (VAR_5 & 0xFF000000) {
  VAR_11 = VAR_1;
  goto i40e_aq_erase_nvm_exit;
 }

 FUNC_4(&VAR_9, VAR_2);


 if (VAR_7)
  VAR_10->command_flags |= VAR_0;
 VAR_10->module_pointer = VAR_4;
 VAR_10->offset = FUNC_1(VAR_5);
 VAR_10->length = FUNC_0(VAR_6);

 VAR_11 = FUNC_3(VAR_3, &VAR_9, ((void*)0), 0, VAR_8);

i40e_aq_erase_nvm_exit:
 return VAR_11;
}
