
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_set_vsi_promiscuous_modes {void* vlan_tag; void* seid; void* valid_flags; void* promiscuous_flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_3,
    u16 VAR_4, bool VAR_5, u16 VAR_6,
    struct i40e_asq_cmd_details *VAR_7)
{
 struct i40e_aq_desc VAR_8;
 struct i40e_aqc_set_vsi_promiscuous_modes *VAR_9 =
  (struct i40e_aqc_set_vsi_promiscuous_modes *)&VAR_8.params.raw;
 enum i40e_status_code VAR_10;
 u16 VAR_11 = 0;

 FUNC_2(&VAR_8,
     VAR_2);

 if (VAR_5)
  VAR_11 |= VAR_0;

 VAR_9->promiscuous_flags = FUNC_0(VAR_11);
 VAR_9->valid_flags = FUNC_0(VAR_0);
 VAR_9->seid = FUNC_0(VAR_4);
 VAR_9->vlan_tag = FUNC_0(VAR_6 | VAR_1);

 VAR_10 = FUNC_1(VAR_3, &VAR_8, ((void*)0), 0, VAR_7);

 return VAR_10;
}
