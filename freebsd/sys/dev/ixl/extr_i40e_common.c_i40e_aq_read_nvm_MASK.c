
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
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct i40e_hw*,struct i40e_aq_desc*,void*,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_4 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_6, u8 VAR_7,
    u32 VAR_8, u16 VAR_9, void *VAR_10,
    bool VAR_11,
    struct i40e_asq_cmd_details *VAR_12)
{
 struct i40e_aq_desc VAR_13;
 struct i40e_aqc_nvm_update *VAR_14 =
  (struct i40e_aqc_nvm_update *)&VAR_13.params.raw;
 enum i40e_status_code VAR_15;

 FUNC_2("i40e_aq_read_nvm");


 if (VAR_8 & 0xFF000000) {
  VAR_15 = VAR_4;
  goto i40e_aq_read_nvm_exit;
 }

 FUNC_4(&VAR_13, VAR_5);


 if (VAR_11)
  VAR_14->command_flags |= VAR_3;
 VAR_14->module_pointer = VAR_7;
 VAR_14->offset = FUNC_1(VAR_8);
 VAR_14->length = FUNC_0(VAR_9);

 VAR_13.flags |= FUNC_0((u16)VAR_0);
 if (VAR_9 > VAR_2)
  VAR_13.flags |= FUNC_0((u16)VAR_1);

 VAR_15 = FUNC_3(VAR_6, &VAR_13, VAR_10, VAR_9, VAR_12);

i40e_aq_read_nvm_exit:
 return VAR_15;
}
