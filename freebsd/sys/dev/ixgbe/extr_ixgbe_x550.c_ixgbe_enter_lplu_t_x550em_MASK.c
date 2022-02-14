
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct TYPE_10__ {int autoneg_advertised; TYPE_2__ ops; } ;
struct TYPE_8__ {scalar_t__ (* setup_link ) (struct ixgbe_hw*,scalar_t__,int ) ;} ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ ops; } ;
struct TYPE_6__ {int ctrl_word_3; } ;
struct ixgbe_hw {TYPE_5__ phy; TYPE_4__ mac; scalar_t__ wol_enabled; TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ ixgbe_link_speed ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,scalar_t__*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,scalar_t__,int ) ;

s32 FUNC_13(struct ixgbe_hw *VAR_17)
{
 u16 VAR_18, VAR_19, VAR_20;
 s32 VAR_21;
 ixgbe_link_speed VAR_22;
 u32 VAR_23;
 bool VAR_24;


 if ((VAR_17->mac.type == VAR_16) &&
     (VAR_1 &
      FUNC_1(VAR_17, FUNC_0(0))))
  return VAR_13;


 if (FUNC_2(VAR_17))
  return VAR_13;

 VAR_21 = FUNC_3(VAR_17, &VAR_24);
 if (VAR_21 != VAR_13)
  return VAR_21;

 VAR_21 = FUNC_6(VAR_17, VAR_14, &VAR_17->eeprom.ctrl_word_3);

 if (VAR_21 != VAR_13)
  return VAR_21;




 if (!VAR_24 || !(VAR_17->eeprom.ctrl_word_3 & VAR_15) ||
     !(VAR_17->wol_enabled || FUNC_5(VAR_17)))
  return FUNC_7(VAR_17, VAR_0);


 VAR_21 = FUNC_4(VAR_17, &VAR_22);

 if (VAR_21 != VAR_13)
  return VAR_21;


 if (VAR_22 == VAR_4)
  return FUNC_7(VAR_17, VAR_0);

 VAR_21 = VAR_17->phy.ops.read_reg(VAR_17, VAR_6,
          VAR_5,
          &VAR_20);

 if (VAR_21 != VAR_13)
  return VAR_21;


 VAR_21 = FUNC_3(VAR_17, &VAR_24);
 if (VAR_21 != VAR_13)
  return FUNC_7(VAR_17, VAR_0);


 VAR_20 &= VAR_10;


 if (((VAR_20 == VAR_8) &&
      (VAR_22 == VAR_3)) ||
     ((VAR_20 == VAR_7) &&
      (VAR_22 == VAR_2)))
  return VAR_21;


 VAR_21 = VAR_17->phy.ops.read_reg(VAR_17, VAR_9,
          VAR_5,
          &VAR_19);

 if (VAR_21 != VAR_13)
  return VAR_21;

 VAR_21 = VAR_17->phy.ops.read_reg(VAR_17, VAR_11,
        VAR_5,
        &VAR_18);

 if (VAR_21 != VAR_13)
  return VAR_21;

 VAR_21 = VAR_17->phy.ops.read_reg(VAR_17,
        VAR_12,
        VAR_5,
        &VAR_19);

 if (VAR_21 != VAR_13)
  return VAR_21;

 VAR_23 = VAR_17->phy.autoneg_advertised;


 VAR_21 = VAR_17->mac.ops.setup_link(VAR_17, VAR_22, VAR_0);


 VAR_17->phy.autoneg_advertised = VAR_23;

 return VAR_21;
}
