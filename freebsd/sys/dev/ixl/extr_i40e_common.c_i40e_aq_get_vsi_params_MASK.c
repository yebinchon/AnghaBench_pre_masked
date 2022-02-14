
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct i40e_vsi_context {void* vsis_unallocated; void* vsis_allocated; void* vsi_number; void* seid; int info; } ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_add_get_update_vsi_completion {int vsi_free; int vsi_used; int vsi_number; int seid; } ;
struct i40e_aqc_add_get_update_vsi {int uplink_seid; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int,int *) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_3,
    struct i40e_vsi_context *VAR_4,
    struct i40e_asq_cmd_details *VAR_5)
{
 struct i40e_aq_desc VAR_6;
 struct i40e_aqc_add_get_update_vsi *VAR_7 =
  (struct i40e_aqc_add_get_update_vsi *)&VAR_6.params.raw;
 struct i40e_aqc_add_get_update_vsi_completion *VAR_8 =
  (struct i40e_aqc_add_get_update_vsi_completion *)
  &VAR_6.params.raw;
 enum i40e_status_code VAR_9;

 FUNC_3(&VAR_6,
       VAR_2);

 VAR_7->uplink_seid = FUNC_0(VAR_4->seid);

 VAR_6.flags |= FUNC_0((u16)VAR_0);

 VAR_9 = FUNC_2(VAR_3, &VAR_6, &VAR_4->info,
        sizeof(VAR_4->info), ((void*)0));

 if (VAR_9 != VAR_1)
  goto aq_get_vsi_params_exit;

 VAR_4->seid = FUNC_1(VAR_8->seid);
 VAR_4->vsi_number = FUNC_1(VAR_8->vsi_number);
 VAR_4->vsis_allocated = FUNC_1(VAR_8->vsi_used);
 VAR_4->vsis_unallocated = FUNC_1(VAR_8->vsi_free);

aq_get_vsi_params_exit:
 return VAR_9;
}
