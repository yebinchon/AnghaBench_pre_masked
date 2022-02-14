
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_add_veb_completion {int veb_seid; } ;
struct i40e_aqc_add_veb {void* veb_flags; int enable_tcs; void* downlink_seid; void* uplink_seid; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_6, u16 VAR_7,
    u16 VAR_8, u8 VAR_9,
    bool VAR_10, u16 *VAR_11,
    bool VAR_12,
    struct i40e_asq_cmd_details *VAR_13)
{
 struct i40e_aq_desc VAR_14;
 struct i40e_aqc_add_veb *VAR_15 =
  (struct i40e_aqc_add_veb *)&VAR_14.params.raw;
 struct i40e_aqc_add_veb_completion *VAR_16 =
  (struct i40e_aqc_add_veb_completion *)&VAR_14.params.raw;
 enum i40e_status_code VAR_17;
 u16 VAR_18 = 0;


 if (!!VAR_7 != !!VAR_8)
  return VAR_4;

 FUNC_3(&VAR_14, VAR_5);

 VAR_15->uplink_seid = FUNC_0(VAR_7);
 VAR_15->downlink_seid = FUNC_0(VAR_8);
 VAR_15->enable_tcs = VAR_9;
 if (!VAR_7)
  VAR_18 |= VAR_1;
 if (VAR_10)
  VAR_18 |= VAR_3;
 else
  VAR_18 |= VAR_2;


 if (!VAR_12)
  VAR_18 |= VAR_0;

 VAR_15->veb_flags = FUNC_0(VAR_18);

 VAR_17 = FUNC_2(VAR_6, &VAR_14, ((void*)0), 0, VAR_13);

 if (!VAR_17 && VAR_11)
  *VAR_11 = FUNC_1(VAR_16->veb_seid);

 return VAR_17;
}
