
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;int (* setup_link ) (struct ixgbe_hw*,int,int ) ;} ;
struct TYPE_6__ {TYPE_2__ ops; int autotry_restart; } ;
struct TYPE_4__ {scalar_t__ media_type; scalar_t__ multispeed_fiber; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct adapter {int advertise; struct ixgbe_hw hw; int ctx; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct adapter *VAR_12, int VAR_13)
{
 device_t VAR_14 = FUNC_1(VAR_12->ctx);
 struct ixgbe_hw *VAR_15;
 ixgbe_link_speed VAR_16 = 0;
 ixgbe_link_speed VAR_17 = 0;
 s32 VAR_18 = VAR_7;
 bool VAR_19 = VAR_2;


 if (VAR_12->advertise == VAR_13)
  return (0);

 VAR_15 = &VAR_12->hw;


 if (VAR_15->phy.media_type == VAR_10)
  return (VAR_1);

 if (!((VAR_15->phy.media_type == VAR_11) ||
       (VAR_15->phy.multispeed_fiber))) {
  FUNC_0(VAR_14, "Advertised speed can only be set on copper or multispeed fiber media types.\n");
  return (VAR_0);
 }

 if (VAR_13 < 0x1 || VAR_13 > 0xF) {
  FUNC_0(VAR_14, "Invalid advertised speed; valid modes are 0x1 through 0xF\n");
  return (VAR_0);
 }

 if (VAR_15->mac.ops.get_link_capabilities) {
  VAR_18 = VAR_15->mac.ops.get_link_capabilities(VAR_15, &VAR_17,
      &VAR_19);
  if (VAR_18 != VAR_8) {
   FUNC_0(VAR_14, "Unable to determine supported advertise speeds\n");
   return (VAR_1);
  }
 }


 if (VAR_13 & 0x1) {
  if (!(VAR_17 & VAR_3)) {
   FUNC_0(VAR_14, "Interface does not support 100Mb advertised speed\n");
   return (VAR_0);
  }
  VAR_16 |= VAR_3;
 }
 if (VAR_13 & 0x2) {
  if (!(VAR_17 & VAR_6)) {
   FUNC_0(VAR_14, "Interface does not support 1Gb advertised speed\n");
   return (VAR_0);
  }
  VAR_16 |= VAR_6;
 }
 if (VAR_13 & 0x4) {
  if (!(VAR_17 & VAR_4)) {
   FUNC_0(VAR_14, "Interface does not support 10Gb advertised speed\n");
   return (VAR_0);
  }
  VAR_16 |= VAR_4;
 }
 if (VAR_13 & 0x8) {
  if (!(VAR_17 & VAR_5)) {
   FUNC_0(VAR_14, "Interface does not support 10Mb advertised speed\n");
   return (VAR_0);
  }
  VAR_16 |= VAR_5;
 }

 VAR_15->mac.autotry_restart = VAR_9;
 VAR_15->mac.ops.setup_link(VAR_15, VAR_16, VAR_9);
 VAR_12->advertise = VAR_13;

 return (0);
}
