
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int) ;
 int FUNC_7 (struct ixgbe_hw*,int*) ;
 int FUNC_8 (struct ixgbe_hw*,int*) ;
 int FUNC_9 (struct ixgbe_hw*,int*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static s32 FUNC_11(struct ixgbe_hw *VAR_3, bool *VAR_4)
{
 u32 VAR_5 = FUNC_4(VAR_3, FUNC_1(VAR_3));
 u32 VAR_6 = FUNC_2(VAR_3);

 FUNC_0("ixgbe_clock_in_i2c_bit");

 if (VAR_6) {
  VAR_5 |= FUNC_3(VAR_3);
  VAR_5 |= VAR_6;
  FUNC_6(VAR_3, FUNC_1(VAR_3), VAR_5);
  FUNC_5(VAR_3);
 }
 FUNC_9(VAR_3, &VAR_5);


 FUNC_10(VAR_0);

 VAR_5 = FUNC_4(VAR_3, FUNC_1(VAR_3));
 *VAR_4 = FUNC_7(VAR_3, &VAR_5);

 FUNC_8(VAR_3, &VAR_5);


 FUNC_10(VAR_1);

 return VAR_2;
}
