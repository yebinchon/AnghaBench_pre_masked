
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_alternate_write_done {int cmd_flags; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,int *) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_3,
  u8 VAR_4, bool *VAR_5)
{
 struct i40e_aq_desc VAR_6;
 struct i40e_aqc_alternate_write_done *VAR_7 =
  (struct i40e_aqc_alternate_write_done *)&VAR_6.params.raw;
 enum i40e_status_code VAR_8;

 if (VAR_5 == ((void*)0))
  return VAR_1;

 FUNC_3(&VAR_6,
       VAR_2);

 VAR_7->cmd_flags = FUNC_0(VAR_4);

 VAR_8 = FUNC_2(VAR_3, &VAR_6, ((void*)0), 0, ((void*)0));
 if (!VAR_8 && VAR_5)
  *VAR_5 = ((FUNC_1(VAR_7->cmd_flags) &
     VAR_0) != 0);

 return VAR_8;
}
