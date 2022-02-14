
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i40e_lldp_variables {int adminstatus; } ;
struct TYPE_2__ {int dcb; } ;
struct i40e_hw {int port; int dcbx_status; TYPE_1__ func_caps; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*,int ,int *) ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*,int*) ;
 int FUNC_3 (struct i40e_hw*,struct i40e_lldp_variables*) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_2)
{
 enum i40e_status_code VAR_3 = VAR_0;
 struct i40e_lldp_variables VAR_4;
 u8 VAR_5 = 0;

 if (!VAR_2->func_caps.dcb)
  return VAR_3;


 VAR_3 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_3)
  return VAR_3;


 VAR_5 = VAR_4.adminstatus >> (VAR_2->port * 4);
 VAR_5 &= 0xF;


 if (!VAR_5) {
  VAR_2->dcbx_status = 132;
  return VAR_3;
 }


 VAR_3 = FUNC_2(VAR_2, &VAR_2->dcbx_status);
 if (VAR_3)
  return VAR_3;


 switch (VAR_2->dcbx_status) {
 case 131:
 case 130:

  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   return VAR_3;
  break;
 case 132:
  return VAR_3;
 case 128:
 case 129:
 default:
  break;
 }


 VAR_3 = FUNC_0(VAR_2, VAR_1, ((void*)0));
 if (VAR_3)
  return VAR_3;

 return VAR_3;
}
