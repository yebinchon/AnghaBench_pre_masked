
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct ixl_pf *VAR_3, u32 *VAR_4)
{
 struct i40e_hw *VAR_5 = &VAR_3->hw;

 *VAR_4 &= ~(VAR_0);
 *VAR_4 &= ~(VAR_1);

 FUNC_3(VAR_5, FUNC_0(VAR_5), *VAR_4);
 FUNC_2(VAR_5);


 FUNC_1(VAR_2);
}
