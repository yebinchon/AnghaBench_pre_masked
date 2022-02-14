
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aq_set_mac_config {int params; int max_frame_size; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_3,
    u16 VAR_4,
    bool VAR_5, u16 VAR_6,
    struct i40e_asq_cmd_details *VAR_7)
{
 struct i40e_aq_desc VAR_8;
 struct i40e_aq_set_mac_config *VAR_9 =
  (struct i40e_aq_set_mac_config *)&VAR_8.params.raw;
 enum i40e_status_code VAR_10;

 if (VAR_4 == 0)
  return VAR_1;

 FUNC_2(&VAR_8,
       VAR_2);

 VAR_9->max_frame_size = FUNC_0(VAR_4);
 VAR_9->params = ((u8)VAR_6 & 0x0F) << 3;
 if (VAR_5)
  VAR_9->params |= VAR_0;

 VAR_10 = FUNC_1(VAR_3, &VAR_8, ((void*)0), 0, VAR_7);

 return VAR_10;
}
