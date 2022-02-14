
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int) ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = VAR_4;
 u32 VAR_7 = VAR_4 << 5;
 u32 VAR_8 = 200;
 u32 VAR_9;

 FUNC_0("ixgbe_acquire_swfw_sync");

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {




  if (FUNC_3(VAR_3))
   return VAR_0;

  VAR_5 = FUNC_1(VAR_3, VAR_1);
  if (!(VAR_5 & (VAR_7 | VAR_6))) {
   VAR_5 |= VAR_6;
   FUNC_2(VAR_3, VAR_1, VAR_5);
   FUNC_4(VAR_3);
   return VAR_2;
  } else {

   FUNC_4(VAR_3);
   FUNC_6(5);
  }
 }


 if (VAR_5 & (VAR_7 | VAR_6))
  FUNC_5(VAR_3, VAR_5 & (VAR_7 | VAR_6));

 FUNC_6(5);
 return VAR_0;
}
