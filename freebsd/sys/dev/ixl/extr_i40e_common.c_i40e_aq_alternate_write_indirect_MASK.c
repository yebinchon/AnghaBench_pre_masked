
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_alternate_ind_write {void* length; void* address; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (struct i40e_hw*,struct i40e_aq_desc*,void*,int ,int *) ;
 int FUNC_4 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_6,
    u32 VAR_7, u32 VAR_8, void *VAR_9)
{
 struct i40e_aq_desc VAR_10;
 struct i40e_aqc_alternate_ind_write *VAR_11 =
  (struct i40e_aqc_alternate_ind_write *)&VAR_10.params.raw;
 enum i40e_status_code VAR_12;

 if (VAR_9 == ((void*)0))
  return VAR_4;


 FUNC_4(&VAR_10,
      VAR_5);

 VAR_10.flags |= FUNC_0(VAR_2);
 VAR_10.flags |= FUNC_0(VAR_0);
 if (VAR_8 > (VAR_3/4))
  VAR_10.flags |= FUNC_0((u16)VAR_1);

 VAR_11->address = FUNC_1(VAR_7);
 VAR_11->length = FUNC_1(VAR_8);

 VAR_12 = FUNC_3(VAR_6, &VAR_10, VAR_9,
           FUNC_2(4*VAR_8), ((void*)0));

 return VAR_12;
}
