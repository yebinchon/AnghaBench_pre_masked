
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_ns_proxy_data {int dummy; } ;
struct TYPE_3__ {void* addr_low; void* addr_high; } ;
struct TYPE_4__ {TYPE_1__ external; } ;
struct i40e_aq_desc {int datalen; TYPE_2__ params; int flags; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct i40e_hw*,struct i40e_aq_desc*,struct i40e_aqc_ns_proxy_data*,int,struct i40e_asq_cmd_details*) ;
 int FUNC_5 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_4,
   struct i40e_aqc_ns_proxy_data *VAR_5,
   struct i40e_asq_cmd_details *VAR_6)
{
 struct i40e_aq_desc VAR_7;
 enum i40e_status_code VAR_8;

 if (!VAR_5)
  return VAR_2;

 FUNC_5(&VAR_7,
    VAR_3);

 VAR_7.flags |= FUNC_0((u16)VAR_0);
 VAR_7.flags |= FUNC_0((u16)VAR_1);
 VAR_7.params.external.addr_high =
  FUNC_1(FUNC_2((u64)VAR_5));
 VAR_7.params.external.addr_low =
  FUNC_1(FUNC_3((u64)VAR_5));
 VAR_7.datalen = FUNC_0(sizeof(struct i40e_aqc_ns_proxy_data));

 VAR_8 = FUNC_4(VAR_4, &VAR_7, VAR_5,
           sizeof(struct i40e_aqc_ns_proxy_data),
           VAR_6);

 return VAR_8;
}
