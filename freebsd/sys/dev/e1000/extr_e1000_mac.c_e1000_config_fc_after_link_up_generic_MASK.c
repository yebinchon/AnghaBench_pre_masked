
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ (* get_link_up_info ) (struct e1000_hw*,scalar_t__*,scalar_t__*) ;} ;
struct e1000_mac_info {scalar_t__ autoneg; TYPE_2__ ops; scalar_t__ autoneg_failed; } ;
struct TYPE_8__ {scalar_t__ requested_mode; void* current_mode; } ;
struct TYPE_5__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_7__ {scalar_t__ media_type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_4__ fc; TYPE_3__ phy; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;

s32 FUNC_10(struct e1000_hw *VAR_25)
{
 struct e1000_mac_info *VAR_26 = &VAR_25->mac;
 s32 VAR_27 = VAR_6;
 u32 VAR_28, VAR_29, VAR_30, VAR_31;
 u16 VAR_32, VAR_33, VAR_34;
 u16 VAR_35, VAR_36;

 FUNC_0("e1000_config_fc_after_link_up_generic");





 if (VAR_26->autoneg_failed) {
  if (VAR_25->phy.media_type == VAR_23 ||
      VAR_25->phy.media_type == VAR_24)
   VAR_27 = FUNC_4(VAR_25);
 } else {
  if (VAR_25->phy.media_type == VAR_22)
   VAR_27 = FUNC_4(VAR_25);
 }

 if (VAR_27) {
  FUNC_1("Error forcing flow control settings\n");
  return VAR_27;
 }






 if ((VAR_25->phy.media_type == VAR_22) && VAR_26->autoneg) {




  VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_17, &VAR_32);
  if (VAR_27)
   return VAR_27;
  VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_17, &VAR_32);
  if (VAR_27)
   return VAR_27;

  if (!(VAR_32 & VAR_10)) {
   FUNC_1("Copper PHY and Auto Neg has not completed.\n");
   return VAR_27;
  }







  VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_15,
            &VAR_33);
  if (VAR_27)
   return VAR_27;
  VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_16,
            &VAR_34);
  if (VAR_27)
   return VAR_27;
  if ((VAR_33 & VAR_12) &&
      (VAR_34 & VAR_14)) {






   if (VAR_25->fc.requested_mode == VAR_18) {
    VAR_25->fc.current_mode = VAR_18;
    FUNC_1("Flow Control = FULL.\n");
   } else {
    VAR_25->fc.current_mode = VAR_20;
    FUNC_1("Flow Control = Rx PAUSE frames only.\n");
   }
  }







  else if (!(VAR_33 & VAR_12) &&
     (VAR_33 & VAR_11) &&
     (VAR_34 & VAR_14) &&
     (VAR_34 & VAR_13)) {
   VAR_25->fc.current_mode = VAR_21;
   FUNC_1("Flow Control = Tx PAUSE frames only.\n");
  }







  else if ((VAR_33 & VAR_12) &&
    (VAR_33 & VAR_11) &&
    !(VAR_34 & VAR_14) &&
    (VAR_34 & VAR_13)) {
   VAR_25->fc.current_mode = VAR_20;
   FUNC_1("Flow Control = Rx PAUSE frames only.\n");
  } else {



   VAR_25->fc.current_mode = VAR_19;
   FUNC_1("Flow Control = NONE.\n");
  }





  VAR_27 = VAR_26->ops.get_link_up_info(VAR_25, &VAR_35, &VAR_36);
  if (VAR_27) {
   FUNC_1("Error getting link speed and duplex\n");
   return VAR_27;
  }

  if (VAR_36 == VAR_9)
   VAR_25->fc.current_mode = VAR_19;




  VAR_27 = FUNC_4(VAR_25);
  if (VAR_27) {
   FUNC_1("Error forcing flow control settings\n");
   return VAR_27;
  }
 }






 if ((VAR_25->phy.media_type == VAR_24) &&
     VAR_26->autoneg) {



  VAR_28 = FUNC_2(VAR_25, VAR_4);

  if (!(VAR_28 & VAR_5)) {
   FUNC_1("PCS Auto Neg has not completed.\n");
   return VAR_27;
  }







  VAR_29 = FUNC_2(VAR_25, VAR_0);
  VAR_30 = FUNC_2(VAR_25, VAR_3);
  if ((VAR_29 & VAR_8) &&
      (VAR_30 & VAR_8)) {






   if (VAR_25->fc.requested_mode == VAR_18) {
    VAR_25->fc.current_mode = VAR_18;
    FUNC_1("Flow Control = FULL.\n");
   } else {
    VAR_25->fc.current_mode = VAR_20;
    FUNC_1("Flow Control = Rx PAUSE frames only.\n");
   }
  }







  else if (!(VAR_29 & VAR_8) &&
     (VAR_29 & VAR_7) &&
     (VAR_30 & VAR_8) &&
     (VAR_30 & VAR_7)) {
   VAR_25->fc.current_mode = VAR_21;
   FUNC_1("Flow Control = Tx PAUSE frames only.\n");
  }







  else if ((VAR_29 & VAR_8) &&
    (VAR_29 & VAR_7) &&
    !(VAR_30 & VAR_8) &&
    (VAR_30 & VAR_7)) {
   VAR_25->fc.current_mode = VAR_20;
   FUNC_1("Flow Control = Rx PAUSE frames only.\n");
  } else {



   VAR_25->fc.current_mode = VAR_19;
   FUNC_1("Flow Control = NONE.\n");
  }




  VAR_31 = FUNC_2(VAR_25, VAR_1);
  VAR_31 |= VAR_2;
  FUNC_3(VAR_25, VAR_1, VAR_31);

  VAR_27 = FUNC_4(VAR_25);
  if (VAR_27) {
   FUNC_1("Error forcing flow control settings\n");
   return VAR_27;
  }
 }

 return VAR_6;
}
