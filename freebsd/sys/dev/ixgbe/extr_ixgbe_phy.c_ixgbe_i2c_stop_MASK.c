
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int) ;
 int FUNC_8 (struct ixgbe_hw*,int*) ;
 int FUNC_9 (struct ixgbe_hw*,int*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct ixgbe_hw *VAR_2)
{
 u32 VAR_3 = FUNC_5(VAR_2, FUNC_1(VAR_2));
 u32 VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5 = FUNC_3(VAR_2);
 u32 VAR_6 = FUNC_2(VAR_2);

 FUNC_0("ixgbe_i2c_stop");


 FUNC_9(VAR_2, &VAR_3, 0);
 FUNC_8(VAR_2, &VAR_3);


 FUNC_10(VAR_1);

 FUNC_9(VAR_2, &VAR_3, 1);


 FUNC_10(VAR_0);

 if (VAR_6 || VAR_4 || VAR_5) {
  VAR_3 &= ~VAR_6;
  VAR_3 |= VAR_4 | VAR_5;
  FUNC_7(VAR_2, FUNC_1(VAR_2), VAR_3);
  FUNC_6(VAR_2);
 }
}
