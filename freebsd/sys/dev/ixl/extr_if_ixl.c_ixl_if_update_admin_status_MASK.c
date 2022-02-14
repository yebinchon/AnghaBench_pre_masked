
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int state; struct i40e_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct ixl_pf* FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct ixl_pf*) ;
 int FUNC_4 (struct ixl_pf*) ;
 int FUNC_5 (struct ixl_pf*,scalar_t__*) ;
 int FUNC_6 (struct ixl_pf*) ;
 int FUNC_7 (struct ixl_pf*) ;

__attribute__((used)) static void
FUNC_8(if_ctx_t VAR_2)
{
 struct ixl_pf *VAR_3 = FUNC_1(VAR_2);
 struct i40e_hw *VAR_4 = &VAR_3->hw;
 u16 VAR_5;

 if (VAR_3->state & VAR_0)
  FUNC_3(VAR_3);

 if (VAR_3->state & VAR_1)
  FUNC_4(VAR_3);

 FUNC_5(VAR_3, &VAR_5);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3);





 if (VAR_5 > 0)
  FUNC_0(VAR_2);
 else
  FUNC_2(VAR_4);
}
