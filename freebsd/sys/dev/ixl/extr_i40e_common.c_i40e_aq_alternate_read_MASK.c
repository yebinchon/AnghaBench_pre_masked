
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_alternate_write {int data1; int data0; void* address1; void* address0; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,int *) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_3,
    u32 VAR_4, u32 *VAR_5,
    u32 VAR_6, u32 *VAR_7)
{
 struct i40e_aq_desc VAR_8;
 struct i40e_aqc_alternate_write *VAR_9 =
  (struct i40e_aqc_alternate_write *)&VAR_8.params.raw;
 enum i40e_status_code VAR_10;

 if (VAR_5 == ((void*)0))
  return VAR_0;

 FUNC_3(&VAR_8, VAR_2);
 VAR_9->address0 = FUNC_0(VAR_4);
 VAR_9->address1 = FUNC_0(VAR_6);

 VAR_10 = FUNC_2(VAR_3, &VAR_8, ((void*)0), 0, ((void*)0));

 if (VAR_10 == VAR_1) {
  *VAR_5 = FUNC_1(VAR_9->data0);

  if (VAR_7 != ((void*)0))
   *VAR_7 = FUNC_1(VAR_9->data1);
 }

 return VAR_10;
}
