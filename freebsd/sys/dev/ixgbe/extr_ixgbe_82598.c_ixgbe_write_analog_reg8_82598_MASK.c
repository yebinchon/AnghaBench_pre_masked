
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_2, u32 VAR_3, u8 VAR_4)
{
 u32 VAR_5;

 FUNC_0("ixgbe_write_analog_reg8_82598");

 VAR_5 = (VAR_3 << 8) | VAR_4;
 FUNC_2(VAR_2, VAR_0, VAR_5);
 FUNC_1(VAR_2);
 FUNC_3(10);

 return VAR_1;
}
