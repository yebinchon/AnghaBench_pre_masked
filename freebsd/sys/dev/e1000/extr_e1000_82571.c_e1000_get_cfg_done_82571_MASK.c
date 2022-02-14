
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_5)
{
 s32 VAR_6 = VAR_4;

 FUNC_0("e1000_get_cfg_done_82571");

 while (VAR_6) {
  if (FUNC_2(VAR_5, VAR_0) &
      VAR_2)
   break;
  FUNC_3(1);
  VAR_6--;
 }
 if (!VAR_6) {
  FUNC_1("MNG configuration cycle has not completed.\n");
  return -VAR_1;
 }

 return VAR_3;
}
