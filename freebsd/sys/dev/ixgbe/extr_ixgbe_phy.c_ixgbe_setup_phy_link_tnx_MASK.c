
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* write_reg ) (struct ixgbe_hw*,int ,int ,int ) ;int (* read_reg ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct TYPE_4__ {int autoneg_advertised; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int *) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int ) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int *) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ,int ) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int ,int *) ;
 int FUNC_8 (struct ixgbe_hw*,int ,int ,int ) ;
 int FUNC_9 (struct ixgbe_hw*,int ,int ,int *) ;
 int FUNC_10 (struct ixgbe_hw*,int ,int ,int ) ;

s32 FUNC_11(struct ixgbe_hw *VAR_15)
{
 s32 VAR_16 = VAR_14;
 u16 VAR_17 = VAR_11;
 bool VAR_18 = VAR_0;
 ixgbe_link_speed VAR_19;

 FUNC_0("ixgbe_setup_phy_link_tnx");

 FUNC_2(VAR_15, &VAR_19, &VAR_18);

 if (VAR_19 & VAR_2) {

  VAR_15->phy.ops.read_reg(VAR_15, VAR_8,
         VAR_5,
         &VAR_17);

  VAR_17 &= ~VAR_7;
  if (VAR_15->phy.autoneg_advertised & VAR_2)
   VAR_17 |= VAR_7;

  VAR_15->phy.ops.write_reg(VAR_15, VAR_8,
          VAR_5,
          VAR_17);
 }

 if (VAR_19 & VAR_3) {

  VAR_15->phy.ops.read_reg(VAR_15, VAR_12,
         VAR_5,
         &VAR_17);

  VAR_17 &= ~VAR_9;
  if (VAR_15->phy.autoneg_advertised & VAR_3)
   VAR_17 |= VAR_9;

  VAR_15->phy.ops.write_reg(VAR_15, VAR_12,
          VAR_5,
          VAR_17);
 }

 if (VAR_19 & VAR_1) {

  VAR_15->phy.ops.read_reg(VAR_15, VAR_10,
         VAR_5,
         &VAR_17);

  VAR_17 &= ~VAR_6;
  if (VAR_15->phy.autoneg_advertised & VAR_1)
   VAR_17 |= VAR_6;

  VAR_15->phy.ops.write_reg(VAR_15, VAR_10,
          VAR_5,
          VAR_17);
 }


 if (FUNC_1(VAR_15))
  return VAR_16;


 VAR_15->phy.ops.read_reg(VAR_15, VAR_4,
        VAR_5, &VAR_17);

 VAR_17 |= VAR_13;

 VAR_15->phy.ops.write_reg(VAR_15, VAR_4,
         VAR_5, VAR_17);

 return VAR_16;
}
