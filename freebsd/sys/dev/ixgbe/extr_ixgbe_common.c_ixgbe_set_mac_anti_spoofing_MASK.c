
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_0 ;

void FUNC_3(struct ixgbe_hw *VAR_1, bool VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 >> 3;
 int VAR_5 = VAR_3 % 8;
 u32 VAR_6;

 if (VAR_1->mac.type == VAR_0)
  return;

 VAR_6 = FUNC_1(VAR_1, FUNC_0(VAR_4));
 if (VAR_2)
  VAR_6 |= (1 << VAR_5);
 else
  VAR_6 &= ~(1 << VAR_5);
 FUNC_2(VAR_1, FUNC_0(VAR_4), VAR_6);
}
