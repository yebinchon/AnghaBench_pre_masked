
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
struct iavf_sc {struct i40e_hw hw; } ;
typedef int if_ctx_t ;


 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct iavf_sc*,scalar_t__*) ;
 int FUNC_2 (struct iavf_sc*) ;
 int FUNC_3 (int ) ;
 struct iavf_sc* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(if_ctx_t VAR_0)
{
 struct iavf_sc *VAR_1 = FUNC_4(VAR_0);
 struct i40e_hw *VAR_2 = &VAR_1->hw;
 u16 VAR_3;

 FUNC_1(VAR_1, &VAR_3);
 FUNC_2(VAR_1);





 if (VAR_3 > 0)
  FUNC_3(VAR_0);
 else
  FUNC_0(VAR_2);
}
