
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int (* get_link_up_info ) (struct e1000_hw*,scalar_t__*,scalar_t__*) ;int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int forced_speed_duplex; scalar_t__ type; TYPE_1__ ops; int autoneg; scalar_t__ get_link_status; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_9 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct e1000_hw*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;
 int FUNC_13 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_14(struct e1000_hw *VAR_15)
{
 struct e1000_mac_info *VAR_16 = &VAR_15->mac;
 u32 VAR_17, VAR_18;
 s32 VAR_19;
 u16 VAR_20, VAR_21;
 bool VAR_22;

 FUNC_0("e1000_check_for_copper_link_82543");

 if (!VAR_16->get_link_status) {
  VAR_19 = VAR_9;
  goto out;
 }

 VAR_19 = FUNC_7(VAR_15, 1, 0, &VAR_22);
 if (VAR_19)
  goto out;

 if (!VAR_22)
  goto out;

 VAR_16->get_link_status = VAR_10;

 FUNC_4(VAR_15);





 if (!VAR_16->autoneg) {
  if (VAR_16->forced_speed_duplex & VAR_0) {
   FUNC_3(VAR_15, VAR_5, 0xFFFFFFFF);
   VAR_19 = FUNC_8(VAR_15);
   VAR_17 = FUNC_2(VAR_15, VAR_2);
   FUNC_3(VAR_15, VAR_3, (VAR_17 & ~VAR_4));
   FUNC_3(VAR_15, VAR_6, VAR_11);
  }

  VAR_19 = -VAR_1;
  goto out;
 }
 if (VAR_16->type == VAR_14)
  VAR_15->mac.ops.config_collision_dist(VAR_15);
 else {
  VAR_19 = FUNC_6(VAR_15);
  if (VAR_19) {
   FUNC_1("Error configuring MAC to PHY settings\n");
   goto out;
  }
 }







 VAR_19 = FUNC_5(VAR_15);
 if (VAR_19)
  FUNC_1("Error configuring flow control\n");
 if (FUNC_10(VAR_15)) {
  VAR_19 = VAR_16->ops.get_link_up_info(VAR_15, &VAR_20, &VAR_21);
  if (VAR_19) {
   FUNC_1("Error getting link speed and duplex\n");
   return VAR_19;
  }
  if (VAR_20 != VAR_12) {




   if (FUNC_11(VAR_15)) {




    FUNC_9(VAR_15, VAR_10);
    VAR_18 = FUNC_2(VAR_15, VAR_7);
    VAR_18 &= ~VAR_8;
    FUNC_3(VAR_15, VAR_7, VAR_18);
   }
  } else {







   if (!FUNC_11(VAR_15)) {
    FUNC_9(VAR_15, VAR_13);
    VAR_18 = FUNC_2(VAR_15, VAR_7);
    VAR_18 |= VAR_8;
    FUNC_3(VAR_15, VAR_7, VAR_18);
   }
  }
 }
out:
 return VAR_19;
}
