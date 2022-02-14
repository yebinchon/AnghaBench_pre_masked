
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; int set_lben; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_2(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_3);
 if (VAR_9 & VAR_4) {
  if (VAR_7->mac.type != VAR_6) {
   VAR_8 = FUNC_0(VAR_7, VAR_1);
   if (VAR_8 & VAR_2) {
    VAR_8 &= ~VAR_2;
    FUNC_1(VAR_7, VAR_1, VAR_8);
    VAR_7->mac.set_lben = VAR_5;
   } else {
    VAR_7->mac.set_lben = VAR_0;
   }
  }
  VAR_9 &= ~VAR_4;
  FUNC_1(VAR_7, VAR_3, VAR_9);
 }
}
