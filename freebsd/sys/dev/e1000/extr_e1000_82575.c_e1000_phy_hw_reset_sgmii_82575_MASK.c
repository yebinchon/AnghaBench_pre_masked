
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* commit ) (struct e1000_hw*) ;scalar_t__ (* write_reg ) (struct e1000_hw*,int,int) ;} ;
struct e1000_phy_info {scalar_t__ id; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_2)
{
 s32 VAR_3 = VAR_0;
 struct e1000_phy_info *VAR_4 = &VAR_2->phy;

 FUNC_0("e1000_phy_hw_reset_sgmii_82575");






 FUNC_1("Soft resetting SGMII attached PHY...\n");

 if (!(VAR_2->phy.ops.write_reg))
  goto out;





 VAR_3 = VAR_2->phy.ops.write_reg(VAR_2, 0x1B, 0x8084);
 if (VAR_3)
  goto out;

 VAR_3 = VAR_2->phy.ops.commit(VAR_2);
 if (VAR_3)
  goto out;

 if (VAR_4->id == VAR_1)
  VAR_3 = FUNC_2(VAR_2);
out:
 return VAR_3;
}
