
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct TYPE_2__ {int pg_tcs; } ;
struct ixgbe_dcb_config {int vt_mode; TYPE_1__ num_tcs; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_3 ;

s32 FUNC_3(struct ixgbe_hw *VAR_4,
        struct ixgbe_dcb_config *VAR_5)
{
 u32 VAR_6 = 0;
 u8 VAR_7 = 0;
 u8 VAR_8 = 8;
 bool VAR_9 = VAR_0;

 if (VAR_5 != ((void*)0)) {
  VAR_8 = VAR_5->num_tcs.pg_tcs;
  VAR_9 = VAR_5->vt_mode;
 }

 if (!((VAR_8 == 8 && VAR_9 == VAR_0) || VAR_8 == 4))
  return VAR_1;

 if (VAR_8 == 8 && VAR_9 == VAR_0) {







  for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
   VAR_6 = 0x01010101 * (VAR_7 / 4);
   FUNC_2(VAR_4, FUNC_0(VAR_7), VAR_6);
  }
  for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
   if (VAR_7 < 8)
    VAR_6 = 0x00000000;
   else if (VAR_7 < 16)
    VAR_6 = 0x01010101;
   else if (VAR_7 < 20)
    VAR_6 = 0x02020202;
   else if (VAR_7 < 24)
    VAR_6 = 0x03030303;
   else if (VAR_7 < 26)
    VAR_6 = 0x04040404;
   else if (VAR_7 < 28)
    VAR_6 = 0x05050505;
   else if (VAR_7 < 30)
    VAR_6 = 0x06060606;
   else
    VAR_6 = 0x07070707;
   FUNC_2(VAR_4, FUNC_1(VAR_7), VAR_6);
  }
 } else if (VAR_8 == 4 && VAR_9 == VAR_0) {







  for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
   if (VAR_7 % 8 > 3)



    continue;
   VAR_6 = 0x01010101 * (VAR_7 / 8);
   FUNC_2(VAR_4, FUNC_0(VAR_7), VAR_6);
  }
  for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
   if (VAR_7 < 16)
    VAR_6 = 0x00000000;
   else if (VAR_7 < 24)
    VAR_6 = 0x01010101;
   else if (VAR_7 < 28)
    VAR_6 = 0x02020202;
   else
    VAR_6 = 0x03030303;
   FUNC_2(VAR_4, FUNC_1(VAR_7), VAR_6);
  }
 } else if (VAR_8 == 4 && VAR_9 == VAR_3) {
  for (VAR_7 = 0; VAR_7 < 32; VAR_7++)
   FUNC_2(VAR_4, FUNC_0(VAR_7), 0x03020100);
  for (VAR_7 = 0; VAR_7 < 32; VAR_7++)
   FUNC_2(VAR_4, FUNC_1(VAR_7), 0x03020100);
 }

 return VAR_2;
}
