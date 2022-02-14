
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ type; int serdes_has_link; int addr; int get_link_status; } ;
struct TYPE_6__ {int media_changed; } ;
struct TYPE_7__ {TYPE_2__ _82575; } ;
struct TYPE_5__ {int media_type; scalar_t__ id; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_3__ dev_spec; TYPE_1__ phy; } ;
struct adapter {int link_active; scalar_t__ link_speed; scalar_t__ link_duplex; scalar_t__ intr_type; struct e1000_hw hw; int flags; scalar_t__ smartspeed; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;




 scalar_t__ VAR_27 ;
 int FUNC_9 (struct e1000_hw*,int ,int ) ;
 scalar_t__ VAR_28 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct adapter*) ;
 int FUNC_12 (int ) ;
 struct adapter* FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ) ;
 scalar_t__ VAR_29 ;
 int FUNC_15 (struct adapter*) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void
FUNC_17(if_ctx_t VAR_30)
{
 struct adapter *VAR_31 = FUNC_13(VAR_30);
 struct e1000_hw *VAR_32 = &VAR_31->hw;
 device_t VAR_33 = FUNC_12(VAR_30);
 u32 VAR_34, VAR_35, VAR_36;

 VAR_34 = VAR_35 = VAR_36 = 0;

 switch (VAR_32->phy.media_type) {
 case 131:
  if (VAR_32->mac.get_link_status) {
   if (VAR_32->mac.type == VAR_27)
    FUNC_16(50);

   FUNC_6(VAR_32);
   VAR_34 = !VAR_32->mac.get_link_status;
   if (VAR_34)
    FUNC_5(VAR_32);
  } else {
   VAR_34 = VAR_19;
  }
  break;
 case 130:
  FUNC_6(VAR_32);
  VAR_34 = (FUNC_0(VAR_32, VAR_5) &
       VAR_6);
  break;
 case 129:
  FUNC_6(VAR_32);
  VAR_34 = VAR_31->hw.mac.serdes_has_link;
  break;

 case 128:
  FUNC_6(VAR_32);
  VAR_34 = !VAR_32->mac.get_link_status;

 default:
  break;
 }


 if (VAR_32->mac.type == VAR_26) {
  VAR_35 = FUNC_0(VAR_32, VAR_7);
  VAR_36 = FUNC_0(VAR_32, VAR_0);
 }


 if (VAR_34 && (VAR_31->link_active == 0)) {
  FUNC_8(VAR_32, &VAR_31->link_speed,
      &VAR_31->link_duplex);

  if ((VAR_31->link_speed != VAR_17) &&
      ((VAR_32->mac.type == VAR_21) ||
      (VAR_32->mac.type == VAR_22))) {
   int VAR_37;
   VAR_37 = FUNC_0(VAR_32, FUNC_1(0));
   VAR_37 &= ~VAR_18;
   FUNC_2(VAR_32, FUNC_1(0), VAR_37);
  }
  if (VAR_20)
   FUNC_4(VAR_33, "Link is up %d Mbps %s\n",
       VAR_31->link_speed,
       ((VAR_31->link_duplex == VAR_10) ?
       "Full Duplex" : "Half Duplex"));
  VAR_31->link_active = 1;
  VAR_31->smartspeed = 0;
  if ((VAR_36 & VAR_2) ==
      VAR_1 &&
      (VAR_35 & VAR_8))
   FUNC_4(VAR_33, "Link: thermal downshift\n");

  if (((VAR_32->mac.type == VAR_24) ||
      (VAR_32->mac.type == VAR_25)) &&
      (VAR_32->phy.id == VAR_11))
   FUNC_16(VAR_12);

  if ((VAR_32->dev_spec._82575.media_changed) &&
   (VAR_31->hw.mac.type >= VAR_29)) {
   VAR_32->dev_spec._82575.media_changed = 0;
   VAR_31->flags |= VAR_14;
   FUNC_10(VAR_30);
  }
  FUNC_14(VAR_30, VAR_16,
      FUNC_3(VAR_31->link_speed));
 } else if (!VAR_34 && (VAR_31->link_active == 1)) {
  VAR_31->link_speed = 0;
  VAR_31->link_duplex = 0;
  VAR_31->link_active = 0;
  FUNC_14(VAR_30, VAR_15, 0);
 }
 FUNC_11(VAR_31);


 if (VAR_32->mac.type == VAR_21 && FUNC_7(VAR_32))
  FUNC_9(VAR_32, VAR_32->mac.addr, 0);

 if (VAR_32->mac.type < VAR_28)
  FUNC_15(VAR_31);
 else if (VAR_32->mac.type == VAR_23 &&
     VAR_31->intr_type == VAR_13)
  FUNC_2(&VAR_31->hw, VAR_3, VAR_9 |
      VAR_4);
}
