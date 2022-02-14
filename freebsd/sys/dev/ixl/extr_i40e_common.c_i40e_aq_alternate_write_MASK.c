
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_alternate_write {void* data1; void* data0; void* address1; void* address0; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,int *) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_1,
    u32 VAR_2, u32 VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 struct i40e_aq_desc VAR_6;
 struct i40e_aqc_alternate_write *VAR_7 =
  (struct i40e_aqc_alternate_write *)&VAR_6.params.raw;
 enum i40e_status_code VAR_8;

 FUNC_2(&VAR_6, VAR_0);
 VAR_7->address0 = FUNC_0(VAR_2);
 VAR_7->address1 = FUNC_0(VAR_4);
 VAR_7->data0 = FUNC_0(VAR_3);
 VAR_7->data1 = FUNC_0(VAR_5);

 VAR_8 = FUNC_1(VAR_1, &VAR_6, ((void*)0), 0, ((void*)0));

 return VAR_8;
}
