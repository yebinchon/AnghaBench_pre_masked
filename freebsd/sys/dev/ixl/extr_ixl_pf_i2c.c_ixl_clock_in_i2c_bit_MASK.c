
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct ixl_pf*,int *) ;
 int FUNC_5 (struct ixl_pf*,int *) ;
 int FUNC_6 (struct ixl_pf*,int *) ;
 int FUNC_7 (struct i40e_hw*,int ) ;
 int FUNC_8 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static s32
FUNC_9(struct ixl_pf *VAR_4, bool *VAR_5)
{
 struct i40e_hw *VAR_6 = &VAR_4->hw;
 u32 VAR_7 = FUNC_7(VAR_6, FUNC_1(VAR_6));

 FUNC_0("ixl_clock_in_i2c_bit");

 FUNC_6(VAR_4, &VAR_7);


 FUNC_2(VAR_2);

 VAR_7 = FUNC_7(VAR_6, FUNC_1(VAR_6));
 VAR_7 |= VAR_0;
 FUNC_8(VAR_6, FUNC_1(VAR_6), VAR_7);
 FUNC_3(VAR_6);

 VAR_7 = FUNC_7(VAR_6, FUNC_1(VAR_6));
 *VAR_5 = FUNC_4(VAR_4, &VAR_7);

 FUNC_5(VAR_4, &VAR_7);


 FUNC_2(VAR_3);

 return VAR_1;
}
