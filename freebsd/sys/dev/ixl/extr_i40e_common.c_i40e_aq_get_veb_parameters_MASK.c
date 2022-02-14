
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_get_veb_parameters_completion {int veb_flags; int vebs_free; int vebs_used; int statistic_index; int switch_id; int seid; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_5,
    u16 VAR_6, u16 *VAR_7,
    bool *VAR_8, u16 *VAR_9,
    u16 *VAR_10, u16 *VAR_11,
    struct i40e_asq_cmd_details *VAR_12)
{
 struct i40e_aq_desc VAR_13;
 struct i40e_aqc_get_veb_parameters_completion *VAR_14 =
  (struct i40e_aqc_get_veb_parameters_completion *)
  &VAR_13.params.raw;
 enum i40e_status_code VAR_15;

 if (VAR_6 == 0)
  return VAR_2;

 FUNC_3(&VAR_13,
       VAR_4);
 VAR_14->seid = FUNC_0(VAR_6);

 VAR_15 = FUNC_2(VAR_5, &VAR_13, ((void*)0), 0, VAR_12);
 if (VAR_15)
  goto get_veb_exit;

 if (VAR_7)
  *VAR_7 = FUNC_1(VAR_14->switch_id);
 if (VAR_9)
  *VAR_9 = FUNC_1(VAR_14->statistic_index);
 if (VAR_10)
  *VAR_10 = FUNC_1(VAR_14->vebs_used);
 if (VAR_11)
  *VAR_11 = FUNC_1(VAR_14->vebs_free);
 if (VAR_8) {
  u16 VAR_16 = FUNC_1(VAR_14->veb_flags);

  if (VAR_16 & VAR_1)
   *VAR_8 = VAR_3;
  else
   *VAR_8 = VAR_0;
 }

get_veb_exit:
 return VAR_15;
}
