
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
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int ) ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct e1000_hw *VAR_2)
{
 struct e1000_phy_info *VAR_3 = &VAR_2->phy;
 s32 VAR_4;
 u16 VAR_5;
 bool VAR_6;

 FUNC_0("e1000_phy_force_speed_duplex_82577");

 VAR_4 = VAR_3->ops.read_reg(VAR_2, VAR_0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2, &VAR_5);

 VAR_4 = VAR_3->ops.write_reg(VAR_2, VAR_0, VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_6(1);

 if (VAR_3->autoneg_wait_to_complete) {
  FUNC_1("Waiting for forced speed/duplex link on 82577 phy\n");

  VAR_4 = FUNC_3(VAR_2, VAR_1,
           100000, &VAR_6);
  if (VAR_4)
   return VAR_4;

  if (!VAR_6)
   FUNC_1("Link taking longer than expected.\n");


  VAR_4 = FUNC_3(VAR_2, VAR_1,
           100000, &VAR_6);
 }

 return VAR_4;
}
