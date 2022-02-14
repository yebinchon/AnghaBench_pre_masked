
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;

void FUNC_4(struct ixgbe_hw *VAR_1,
  bool VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 >> 3;
 int VAR_5 = VAR_3 % 8 + VAR_0;
 u32 VAR_6;

 FUNC_0("ixgbe_set_ethertype_anti_spoofing_X550");

 VAR_6 = FUNC_2(VAR_1, FUNC_1(VAR_4));
 if (VAR_2)
  VAR_6 |= (1 << VAR_5);
 else
  VAR_6 &= ~(1 << VAR_5);

 FUNC_3(VAR_1, FUNC_1(VAR_4), VAR_6);
}
