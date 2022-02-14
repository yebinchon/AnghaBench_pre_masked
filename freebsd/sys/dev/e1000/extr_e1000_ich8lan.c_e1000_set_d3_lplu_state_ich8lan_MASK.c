
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {scalar_t__ type; scalar_t__ smart_speed; scalar_t__ autoneg_advertised; TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_12, bool VAR_13)
{
 struct e1000_phy_info *VAR_14 = &VAR_12->phy;
 u32 VAR_15;
 s32 VAR_16 = VAR_5;
 u16 VAR_17;

 FUNC_0("e1000_set_d3_lplu_state_ich8lan");

 VAR_15 = FUNC_1(VAR_12, VAR_3);

 if (!VAR_13) {
  VAR_15 &= ~VAR_4;
  FUNC_2(VAR_12, VAR_3, VAR_15);

  if (VAR_14->type != VAR_9)
   return VAR_5;






  if (VAR_14->smart_speed == VAR_11) {
   VAR_16 = VAR_14->ops.read_reg(VAR_12,
          VAR_6,
          &VAR_17);
   if (VAR_16)
    return VAR_16;

   VAR_17 |= VAR_7;
   VAR_16 = VAR_14->ops.write_reg(VAR_12,
           VAR_6,
           VAR_17);
   if (VAR_16)
    return VAR_16;
  } else if (VAR_14->smart_speed == VAR_10) {
   VAR_16 = VAR_14->ops.read_reg(VAR_12,
          VAR_6,
          &VAR_17);
   if (VAR_16)
    return VAR_16;

   VAR_17 &= ~VAR_7;
   VAR_16 = VAR_14->ops.write_reg(VAR_12,
           VAR_6,
           VAR_17);
   if (VAR_16)
    return VAR_16;
  }
 } else if ((VAR_14->autoneg_advertised == VAR_2) ||
     (VAR_14->autoneg_advertised == VAR_1) ||
     (VAR_14->autoneg_advertised == VAR_0)) {
  VAR_15 |= VAR_4;
  FUNC_2(VAR_12, VAR_3, VAR_15);

  if (VAR_14->type != VAR_9)
   return VAR_5;




  if (VAR_12->mac.type == VAR_8)
   FUNC_3(VAR_12);


  VAR_16 = VAR_14->ops.read_reg(VAR_12,
         VAR_6,
         &VAR_17);
  if (VAR_16)
   return VAR_16;

  VAR_17 &= ~VAR_7;
  VAR_16 = VAR_14->ops.write_reg(VAR_12,
          VAR_6,
          VAR_17);
 }

 return VAR_16;
}
