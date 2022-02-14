
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;scalar_t__ (* reset ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {scalar_t__ type; int mdix; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int ) ;

s32 FUNC_8(struct e1000_hw *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10;

 FUNC_0("e1000_copper_link_setup_82577");

 if (VAR_8->phy.type == VAR_7) {
  VAR_9 = VAR_8->phy.ops.reset(VAR_8);
  if (VAR_9) {
   FUNC_1("Error resetting the PHY.\n");
   return VAR_9;
  }
 }


 VAR_9 = VAR_8->phy.ops.read_reg(VAR_8, VAR_2, &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_10 |= VAR_0;


 VAR_10 |= VAR_1;

 VAR_9 = VAR_8->phy.ops.write_reg(VAR_8, VAR_2, VAR_10);
 if (VAR_9)
  return VAR_9;


 VAR_9 = VAR_8->phy.ops.read_reg(VAR_8, VAR_6, &VAR_10);
 if (VAR_9)
  return VAR_9;
 VAR_10 &= ~VAR_5;





 switch (VAR_8->phy.mdix) {
 case 1:
  break;
 case 2:
  VAR_10 |= VAR_4;
  break;
 case 0:
 default:
  VAR_10 |= VAR_3;
  break;
 }
 VAR_9 = VAR_8->phy.ops.write_reg(VAR_8, VAR_6, VAR_10);
 if (VAR_9)
  return VAR_9;

 return FUNC_2(VAR_8);
}
