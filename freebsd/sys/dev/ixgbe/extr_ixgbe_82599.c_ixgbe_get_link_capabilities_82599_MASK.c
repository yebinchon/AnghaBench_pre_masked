
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ sfp_type; scalar_t__ media_type; scalar_t__ multispeed_fiber; } ;
struct TYPE_3__ {int orig_autoc; scalar_t__ orig_link_settings_stored; } ;
struct ixgbe_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
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
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;

s32 FUNC_2(struct ixgbe_hw *VAR_20,
          ixgbe_link_speed *VAR_21,
          bool *VAR_22)
{
 s32 VAR_23 = VAR_11;
 u32 VAR_24 = 0;

 FUNC_0("ixgbe_get_link_capabilities_82599");



 if (VAR_20->phy.sfp_type == VAR_14 ||
     VAR_20->phy.sfp_type == VAR_15 ||
     VAR_20->phy.sfp_type == VAR_16 ||
     VAR_20->phy.sfp_type == VAR_17 ||
     VAR_20->phy.sfp_type == VAR_18 ||
     VAR_20->phy.sfp_type == VAR_19) {
  *VAR_21 = VAR_9;
  *VAR_22 = VAR_12;
  goto out;
 }






 if (VAR_20->mac.orig_link_settings_stored)
  VAR_24 = VAR_20->mac.orig_autoc;
 else
  VAR_24 = FUNC_1(VAR_20, VAR_1);

 switch (VAR_24 & VAR_5) {
 case 132:
  *VAR_21 = VAR_9;
  *VAR_22 = VAR_0;
  break;

 case 135:
  *VAR_21 = VAR_8;
  *VAR_22 = VAR_0;
  break;

 case 133:
  *VAR_21 = VAR_9;
  *VAR_22 = VAR_12;
  break;

 case 134:
  *VAR_21 = VAR_8;
  *VAR_22 = VAR_0;
  break;

 case 131:
 case 130:
  *VAR_21 = VAR_10;
  if (VAR_24 & VAR_2)
   *VAR_21 |= VAR_8;
  if (VAR_24 & VAR_3)
   *VAR_21 |= VAR_8;
  if (VAR_24 & VAR_4)
   *VAR_21 |= VAR_9;
  *VAR_22 = VAR_12;
  break;

 case 129:
  *VAR_21 = VAR_7;
  if (VAR_24 & VAR_2)
   *VAR_21 |= VAR_8;
  if (VAR_24 & VAR_3)
   *VAR_21 |= VAR_8;
  if (VAR_24 & VAR_4)
   *VAR_21 |= VAR_9;
  *VAR_22 = VAR_12;
  break;

 case 128:
  *VAR_21 = VAR_9 | VAR_7;
  *VAR_22 = VAR_0;
  break;

 default:
  VAR_23 = VAR_6;
  goto out;
  break;
 }

 if (VAR_20->phy.multispeed_fiber) {
  *VAR_21 |= VAR_8 |
     VAR_9;




  if (VAR_20->phy.media_type == VAR_13)
   *VAR_22 = VAR_0;
  else
   *VAR_22 = VAR_12;
 }

out:
 return VAR_23;
}
