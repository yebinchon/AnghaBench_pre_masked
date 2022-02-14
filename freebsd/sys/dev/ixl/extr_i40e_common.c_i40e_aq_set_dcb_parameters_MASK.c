
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int api_maj_ver; int api_min_ver; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ mac; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_set_dcb_parameters {int command; int valid_flags; } ;
struct TYPE_6__ {int raw; } ;
struct i40e_aq_desc {TYPE_3__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_1 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code
FUNC_2(struct i40e_hw *VAR_5, bool VAR_6,
      struct i40e_asq_cmd_details *VAR_7)
{
 struct i40e_aq_desc VAR_8;
 struct i40e_aqc_set_dcb_parameters *VAR_9 =
  (struct i40e_aqc_set_dcb_parameters *)&VAR_8.params.raw;
 enum i40e_status_code VAR_10;

 if ((VAR_5->mac.type != VAR_3) ||
     ((VAR_5->aq.api_maj_ver < 1) ||
      ((VAR_5->aq.api_maj_ver == 1) && (VAR_5->aq.api_min_ver < 6))))
  return VAR_2;

 FUNC_1(&VAR_8,
       VAR_4);

 if (VAR_6) {
  VAR_9->valid_flags = VAR_1;
  VAR_9->command = VAR_0;
 }
 VAR_10 = FUNC_0(VAR_5, &VAR_8, ((void*)0), 0, VAR_7);

 return VAR_10;
}
