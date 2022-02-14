
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_add_update_pv_completion {int pv_seid; } ;
struct i40e_aqc_add_update_pv {void* connected_seid; void* uplink_seid; void* command_flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,int *) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_2, u16 VAR_3,
           u16 VAR_4, u16 VAR_5,
           u16 *VAR_6)
{
 struct i40e_aq_desc VAR_7;
 struct i40e_aqc_add_update_pv *VAR_8 =
  (struct i40e_aqc_add_update_pv *)&VAR_7.params.raw;
 struct i40e_aqc_add_update_pv_completion *VAR_9 =
  (struct i40e_aqc_add_update_pv_completion *)&VAR_7.params.raw;
 enum i40e_status_code VAR_10;

 if (VAR_5 == 0)
  return VAR_0;

 FUNC_3(&VAR_7, VAR_1);
 VAR_8->command_flags = FUNC_0(VAR_3);
 VAR_8->uplink_seid = FUNC_0(VAR_4);
 VAR_8->connected_seid = FUNC_0(VAR_5);

 VAR_10 = FUNC_2(VAR_2, &VAR_7, ((void*)0), 0, ((void*)0));
 if (!VAR_10 && VAR_6)
  *VAR_6 = FUNC_1(VAR_9->pv_seid);

 return VAR_10;
}
