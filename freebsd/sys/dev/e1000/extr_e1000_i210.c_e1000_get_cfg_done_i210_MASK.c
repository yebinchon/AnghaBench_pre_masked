
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_4)
{
 s32 VAR_5 = VAR_3;
 u32 VAR_6 = VAR_1;

 FUNC_0("e1000_get_cfg_done_i210");

 while (VAR_5) {
  if (FUNC_2(VAR_4, VAR_0) & VAR_6)
   break;
  FUNC_3(1);
  VAR_5--;
 }
 if (!VAR_5)
  FUNC_1("MNG configuration cycle has not completed.\n");

 return VAR_2;
}
