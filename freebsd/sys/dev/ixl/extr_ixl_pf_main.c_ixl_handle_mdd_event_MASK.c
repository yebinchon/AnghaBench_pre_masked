
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int state; struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct ixl_pf*) ;
 int FUNC_3 (struct ixl_pf*) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int ) ;

void
FUNC_6(struct ixl_pf *VAR_3)
{
 struct i40e_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5;





 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 FUNC_0(&VAR_3->state, VAR_2);


 VAR_5 = FUNC_4(VAR_4, VAR_0);
 VAR_5 |= VAR_1;
 FUNC_5(VAR_4, VAR_0, VAR_5);
 FUNC_1(VAR_4);
}
