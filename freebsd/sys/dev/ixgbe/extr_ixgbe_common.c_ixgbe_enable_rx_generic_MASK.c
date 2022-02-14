
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ set_lben; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_5 ;

void FUNC_2(struct ixgbe_hw *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_3);
 FUNC_1(VAR_6, VAR_3, (VAR_8 | VAR_4));

 if (VAR_6->mac.type != VAR_5) {
  if (VAR_6->mac.set_lben) {
   VAR_7 = FUNC_0(VAR_6, VAR_1);
   VAR_7 |= VAR_2;
   FUNC_1(VAR_6, VAR_1, VAR_7);
   VAR_6->mac.set_lben = VAR_0;
  }
 }
}
