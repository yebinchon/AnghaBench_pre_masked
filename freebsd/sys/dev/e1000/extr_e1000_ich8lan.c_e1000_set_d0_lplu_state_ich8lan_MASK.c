
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {scalar_t__ type; scalar_t__ smart_speed; TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_10, bool VAR_11)
{
 struct e1000_phy_info *VAR_12 = &VAR_10->phy;
 u32 VAR_13;
 s32 VAR_14 = VAR_2;
 u16 VAR_15;

 FUNC_0("e1000_set_d0_lplu_state_ich8lan");

 if (VAR_12->type == VAR_6)
  return VAR_2;

 VAR_13 = FUNC_1(VAR_10, VAR_0);

 if (VAR_11) {
  VAR_13 |= VAR_1;
  FUNC_2(VAR_10, VAR_0, VAR_13);

  if (VAR_12->type != VAR_7)
   return VAR_2;




  if (VAR_10->mac.type == VAR_5)
   FUNC_3(VAR_10);


  VAR_14 = VAR_12->ops.read_reg(VAR_10,
         VAR_3,
         &VAR_15);
  if (VAR_14)
   return VAR_14;
  VAR_15 &= ~VAR_4;
  VAR_14 = VAR_12->ops.write_reg(VAR_10,
          VAR_3,
          VAR_15);
  if (VAR_14)
   return VAR_14;
 } else {
  VAR_13 &= ~VAR_1;
  FUNC_2(VAR_10, VAR_0, VAR_13);

  if (VAR_12->type != VAR_7)
   return VAR_2;






  if (VAR_12->smart_speed == VAR_9) {
   VAR_14 = VAR_12->ops.read_reg(VAR_10,
          VAR_3,
          &VAR_15);
   if (VAR_14)
    return VAR_14;

   VAR_15 |= VAR_4;
   VAR_14 = VAR_12->ops.write_reg(VAR_10,
           VAR_3,
           VAR_15);
   if (VAR_14)
    return VAR_14;
  } else if (VAR_12->smart_speed == VAR_8) {
   VAR_14 = VAR_12->ops.read_reg(VAR_10,
          VAR_3,
          &VAR_15);
   if (VAR_14)
    return VAR_14;

   VAR_15 &= ~VAR_4;
   VAR_14 = VAR_12->ops.write_reg(VAR_10,
           VAR_3,
           VAR_15);
   if (VAR_14)
    return VAR_14;
  }
 }

 return VAR_2;
}
