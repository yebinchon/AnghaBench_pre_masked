
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int addr; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;

s32 FUNC_6(struct e1000_hw *VAR_8, u16 *VAR_9)
{
 s32 VAR_10;
 u16 VAR_11;

 FUNC_0("e1000_enable_phy_wakeup_reg_access_bm");

 if (!VAR_9)
  return -VAR_6;


 VAR_8->phy.addr = 1;


 VAR_10 = FUNC_4(VAR_8, (VAR_0 << VAR_7));
 if (VAR_10) {
  FUNC_1("Could not set Port Control page\n");
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_8, VAR_2, VAR_9);
 if (VAR_10) {
  FUNC_2("Could not read PHY register %d.%d\n",
     VAR_0, VAR_2);
  return VAR_10;
 }




 VAR_11 = *VAR_9;
 VAR_11 |= VAR_1;
 VAR_11 &= ~(VAR_4 | VAR_3);

 VAR_10 = FUNC_5(VAR_8, VAR_2, VAR_11);
 if (VAR_10) {
  FUNC_2("Could not write PHY register %d.%d\n",
     VAR_0, VAR_2);
  return VAR_10;
 }




 return FUNC_4(VAR_8, (VAR_5 << VAR_7));
}
