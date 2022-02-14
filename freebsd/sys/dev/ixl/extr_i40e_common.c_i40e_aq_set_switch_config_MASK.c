
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int flags; int second_tag; int first_tag; int switch_tag; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_set_switch_config {void* second_tag; void* first_tag; void* switch_tag; int mode; void* valid_flags; void* flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_2,
    u16 VAR_3, u16 VAR_4, u8 VAR_5,
    struct i40e_asq_cmd_details *VAR_6)
{
 struct i40e_aq_desc VAR_7;
 struct i40e_aqc_set_switch_config *VAR_8 =
  (struct i40e_aqc_set_switch_config *)&VAR_7.params.raw;
 enum i40e_status_code VAR_9;

 FUNC_2(&VAR_7,
       VAR_1);
 VAR_8->flags = FUNC_0(VAR_3);
 VAR_8->valid_flags = FUNC_0(VAR_4);
 VAR_8->mode = VAR_5;
 if (VAR_2->flags & VAR_0) {
  VAR_8->switch_tag = FUNC_0(VAR_2->switch_tag);
  VAR_8->first_tag = FUNC_0(VAR_2->first_tag);
  VAR_8->second_tag = FUNC_0(VAR_2->second_tag);
 }
 VAR_9 = FUNC_1(VAR_2, &VAR_7, ((void*)0), 0, VAR_6);

 return VAR_9;
}
