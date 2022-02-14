
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_2__ mac; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_nvm_update {int command_flags; int length; int offset; scalar_t__ module_pointer; } ;
struct TYPE_3__ {int raw; } ;
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct i40e_hw*,struct i40e_aq_desc*,void*,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_4 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_13, u8 VAR_14,
    u32 VAR_15, u16 VAR_16, void *VAR_17,
    bool VAR_18, u8 VAR_19,
    struct i40e_asq_cmd_details *VAR_20)
{
 struct i40e_aq_desc VAR_21;
 struct i40e_aqc_nvm_update *VAR_22 =
  (struct i40e_aqc_nvm_update *)&VAR_21.params.raw;
 enum i40e_status_code VAR_23;

 FUNC_2("i40e_aq_update_nvm");


 if (VAR_15 & 0xFF000000) {
  VAR_23 = VAR_8;
  goto i40e_aq_update_nvm_exit;
 }

 FUNC_4(&VAR_21, VAR_12);


 if (VAR_18)
  VAR_22->command_flags |= VAR_4;
 if (VAR_13->mac.type == VAR_9) {
  if (VAR_19 == VAR_11)
   VAR_22->command_flags |=
    (VAR_6 <<
     VAR_7);
  else if (VAR_19 == VAR_10)
   VAR_22->command_flags |=
    (VAR_5 <<
     VAR_7);
 }
 VAR_22->module_pointer = VAR_14;
 VAR_22->offset = FUNC_1(VAR_15);
 VAR_22->length = FUNC_0(VAR_16);

 VAR_21.flags |= FUNC_0((u16)(VAR_0 | VAR_2));
 if (VAR_16 > VAR_3)
  VAR_21.flags |= FUNC_0((u16)VAR_1);

 VAR_23 = FUNC_3(VAR_13, &VAR_21, VAR_17, VAR_16, VAR_20);

i40e_aq_update_nvm_exit:
 return VAR_23;
}
