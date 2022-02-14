
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {scalar_t__ autoneg_wait_to_complete; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int ) ;
 int FUNC_9 (int) ;

s32 FUNC_10(struct e1000_hw *VAR_6)
{
 struct e1000_phy_info *VAR_7 = &VAR_6->phy;
 s32 VAR_8;
 u16 VAR_9;
 bool VAR_10;

 FUNC_0("e1000_phy_force_speed_duplex_ife");

 VAR_8 = VAR_7->ops.read_reg(VAR_6, VAR_4, &VAR_9);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_6, &VAR_9);

 VAR_8 = VAR_7->ops.write_reg(VAR_6, VAR_4, VAR_9);
 if (VAR_8)
  return VAR_8;


 VAR_8 = VAR_7->ops.read_reg(VAR_6, VAR_1, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_9 &= ~VAR_2;
 VAR_9 &= ~VAR_3;

 VAR_8 = VAR_7->ops.write_reg(VAR_6, VAR_1, VAR_9);
 if (VAR_8)
  return VAR_8;

 FUNC_2("IFE PMC: %X\n", VAR_9);

 FUNC_9(1);

 if (VAR_7->autoneg_wait_to_complete) {
  FUNC_1("Waiting for forced speed/duplex link on IFE phy.\n");

  VAR_8 = FUNC_4(VAR_6, VAR_5,
           100000, &VAR_10);
  if (VAR_8)
   return VAR_8;

  if (!VAR_10)
   FUNC_1("Link taking longer than expected.\n");


  VAR_8 = FUNC_4(VAR_6, VAR_5,
           100000, &VAR_10);
  if (VAR_8)
   return VAR_8;
 }

 return VAR_0;
}
