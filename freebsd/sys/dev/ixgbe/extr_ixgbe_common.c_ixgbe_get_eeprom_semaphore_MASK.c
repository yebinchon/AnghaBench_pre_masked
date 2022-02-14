
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static s32 FUNC_8(struct ixgbe_hw *VAR_5)
{
 s32 VAR_6 = VAR_1;
 u32 VAR_7 = 2000;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_0("ixgbe_get_eeprom_semaphore");



 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {




  VAR_9 = FUNC_3(VAR_5, FUNC_4(VAR_5));
  if (!(VAR_9 & VAR_3)) {
   VAR_6 = VAR_2;
   break;
  }
  FUNC_7(50);
 }

 if (VAR_8 == VAR_7) {
  FUNC_1("Driver can't access the Eeprom - SMBI Semaphore "
    "not granted.\n");






  FUNC_6(VAR_5);

  FUNC_7(50);





  VAR_9 = FUNC_3(VAR_5, FUNC_4(VAR_5));
  if (!(VAR_9 & VAR_3))
   VAR_6 = VAR_2;
 }


 if (VAR_6 == VAR_2) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_9 = FUNC_3(VAR_5, FUNC_4(VAR_5));


   VAR_9 |= VAR_4;
   FUNC_5(VAR_5, FUNC_4(VAR_5), VAR_9);





   VAR_9 = FUNC_3(VAR_5, FUNC_4(VAR_5));
   if (VAR_9 & VAR_4)
    break;

   FUNC_7(50);
  }





  if (VAR_8 >= VAR_7) {
   FUNC_2(VAR_0,
       "SWESMBI Software EEPROM semaphore not granted.\n");
   FUNC_6(VAR_5);
   VAR_6 = VAR_1;
  }
 } else {
  FUNC_2(VAR_0,
        "Software semaphore SMBI between device drivers "
        "not granted.\n");
 }

 return VAR_6;
}
