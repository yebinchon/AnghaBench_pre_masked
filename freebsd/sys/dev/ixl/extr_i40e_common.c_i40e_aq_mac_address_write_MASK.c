
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
struct i40e_aqc_mac_address_write {int mac_sal; void* mac_sah; void* command_flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_1,
        u16 VAR_2, u8 *VAR_3,
        struct i40e_asq_cmd_details *VAR_4)
{
 struct i40e_aq_desc VAR_5;
 struct i40e_aqc_mac_address_write *VAR_6 =
  (struct i40e_aqc_mac_address_write *)&VAR_5.params.raw;
 enum i40e_status_code VAR_7;

 FUNC_3(&VAR_5,
       VAR_0);
 VAR_6->command_flags = FUNC_0(VAR_2);
 VAR_6->mac_sah = FUNC_0((u16)VAR_3[0] << 8 | VAR_3[1]);
 VAR_6->mac_sal = FUNC_1(((u32)VAR_3[2] << 24) |
     ((u32)VAR_3[3] << 16) |
     ((u32)VAR_3[4] << 8) |
     VAR_3[5]);

 VAR_7 = FUNC_2(VAR_1, &VAR_5, ((void*)0), 0, VAR_4);

 return VAR_7;
}
