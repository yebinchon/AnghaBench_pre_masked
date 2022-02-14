
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_pfc_ignore {int tc_bitmap; int command_flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_1 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_2, u8 VAR_3,
    bool VAR_4, u8 *VAR_5,
    struct i40e_asq_cmd_details *VAR_6)
{
 struct i40e_aq_desc VAR_7;
 struct i40e_aqc_pfc_ignore *VAR_8 =
  (struct i40e_aqc_pfc_ignore *)&VAR_7.params.raw;
 enum i40e_status_code VAR_9;

 FUNC_1(&VAR_7, VAR_1);

 if (VAR_4)
  VAR_8->command_flags = VAR_0;

 VAR_8->tc_bitmap = VAR_3;

 VAR_9 = FUNC_0(VAR_2, &VAR_7, ((void*)0), 0, VAR_6);

 if (!VAR_9) {
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_8->tc_bitmap;
 }

 return VAR_9;
}
