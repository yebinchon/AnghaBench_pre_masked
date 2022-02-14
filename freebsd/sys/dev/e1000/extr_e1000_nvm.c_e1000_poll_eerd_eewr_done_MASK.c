
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;

s32 FUNC_3(struct e1000_hw *VAR_6, int VAR_7)
{
 u32 VAR_8 = 100000;
 u32 VAR_9, VAR_10 = 0;

 FUNC_0("e1000_poll_eerd_eewr_done");

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (VAR_7 == VAR_3)
   VAR_10 = FUNC_1(VAR_6, VAR_0);
  else
   VAR_10 = FUNC_1(VAR_6, VAR_1);

  if (VAR_10 & VAR_4)
   return VAR_5;

  FUNC_2(5);
 }

 return -VAR_2;
}
