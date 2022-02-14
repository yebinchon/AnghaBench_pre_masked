
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_8, u32 VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 s32 VAR_12 = VAR_5;

 FUNC_0("ixgbe_poll_eerd_eewr_done");

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (VAR_9 == VAR_6)
   VAR_11 = FUNC_2(VAR_8, VAR_1);
  else
   VAR_11 = FUNC_2(VAR_8, VAR_3);

  if (VAR_11 & VAR_0) {
   VAR_12 = VAR_7;
   break;
  }
  FUNC_3(5);
 }

 if (VAR_10 == VAR_2)
  FUNC_1(VAR_4,
        "EEPROM read/write done polling timed out");

 return VAR_12;
}
