
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
 int VAR_0 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct ixgbe_hw *VAR_1, u32 *VAR_2)
{
 u32 VAR_3 = FUNC_3(VAR_1);
 bool VAR_4;
 FUNC_6(VAR_1);

 FUNC_0("ixgbe_get_i2c_data");

 if (VAR_3) {
  *VAR_2 |= VAR_3;
  FUNC_5(VAR_1, FUNC_1(VAR_1), *VAR_2);
  FUNC_4(VAR_1);
  FUNC_7(VAR_0);
 }

 if (*VAR_2 & FUNC_2(VAR_1))
  VAR_4 = 1;
 else
  VAR_4 = 0;

 return VAR_4;
}
