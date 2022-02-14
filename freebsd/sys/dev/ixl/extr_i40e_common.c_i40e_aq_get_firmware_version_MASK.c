
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_get_version {int api_minor; int api_major; int fw_build; int fw_minor; int fw_major; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_2,
    u16 *VAR_3, u16 *VAR_4,
    u32 *VAR_5,
    u16 *VAR_6, u16 *VAR_7,
    struct i40e_asq_cmd_details *VAR_8)
{
 struct i40e_aq_desc VAR_9;
 struct i40e_aqc_get_version *VAR_10 =
  (struct i40e_aqc_get_version *)&VAR_9.params.raw;
 enum i40e_status_code VAR_11;

 FUNC_3(&VAR_9, VAR_1);

 VAR_11 = FUNC_2(VAR_2, &VAR_9, ((void*)0), 0, VAR_8);

 if (VAR_11 == VAR_0) {
  if (VAR_3 != ((void*)0))
   *VAR_3 = FUNC_0(VAR_10->fw_major);
  if (VAR_4 != ((void*)0))
   *VAR_4 = FUNC_0(VAR_10->fw_minor);
  if (VAR_5 != ((void*)0))
   *VAR_5 = FUNC_1(VAR_10->fw_build);
  if (VAR_6 != ((void*)0))
   *VAR_6 = FUNC_0(VAR_10->api_major);
  if (VAR_7 != ((void*)0))
   *VAR_7 = FUNC_0(VAR_10->api_minor);


  if (VAR_6 && VAR_7 &&
      VAR_3 && VAR_4 &&
      ((*VAR_6 == 1) && (*VAR_7 == 1)) &&
      (((*VAR_3 == 4) && (*VAR_4 >= 2)) ||
       (*VAR_3 > 4)))
   *VAR_7 = 2;
 }

 return VAR_11;
}
