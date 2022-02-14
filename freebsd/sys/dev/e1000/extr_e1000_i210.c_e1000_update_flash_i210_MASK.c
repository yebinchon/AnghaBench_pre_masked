
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (struct e1000_hw*) ;

s32 FUNC_5(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 u32 VAR_6;

 FUNC_0("e1000_update_flash_i210");

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 == -VAR_2) {
  FUNC_1("Flash update time out\n");
  goto out;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_0) | VAR_1;
 FUNC_3(VAR_4, VAR_0, VAR_6);

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 == VAR_3)
  FUNC_1("Flash update complete\n");
 else
  FUNC_1("Flash update time out\n");

out:
 return VAR_5;
}
