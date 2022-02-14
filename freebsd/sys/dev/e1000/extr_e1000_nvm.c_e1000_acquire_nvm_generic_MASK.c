
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
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct e1000_hw *VAR_6)
{
 u32 VAR_7 = FUNC_2(VAR_6, VAR_0);
 s32 VAR_8 = VAR_4;

 FUNC_0("e1000_acquire_nvm_generic");

 FUNC_3(VAR_6, VAR_0, VAR_7 | VAR_2);
 VAR_7 = FUNC_2(VAR_6, VAR_0);

 while (VAR_8) {
  if (VAR_7 & VAR_1)
   break;
  FUNC_4(5);
  VAR_7 = FUNC_2(VAR_6, VAR_0);
  VAR_8--;
 }

 if (!VAR_8) {
  VAR_7 &= ~VAR_2;
  FUNC_3(VAR_6, VAR_0, VAR_7);
  FUNC_1("Could not acquire NVM grant\n");
  return -VAR_3;
 }

 return VAR_5;
}
