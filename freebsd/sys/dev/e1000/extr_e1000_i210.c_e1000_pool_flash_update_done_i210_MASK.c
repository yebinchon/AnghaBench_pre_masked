
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;

s32 FUNC_3(struct e1000_hw *VAR_5)
{
 s32 VAR_6 = -VAR_2;
 u32 VAR_7, VAR_8;

 FUNC_0("e1000_pool_flash_update_done_i210");

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_8 = FUNC_1(VAR_5, VAR_0);
  if (VAR_8 & VAR_1) {
   VAR_6 = VAR_4;
   break;
  }
  FUNC_2(5);
 }

 return VAR_6;
}
