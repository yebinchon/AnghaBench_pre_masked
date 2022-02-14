
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_3__ {scalar_t__ asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_request_resource {int timeout; int resource_number; void* access_type; void* resource_id; } ;
struct TYPE_4__ {int raw; } ;
struct i40e_aq_desc {TYPE_2__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_aq_resources_ids { ____Placeholder_i40e_aq_resources_ids } i40e_aq_resources_ids ;
typedef enum i40e_aq_resource_access_type { ____Placeholder_i40e_aq_resource_access_type } i40e_aq_resource_access_type ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_5 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_3,
    enum i40e_aq_resources_ids VAR_4,
    enum i40e_aq_resource_access_type VAR_5,
    u8 VAR_6, u64 *VAR_7,
    struct i40e_asq_cmd_details *VAR_8)
{
 struct i40e_aq_desc VAR_9;
 struct i40e_aqc_request_resource *VAR_10 =
  (struct i40e_aqc_request_resource *)&VAR_9.params.raw;
 enum i40e_status_code VAR_11;

 FUNC_2("i40e_aq_request_resource");

 FUNC_5(&VAR_9, VAR_2);

 VAR_10->resource_id = FUNC_0(VAR_4);
 VAR_10->access_type = FUNC_0(VAR_5);
 VAR_10->resource_number = FUNC_1(VAR_6);

 VAR_11 = FUNC_4(VAR_3, &VAR_9, ((void*)0), 0, VAR_8);






 if (VAR_11 == VAR_1 || VAR_3->aq.asq_last_status == VAR_0)
  *VAR_7 = FUNC_3(VAR_10->timeout);

 return VAR_11;
}
