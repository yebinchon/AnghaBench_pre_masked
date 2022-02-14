
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_7 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_8(struct ixgbe_hw *VAR_1, u8 VAR_2)
{
 s32 VAR_3 = VAR_0;
 s32 VAR_4;
 u32 VAR_5;
 bool VAR_6;

 FUNC_0("ixgbe_clock_out_i2c_byte");

 for (VAR_4 = 7; VAR_4 >= 0; VAR_4--) {
  VAR_6 = (VAR_2 >> VAR_4) & 0x1;
  VAR_3 = FUNC_7(VAR_1, VAR_6);

  if (VAR_3 != VAR_0)
   break;
 }


 VAR_5 = FUNC_4(VAR_1, FUNC_1(VAR_1));
 VAR_5 |= FUNC_3(VAR_1);
 VAR_5 |= FUNC_2(VAR_1);
 FUNC_6(VAR_1, FUNC_1(VAR_1), VAR_5);
 FUNC_5(VAR_1);

 return VAR_3;
}
