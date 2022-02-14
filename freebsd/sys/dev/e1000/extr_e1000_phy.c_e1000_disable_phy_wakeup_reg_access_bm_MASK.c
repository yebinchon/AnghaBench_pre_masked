
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int ) ;

s32 FUNC_5(struct e1000_hw *VAR_4, u16 *VAR_5)
{
 s32 VAR_6;

 FUNC_0("e1000_disable_phy_wakeup_reg_access_bm");

 if (!VAR_5)
  return -VAR_2;


 VAR_6 = FUNC_3(VAR_4, (VAR_0 << VAR_3));
 if (VAR_6) {
  FUNC_1("Could not set Port Control page\n");
  return VAR_6;
 }


 VAR_6 = FUNC_4(VAR_4, VAR_1, *VAR_5);
 if (VAR_6)
  FUNC_2("Could not restore PHY register %d.%d\n",
     VAR_0, VAR_1);

 return VAR_6;
}
