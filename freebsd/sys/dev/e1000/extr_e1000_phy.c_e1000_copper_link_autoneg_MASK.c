
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {scalar_t__ autoneg_wait_to_complete; TYPE_1__ ops; int autoneg_mask; int autoneg_advertised; } ;
struct TYPE_4__ {int get_link_status; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;

s32 FUNC_6(struct e1000_hw *VAR_4)
{
 struct e1000_phy_info *VAR_5 = &VAR_4->phy;
 s32 VAR_6;
 u16 VAR_7;

 FUNC_0("e1000_copper_link_autoneg");




 VAR_5->autoneg_advertised &= VAR_5->autoneg_mask;




 if (!VAR_5->autoneg_advertised)
  VAR_5->autoneg_advertised = VAR_5->autoneg_mask;

 FUNC_1("Reconfiguring auto-neg advertisement params\n");
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6) {
  FUNC_1("Error Setting up Auto-Negotiation\n");
  return VAR_6;
 }
 FUNC_1("Restarting Auto-Neg\n");




 VAR_6 = VAR_5->ops.read_reg(VAR_4, VAR_2, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_7 |= (VAR_0 | VAR_1);
 VAR_6 = VAR_5->ops.write_reg(VAR_4, VAR_2, VAR_7);
 if (VAR_6)
  return VAR_6;




 if (VAR_5->autoneg_wait_to_complete) {
  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6) {
   FUNC_1("Error while waiting for autoneg to complete\n");
   return VAR_6;
  }
 }

 VAR_4->mac.get_link_status = VAR_3;

 return VAR_6;
}
