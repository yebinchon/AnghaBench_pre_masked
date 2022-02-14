
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct e1000_hw *VAR_5)
{
 s32 VAR_6 = 0;

 FUNC_0("e1000_get_auto_rd_done_generic");

 while (VAR_6 < VAR_0) {
  if (FUNC_2(VAR_5, VAR_1) & VAR_2)
   break;
  FUNC_3(1);
  VAR_6++;
 }

 if (VAR_6 == VAR_0) {
  FUNC_1("Auto read by HW from NVM has not completed.\n");
  return -VAR_3;
 }

 return VAR_4;
}
