
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
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int ) ;
 int FUNC_9 (int) ;

s32 FUNC_10(struct e1000_hw *VAR_5)
{
 struct e1000_phy_info *VAR_6 = &VAR_5->phy;
 s32 VAR_7;
 u16 VAR_8;
 bool VAR_9;

 FUNC_0("e1000_phy_force_speed_duplex_igp");

 VAR_7 = VAR_6->ops.read_reg(VAR_5, VAR_3, &VAR_8);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_5, &VAR_8);

 VAR_7 = VAR_6->ops.write_reg(VAR_5, VAR_3, VAR_8);
 if (VAR_7)
  return VAR_7;




 VAR_7 = VAR_6->ops.read_reg(VAR_5, VAR_0, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_8 &= ~VAR_1;
 VAR_8 &= ~VAR_2;

 VAR_7 = VAR_6->ops.write_reg(VAR_5, VAR_0, VAR_8);
 if (VAR_7)
  return VAR_7;

 FUNC_2("IGP PSCR: %X\n", VAR_8);

 FUNC_9(1);

 if (VAR_6->autoneg_wait_to_complete) {
  FUNC_1("Waiting for forced speed/duplex link on IGP phy.\n");

  VAR_7 = FUNC_4(VAR_5, VAR_4,
           100000, &VAR_9);
  if (VAR_7)
   return VAR_7;

  if (!VAR_9)
   FUNC_1("Link taking longer than expected.\n");


  VAR_7 = FUNC_4(VAR_5, VAR_4,
           100000, &VAR_9);
 }

 return VAR_7;
}
