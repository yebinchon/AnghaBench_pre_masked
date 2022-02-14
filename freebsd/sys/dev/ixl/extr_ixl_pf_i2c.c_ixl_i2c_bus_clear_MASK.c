
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct i40e_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ixl_pf*) ;
 int FUNC_4 (struct ixl_pf*) ;
 int FUNC_5 (struct ixl_pf*,int*) ;
 int FUNC_6 (struct ixl_pf*,int*) ;
 int FUNC_7 (struct ixl_pf*,int*,int) ;
 int FUNC_8 (struct i40e_hw*,int ) ;

__attribute__((used)) static void
FUNC_9(struct ixl_pf *VAR_2)
{
 struct i40e_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4 = FUNC_8(VAR_3, FUNC_1(VAR_3));
 u32 VAR_5;

 FUNC_0("ixl_i2c_bus_clear");

 FUNC_3(VAR_2);

 FUNC_7(VAR_2, &VAR_4, 1);

 for (VAR_5 = 0; VAR_5 < 9; VAR_5++) {
  FUNC_6(VAR_2, &VAR_4);


  FUNC_2(VAR_0);

  FUNC_5(VAR_2, &VAR_4);


  FUNC_2(VAR_1);
 }

 FUNC_3(VAR_2);


 FUNC_4(VAR_2);
}
