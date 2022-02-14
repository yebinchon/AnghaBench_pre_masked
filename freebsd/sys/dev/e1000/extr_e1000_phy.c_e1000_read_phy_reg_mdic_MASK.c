
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_phy_info {int addr; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct e1000_hw*,int ) ;
 int VAR_10 ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct e1000_hw *VAR_13, u32 VAR_14, u16 *VAR_15)
{
 struct e1000_phy_info *VAR_16 = &VAR_13->phy;
 u32 VAR_17, VAR_18 = 0;

 FUNC_0("e1000_read_phy_reg_mdic");

 if (VAR_14 > VAR_11) {
  FUNC_2("PHY Address %d is out of range\n", VAR_14);
  return -VAR_0;
 }





 VAR_18 = ((VAR_14 << VAR_9) |
  (VAR_16->addr << VAR_6) |
  (VAR_5));

 FUNC_5(VAR_13, VAR_3, VAR_18);





 for (VAR_17 = 0; VAR_17 < (VAR_2 * 3); VAR_17++) {
  FUNC_6(50);
  VAR_18 = FUNC_4(VAR_13, VAR_3);
  if (VAR_18 & VAR_7)
   break;
 }
 if (!(VAR_18 & VAR_7)) {
  FUNC_1("MDI Read did not complete\n");
  return -VAR_1;
 }
 if (VAR_18 & VAR_4) {
  FUNC_1("MDI Error\n");
  return -VAR_1;
 }
 if (((VAR_18 & VAR_8) >> VAR_9) != VAR_14) {
  FUNC_3("MDI Read offset error - requested %d, returned %d\n",
     VAR_14,
     (VAR_18 & VAR_8) >> VAR_9);
  return -VAR_1;
 }
 *VAR_15 = (u16) VAR_18;




 if (VAR_13->mac.type == VAR_12)
  FUNC_6(100);

 return VAR_10;
}
