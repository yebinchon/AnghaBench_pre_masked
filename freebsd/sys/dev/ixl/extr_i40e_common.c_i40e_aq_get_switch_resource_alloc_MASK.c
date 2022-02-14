
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_switch_resource_alloc_element_resp {int dummy; } ;
struct i40e_aqc_get_switch_resource_alloc {int num_entries; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,struct i40e_aqc_switch_resource_alloc_element_resp*,int,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_4,
   u8 *VAR_5,
   struct i40e_aqc_switch_resource_alloc_element_resp *VAR_6,
   u16 VAR_7,
   struct i40e_asq_cmd_details *VAR_8)
{
 struct i40e_aq_desc VAR_9;
 struct i40e_aqc_get_switch_resource_alloc *VAR_10 =
  (struct i40e_aqc_get_switch_resource_alloc *)&VAR_9.params.raw;
 enum i40e_status_code VAR_11;
 u16 VAR_12 = VAR_7 * sizeof(*VAR_6);

 FUNC_2(&VAR_9,
     VAR_3);

 VAR_9.flags |= FUNC_0((u16)VAR_0);
 if (VAR_12 > VAR_2)
  VAR_9.flags |= FUNC_0((u16)VAR_1);

 VAR_11 = FUNC_1(VAR_4, &VAR_9, VAR_6, VAR_12, VAR_8);

 if (!VAR_11 && VAR_5)
  *VAR_5 = VAR_10->num_entries;

 return VAR_11;
}
