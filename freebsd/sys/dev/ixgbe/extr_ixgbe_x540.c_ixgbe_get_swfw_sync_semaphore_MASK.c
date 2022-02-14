
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_5)
{
 s32 VAR_6 = VAR_1;
 u32 VAR_7 = 2000;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_0("ixgbe_get_swfw_sync_semaphore");


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {




  VAR_9 = FUNC_2(VAR_5, FUNC_4(VAR_5));
  if (!(VAR_9 & VAR_4)) {
   VAR_6 = VAR_2;
   break;
  }
  FUNC_6(50);
 }


 if (VAR_6 == VAR_2) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_9 = FUNC_2(VAR_5, FUNC_3(VAR_5));
   if (!(VAR_9 & VAR_3))
    break;

   FUNC_6(50);
  }





  if (VAR_8 >= VAR_7) {
   FUNC_1(VAR_0,
    "REGSMP Software NVM semaphore not granted.\n");
   FUNC_5(VAR_5);
   VAR_6 = VAR_1;
  }
 } else {
  FUNC_1(VAR_0,
        "Software semaphore SMBI between device drivers "
        "not granted.\n");
 }

 return VAR_6;
}
