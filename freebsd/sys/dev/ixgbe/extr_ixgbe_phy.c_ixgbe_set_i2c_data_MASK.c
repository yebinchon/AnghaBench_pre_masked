
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int) ;
 int FUNC_8 (struct ixgbe_hw*,int*) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static s32 FUNC_10(struct ixgbe_hw *VAR_6, u32 *VAR_7, bool VAR_8)
{
 u32 VAR_9 = FUNC_3(VAR_6);
 s32 VAR_10 = VAR_5;

 FUNC_0("ixgbe_set_i2c_data");

 if (VAR_8)
  *VAR_7 |= FUNC_4(VAR_6);
 else
  *VAR_7 &= ~(FUNC_4(VAR_6));
 *VAR_7 &= ~VAR_9;

 FUNC_7(VAR_6, FUNC_2(VAR_6), *VAR_7);
 FUNC_6(VAR_6);


 FUNC_9(VAR_3 + VAR_2 + VAR_4);

 if (!VAR_8)
  return VAR_5;
 if (VAR_9) {
  *VAR_7 |= VAR_9;
  FUNC_7(VAR_6, FUNC_2(VAR_6), *VAR_7);
  FUNC_6(VAR_6);
 }


 *VAR_7 = FUNC_5(VAR_6, FUNC_2(VAR_6));
 if (VAR_8 != FUNC_8(VAR_6, VAR_7)) {
  VAR_10 = VAR_1;
  FUNC_1(VAR_0,
        "Error - I2C data was not set to %X.\n",
        VAR_8);
 }

 return VAR_10;
}
