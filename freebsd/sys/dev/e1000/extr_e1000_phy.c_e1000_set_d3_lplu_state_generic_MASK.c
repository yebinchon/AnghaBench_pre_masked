
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {scalar_t__ smart_speed; scalar_t__ autoneg_advertised; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int ) ;

s32 FUNC_10(struct e1000_hw *VAR_10, bool VAR_11)
{
 struct e1000_phy_info *VAR_12 = &VAR_10->phy;
 s32 VAR_13;
 u16 VAR_14;

 FUNC_0("e1000_set_d3_lplu_state_generic");

 if (!VAR_10->phy.ops.read_reg)
  return VAR_3;

 VAR_13 = VAR_12->ops.read_reg(VAR_10, VAR_6, &VAR_14);
 if (VAR_13)
  return VAR_13;

 if (!VAR_11) {
  VAR_14 &= ~VAR_7;
  VAR_13 = VAR_12->ops.write_reg(VAR_10, VAR_6,
          VAR_14);
  if (VAR_13)
   return VAR_13;





  if (VAR_12->smart_speed == VAR_9) {
   VAR_13 = VAR_12->ops.read_reg(VAR_10,
          VAR_4,
          &VAR_14);
   if (VAR_13)
    return VAR_13;

   VAR_14 |= VAR_5;
   VAR_13 = VAR_12->ops.write_reg(VAR_10,
           VAR_4,
           VAR_14);
   if (VAR_13)
    return VAR_13;
  } else if (VAR_12->smart_speed == VAR_8) {
   VAR_13 = VAR_12->ops.read_reg(VAR_10,
          VAR_4,
          &VAR_14);
   if (VAR_13)
    return VAR_13;

   VAR_14 &= ~VAR_5;
   VAR_13 = VAR_12->ops.write_reg(VAR_10,
           VAR_4,
           VAR_14);
   if (VAR_13)
    return VAR_13;
  }
 } else if ((VAR_12->autoneg_advertised == VAR_2) ||
     (VAR_12->autoneg_advertised == VAR_1) ||
     (VAR_12->autoneg_advertised == VAR_0)) {
  VAR_14 |= VAR_7;
  VAR_13 = VAR_12->ops.write_reg(VAR_10, VAR_6,
          VAR_14);
  if (VAR_13)
   return VAR_13;


  VAR_13 = VAR_12->ops.read_reg(VAR_10, VAR_4,
         &VAR_14);
  if (VAR_13)
   return VAR_13;

  VAR_14 &= ~VAR_5;
  VAR_13 = VAR_12->ops.write_reg(VAR_10, VAR_4,
          VAR_14);
 }

 return VAR_13;
}
