
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int) ;
 int FUNC_8 (struct ixgbe_hw*,int*) ;
 int FUNC_9 (struct ixgbe_hw*,int*) ;
 int FUNC_10 (struct ixgbe_hw*,int*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static s32 FUNC_12(struct ixgbe_hw *VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_4);
 s32 VAR_6 = VAR_3;
 u32 VAR_7 = 0;
 u32 VAR_8 = FUNC_5(VAR_4, FUNC_2(VAR_4));
 u32 VAR_9 = 10;
 bool VAR_10 = 1;

 FUNC_0("ixgbe_get_i2c_ack");

 if (VAR_5) {
  VAR_8 |= FUNC_4(VAR_4);
  VAR_8 |= VAR_5;
  FUNC_7(VAR_4, FUNC_2(VAR_4), VAR_8);
  FUNC_6(VAR_4);
 }
 FUNC_10(VAR_4, &VAR_8);


 FUNC_11(VAR_1);



 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_8 = FUNC_5(VAR_4, FUNC_2(VAR_4));
  VAR_10 = FUNC_8(VAR_4, &VAR_8);

  FUNC_11(1);
  if (!VAR_10)
   break;
 }

 if (VAR_10) {
  FUNC_1("I2C ack was not received.\n");
  VAR_6 = VAR_0;
 }

 FUNC_9(VAR_4, &VAR_8);


 FUNC_11(VAR_2);

 return VAR_6;
}
