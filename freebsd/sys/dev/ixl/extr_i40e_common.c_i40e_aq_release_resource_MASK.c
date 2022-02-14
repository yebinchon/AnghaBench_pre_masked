
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_request_resource {int resource_number; int resource_id; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_aq_resources_ids { ____Placeholder_i40e_aq_resources_ids } i40e_aq_resources_ids ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_4 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_1,
    enum i40e_aq_resources_ids VAR_2,
    u8 VAR_3,
    struct i40e_asq_cmd_details *VAR_4)
{
 struct i40e_aq_desc VAR_5;
 struct i40e_aqc_request_resource *VAR_6 =
  (struct i40e_aqc_request_resource *)&VAR_5.params.raw;
 enum i40e_status_code VAR_7;

 FUNC_2("i40e_aq_release_resource");

 FUNC_4(&VAR_5, VAR_0);

 VAR_6->resource_id = FUNC_0(VAR_2);
 VAR_6->resource_number = FUNC_1(VAR_3);

 VAR_7 = FUNC_3(VAR_1, &VAR_5, ((void*)0), 0, VAR_4);

 return VAR_7;
}
