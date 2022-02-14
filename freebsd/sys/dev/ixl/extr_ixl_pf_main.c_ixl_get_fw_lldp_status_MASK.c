
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_hw {int port; } ;
struct ixl_pf {int state; int dev; struct i40e_hw hw; } ;
struct i40e_lldp_variables {int adminstatus; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct i40e_hw*,struct i40e_lldp_variables*) ;

int
FUNC_4(struct ixl_pf *VAR_2)
{
 enum i40e_status_code VAR_3 = VAR_0;
 struct i40e_lldp_variables VAR_4;
 struct i40e_hw *VAR_5 = &VAR_2->hw;
 u8 VAR_6 = 0;

 VAR_3 = FUNC_3(VAR_5, &VAR_4);
 if (VAR_3)
  return VAR_3;


 VAR_6 = VAR_4.adminstatus >> (VAR_5->port * 4);
 VAR_6 &= 0xf;


 if (!VAR_6) {
  FUNC_2(VAR_2->dev, "FW LLDP agent is disabled for this PF.\n");
  FUNC_1(&VAR_2->state, VAR_1);
 } else
  FUNC_0(&VAR_2->state, VAR_1);

 return (0);
}
