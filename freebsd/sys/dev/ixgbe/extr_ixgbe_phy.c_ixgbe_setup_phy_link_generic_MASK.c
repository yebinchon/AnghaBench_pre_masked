
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_6__ {int autoneg_advertised; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int*,int*) ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_8 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_9 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_10 (struct ixgbe_hw*,int ,int ,int) ;

s32 FUNC_11(struct ixgbe_hw *VAR_21)
{
 s32 VAR_22 = VAR_19;
 u16 VAR_23 = VAR_16;
 bool VAR_24 = VAR_0;
 ixgbe_link_speed VAR_25;

 FUNC_0("ixgbe_setup_phy_link_generic");

 FUNC_2(VAR_21, &VAR_25, &VAR_24);


 VAR_21->phy.ops.read_reg(VAR_21, VAR_11,
        VAR_7,
        &VAR_23);

 VAR_23 &= ~VAR_10;
 if ((VAR_21->phy.autoneg_advertised & VAR_2) &&
     (VAR_25 & VAR_2))
  VAR_23 |= VAR_10;

 VAR_21->phy.ops.write_reg(VAR_21, VAR_11,
         VAR_7,
         VAR_23);

 VAR_21->phy.ops.read_reg(VAR_21, VAR_17,
        VAR_7,
        &VAR_23);

 if (VAR_21->mac.type == VAR_20) {

  VAR_23 &= ~VAR_14;
  if ((VAR_21->phy.autoneg_advertised & VAR_5) &&
      (VAR_25 & VAR_5))
   VAR_23 |= VAR_14;


  VAR_23 &= ~VAR_13;
  if ((VAR_21->phy.autoneg_advertised &
       VAR_4) &&
      (VAR_25 & VAR_4))
   VAR_23 |= VAR_13;
 }


 VAR_23 &= ~VAR_12;
 if ((VAR_21->phy.autoneg_advertised & VAR_3) &&
     (VAR_25 & VAR_3))
  VAR_23 |= VAR_12;

 VAR_21->phy.ops.write_reg(VAR_21, VAR_17,
         VAR_7,
         VAR_23);


 VAR_21->phy.ops.read_reg(VAR_21, VAR_15,
        VAR_7,
        &VAR_23);

 VAR_23 &= ~(VAR_8 |
    VAR_9);
 if ((VAR_21->phy.autoneg_advertised & VAR_1) &&
     (VAR_25 & VAR_1))
  VAR_23 |= VAR_8;

 VAR_21->phy.ops.write_reg(VAR_21, VAR_15,
         VAR_7,
         VAR_23);


 if (FUNC_1(VAR_21))
  return VAR_22;


 VAR_21->phy.ops.read_reg(VAR_21, VAR_6,
        VAR_7, &VAR_23);

 VAR_23 |= VAR_18;

 VAR_21->phy.ops.write_reg(VAR_21, VAR_6,
         VAR_7, VAR_23);

 return VAR_22;
}
