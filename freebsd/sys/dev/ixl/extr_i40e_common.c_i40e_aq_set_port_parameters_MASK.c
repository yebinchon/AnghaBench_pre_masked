
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_set_port_parameters {void* command_flags; void* bad_frame_vsi; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_4,
    u16 VAR_5, bool VAR_6,
    bool VAR_7, bool VAR_8,
    struct i40e_asq_cmd_details *VAR_9)
{
 struct i40e_aqc_set_port_parameters *VAR_10;
 enum i40e_status_code VAR_11;
 struct i40e_aq_desc VAR_12;
 u16 VAR_13 = 0;

 VAR_10 = (struct i40e_aqc_set_port_parameters *)&VAR_12.params.raw;

 FUNC_2(&VAR_12,
       VAR_3);

 VAR_10->bad_frame_vsi = FUNC_0(VAR_5);
 if (VAR_6)
  VAR_13 |= VAR_2;
 if (VAR_7)
  VAR_13 |= VAR_1;
 if (VAR_8)
  VAR_13 |= VAR_0;
 VAR_10->command_flags = FUNC_0(VAR_13);

 VAR_11 = FUNC_1(VAR_4, &VAR_12, ((void*)0), 0, VAR_9);

 return VAR_11;
}
