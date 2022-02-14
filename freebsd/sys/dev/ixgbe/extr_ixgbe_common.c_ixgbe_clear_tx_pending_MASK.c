
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int flags; } ;
struct ixgbe_hw {int hw_addr; TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u16 VAR_12;





 if (!(VAR_7->mac.flags & VAR_0))
  return;






 VAR_9 = FUNC_1(VAR_7, VAR_3);
 FUNC_4(VAR_7, VAR_3, VAR_9 | VAR_4);


 FUNC_3(VAR_7);
 FUNC_6(3);





 VAR_11 = FUNC_5(VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  FUNC_7(100);
  VAR_12 = FUNC_0(VAR_7, VAR_5);
  if (FUNC_2(VAR_7->hw_addr))
   goto out;
  if (!(VAR_12 & VAR_6))
   goto out;
 }

out:

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 FUNC_4(VAR_7, VAR_1,
   VAR_8 | VAR_2);


 FUNC_3(VAR_7);
 FUNC_7(20);


 FUNC_4(VAR_7, VAR_1, VAR_8);
 FUNC_4(VAR_7, VAR_3, VAR_9);
}
