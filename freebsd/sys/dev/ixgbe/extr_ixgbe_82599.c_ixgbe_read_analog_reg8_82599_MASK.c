
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_3, u32 VAR_4, u8 *VAR_5)
{
 u32 VAR_6;

 FUNC_0("ixgbe_read_analog_reg8_82599");

 FUNC_3(VAR_3, VAR_0, VAR_1 |
   (VAR_4 << 8));
 FUNC_2(VAR_3);
 FUNC_4(10);
 VAR_6 = FUNC_1(VAR_3, VAR_0);
 *VAR_5 = (u8)VAR_6;

 return VAR_2;
}
