
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* commit ) (struct e1000_hw*) ;scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;} ;
struct e1000_phy_info {scalar_t__ id; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_12 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_13 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_14 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_15 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_16 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_17 (struct e1000_hw*,int ,int) ;

s32 FUNC_18(struct e1000_hw *VAR_7)
{
 struct e1000_phy_info *VAR_8 = &VAR_7->phy;
 s32 VAR_9 = VAR_5;

 FUNC_0("e1000_initialize_M88E1512_phy");


 if (VAR_8->id != VAR_6)
  goto out;


 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_4, 0x00FF);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_1, 0x214B);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_0, 0x2144);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_1, 0x0C28);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_0, 0x2146);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_1, 0xB233);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_0, 0x214D);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_1, 0xCC0C);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_0, 0x2159);
 if (VAR_9)
  goto out;


 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_4, 0x00FB);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_2, 0x000D);
 if (VAR_9)
  goto out;


 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_4, 0x12);
 if (VAR_9)
  goto out;


 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_3, 0x8001);
 if (VAR_9)
  goto out;


 VAR_9 = VAR_8->ops.write_reg(VAR_7, VAR_4, 0);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_8->ops.commit(VAR_7);
 if (VAR_9) {
  FUNC_1("Error committing the PHY changes\n");
  return VAR_9;
 }

 FUNC_2(1000);
out:
 return VAR_9;
}
