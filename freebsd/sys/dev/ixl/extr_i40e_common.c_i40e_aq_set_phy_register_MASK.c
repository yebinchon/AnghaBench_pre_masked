
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_phy_register_access {void* reg_value; void* reg_address; void* dev_addres; void* phy_interface; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_1,
    u8 VAR_2, u8 VAR_3,
    u32 VAR_4, u32 VAR_5,
    struct i40e_asq_cmd_details *VAR_6)
{
 struct i40e_aq_desc VAR_7;
 struct i40e_aqc_phy_register_access *VAR_8 =
  (struct i40e_aqc_phy_register_access *)&VAR_7.params.raw;
 enum i40e_status_code VAR_9;

 FUNC_2(&VAR_7,
       VAR_0);

 VAR_8->phy_interface = VAR_2;
 VAR_8->dev_addres = VAR_3;
 VAR_8->reg_address = FUNC_0(VAR_4);
 VAR_8->reg_value = FUNC_0(VAR_5);

 VAR_9 = FUNC_1(VAR_1, &VAR_7, ((void*)0), 0, VAR_6);

 return VAR_9;
}
