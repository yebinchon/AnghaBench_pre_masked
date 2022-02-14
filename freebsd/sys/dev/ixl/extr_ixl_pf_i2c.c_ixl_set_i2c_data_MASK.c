
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i40e_hw*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ixl_pf*,int ,char*,int) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (struct ixl_pf*,int *) ;
 int FUNC_6 (struct i40e_hw*,int ) ;
 int FUNC_7 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static s32
FUNC_8(struct ixl_pf *VAR_8, u32 *VAR_9, bool VAR_10)
{
 struct i40e_hw *VAR_11 = &VAR_8->hw;
 s32 VAR_12 = VAR_3;

 FUNC_0("ixl_set_i2c_data");

 if (VAR_10)
  *VAR_9 |= VAR_2;
 else
  *VAR_9 &= ~(VAR_2);
 *VAR_9 &= ~(VAR_1);

 FUNC_7(VAR_11, FUNC_1(VAR_11), *VAR_9);
 FUNC_4(VAR_11);


 FUNC_2(VAR_6 + VAR_5 + VAR_7);


 *VAR_9 = FUNC_6(VAR_11, FUNC_1(VAR_11));
 if (VAR_10 != FUNC_5(VAR_8, VAR_9)) {
  VAR_12 = VAR_0;
  FUNC_3(VAR_8, VAR_4, "Error - I2C data was not set to %X.\n", VAR_10);
 }

 return VAR_12;
}
