
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
typedef scalar_t__ u16 ;
struct TYPE_8__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int type; TYPE_3__ ops; int autoneg; scalar_t__ get_link_status; } ;
struct TYPE_9__ {int (* acquire ) (struct e1000_hw*) ;int (* read_reg_locked ) (struct e1000_hw*,int ,scalar_t__*) ;int (* write_reg_locked ) (struct e1000_hw*,int ,scalar_t__) ;int (* write_reg ) (struct e1000_hw*,int ,scalar_t__) ;int (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ ops; } ;
struct TYPE_6__ {scalar_t__ disable_k1_off; scalar_t__ eee_lp_ability; } ;
struct TYPE_7__ {TYPE_1__ ich8lan; } ;
struct e1000_hw {scalar_t__ device_id; TYPE_5__ phy; struct e1000_mac_info mac; TYPE_2__ dev_spec; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_4 (int,int) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (struct e1000_hw*,int) ;
 int FUNC_9 (struct e1000_hw*,int) ;
 int FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;

 int VAR_32 ;
 int VAR_33 ;

 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_12 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_13 (struct e1000_hw*,int) ;
 int FUNC_14 (struct e1000_hw*) ;
 int FUNC_15 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct e1000_hw*) ;
 int FUNC_17 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_18 (struct e1000_hw*) ;
 int FUNC_19 (struct e1000_hw*) ;
 int FUNC_20 (struct e1000_hw*,int ,int) ;
 int FUNC_21 (struct e1000_hw*) ;
 int FUNC_22 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_23 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_24 (struct e1000_hw*) ;
 int FUNC_25 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_26 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_27 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_28 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_29 (struct e1000_hw*) ;
 int FUNC_30 (struct e1000_hw*) ;
 int FUNC_31 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_32 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_33(struct e1000_hw *VAR_36)
{
 struct e1000_mac_info *VAR_37 = &VAR_36->mac;
 s32 VAR_38, VAR_39 = 0;
 u16 VAR_40, VAR_41 = 0;
 bool VAR_42;
 u16 VAR_43;

 FUNC_0("e1000_check_for_copper_link_ich8lan");






 if (!VAR_37->get_link_status)
  return VAR_13;





 VAR_38 = FUNC_12(VAR_36, 1, 0, &VAR_42);
 if (VAR_38)
  return VAR_38;

 if (VAR_36->mac.type == 128) {
  VAR_38 = FUNC_8(VAR_36, VAR_42);
  if (VAR_38)
   return VAR_38;
 }





 if ((VAR_36->mac.type >= 129) && VAR_42) {
  u16 VAR_44, VAR_45;

  FUNC_7(VAR_36, &VAR_44, &VAR_45);
  VAR_39 = FUNC_2(VAR_36, VAR_14);
  VAR_39 &= ~VAR_15;

  if (VAR_45 == VAR_18 && VAR_44 == VAR_28) {
   VAR_39 |= 0xFF;

   VAR_41 = 0;
  } else if (VAR_36->mac.type >= VAR_33 &&
      VAR_45 == VAR_17 && VAR_44 != VAR_30) {
   VAR_39 |= 0xC;
   VAR_41 = 1;
  } else {

   VAR_39 |= 0x08;
   VAR_41 = 1;
  }

  FUNC_3(VAR_36, VAR_14, VAR_39);

  VAR_38 = VAR_36->phy.ops.acquire(VAR_36);
  if (VAR_38)
   return VAR_38;

  if (VAR_36->mac.type == 129)
   VAR_40 = VAR_27;
  else
   VAR_40 = VAR_26;
  VAR_38 = FUNC_15(VAR_36, VAR_40, VAR_41);


  if (VAR_36->mac.type >= VAR_32) {
   u16 VAR_46;

   VAR_36->phy.ops.read_reg_locked(VAR_36, VAR_25,
          &VAR_46);
   VAR_46 &= ~VAR_24;
   if (VAR_44 == VAR_29 || VAR_44 == VAR_28)
    VAR_46 |= 0x3E8;
   else
    VAR_46 |= 0xFA;
   VAR_36->phy.ops.write_reg_locked(VAR_36,
           VAR_25,
           VAR_46);

   if (VAR_44 == VAR_30) {
    VAR_36->phy.ops.read_reg_locked(VAR_36, VAR_22,
           &VAR_46);

    VAR_46 |= VAR_23;

    VAR_36->phy.ops.write_reg_locked(VAR_36, VAR_22,
            VAR_46);
    }
   }
  VAR_36->phy.ops.release(VAR_36);

  if (VAR_38)
   return VAR_38;

  if (VAR_36->mac.type >= VAR_33) {
   u16 VAR_47;
   u16 VAR_48;

   if (VAR_44 == VAR_30) {
    VAR_38 = VAR_36->phy.ops.acquire(VAR_36);
    if (VAR_38)
     return VAR_38;

    VAR_38 = VAR_36->phy.ops.read_reg_locked(VAR_36,
             FUNC_4(776, 20),
             &VAR_47);
    if (VAR_38) {
     VAR_36->phy.ops.release(VAR_36);
     return VAR_38;
    }

    VAR_48 = (VAR_47 & (0x3FF << 2)) >> 2;
    if (VAR_48 < 0x18) {
     VAR_47 &= ~(0x3FF << 2);
     VAR_47 |= (0x18 << 2);
     VAR_38 =
      VAR_36->phy.ops.write_reg_locked(VAR_36,
       FUNC_4(776, 20), VAR_47);
    }
    VAR_36->phy.ops.release(VAR_36);
    if (VAR_38)
     return VAR_38;
   } else {
    VAR_38 = VAR_36->phy.ops.acquire(VAR_36);
    if (VAR_38)
     return VAR_38;

    VAR_38 = VAR_36->phy.ops.write_reg_locked(VAR_36,
            FUNC_4(776, 20),
            0xC023);
    VAR_36->phy.ops.release(VAR_36);
    if (VAR_38)
     return VAR_38;

   }
  }
 }






 if (VAR_36->mac.type >= VAR_32) {
  u32 VAR_49;

  VAR_49 = FUNC_2(VAR_36, VAR_5);
  VAR_49 &= ~VAR_7;
  VAR_49 |= VAR_6;
  FUNC_3(VAR_36, VAR_5, VAR_49);
 }


 if ((VAR_36->device_id == VAR_2) ||
     (VAR_36->device_id == VAR_3) ||
     (VAR_36->device_id == VAR_0) ||
     (VAR_36->device_id == VAR_1)) {
  VAR_38 = FUNC_9(VAR_36, VAR_42);
  if (VAR_38)
   return VAR_38;
 }
 if (VAR_36->mac.type >= VAR_32) {




  VAR_38 = FUNC_13(VAR_36, VAR_42);
  if (VAR_38)
   return VAR_38;
 }


 VAR_36->dev_spec.ich8lan.eee_lp_ability = 0;

 if (VAR_36->mac.type >= VAR_32) {
  u32 VAR_50 = FUNC_2(VAR_36, VAR_8);

  if (VAR_36->mac.type == VAR_33) {

   u32 VAR_51 = FUNC_2(VAR_36, VAR_10);

   if (VAR_51 & VAR_9)
    VAR_50 |= VAR_9;
   else
    VAR_50 &= ~VAR_9;
  }

  if (VAR_36->dev_spec.ich8lan.disable_k1_off == VAR_31)
   VAR_50 &= ~VAR_9;

  FUNC_3(VAR_36, VAR_8, VAR_50);
 }

 if (!VAR_42)
  return VAR_13;

 VAR_37->get_link_status = VAR_16;

 switch (VAR_36->mac.type) {
 case 129:
  VAR_38 = FUNC_10(VAR_36);
  if (VAR_38)
   return VAR_38;

 case 128:
  if (VAR_36->phy.type == VAR_34) {
   VAR_38 = FUNC_11(VAR_36);
   if (VAR_38)
    return VAR_38;
  }






  VAR_36->phy.ops.read_reg(VAR_36, VAR_19, &VAR_43);
  VAR_43 &= ~VAR_20;

  if ((FUNC_2(VAR_36, VAR_11) & VAR_12) !=
      VAR_12)
   VAR_43 |= (1 << VAR_21);

  VAR_36->phy.ops.write_reg(VAR_36, VAR_19, VAR_43);
  break;
 default:
  break;
 }




 FUNC_5(VAR_36);


 if (VAR_36->phy.type > VAR_35) {
  VAR_38 = FUNC_14(VAR_36);
  if (VAR_38)
   return VAR_38;
 }




 if (!VAR_37->autoneg)
  return -VAR_4;





 VAR_37->ops.config_collision_dist(VAR_36);






 VAR_38 = FUNC_6(VAR_36);
 if (VAR_38)
  FUNC_1("Error configuring flow control\n");

 return VAR_38;
}
