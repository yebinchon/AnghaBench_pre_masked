
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; int speeds_supported; scalar_t__ media_type; scalar_t__ sfp_type; int nw_mng_if_sel; scalar_t__ multispeed_fiber; } ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {int device_id; TYPE_2__ phy; TYPE_1__ mac; } ;
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
 scalar_t__ VAR_9 ;

 int VAR_10 ;


 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

s32 FUNC_1(struct ixgbe_hw *VAR_15,
           ixgbe_link_speed *VAR_16,
           bool *VAR_17)
{
 FUNC_0("ixgbe_get_link_capabilities_X550em");


 if (VAR_15->phy.type == VAR_10) {
  *VAR_17 = VAR_7;
  *VAR_16 = VAR_15->phy.speeds_supported;
  return 0;
 }


 if (VAR_15->phy.media_type == VAR_9) {


  *VAR_17 = VAR_0;


  if (VAR_15->phy.sfp_type == VAR_13 ||
      VAR_15->phy.sfp_type == VAR_14
      || VAR_15->phy.sfp_type == VAR_11 ||
      VAR_15->phy.sfp_type == VAR_12) {
   *VAR_16 = VAR_3;
   return VAR_6;
  }


  if (VAR_15->phy.multispeed_fiber)
   *VAR_16 = VAR_2 |
     VAR_3;
  else
   *VAR_16 = VAR_2;
 } else {
  switch (VAR_15->phy.type) {
  case 130:
  case 129:
   *VAR_16 = VAR_3;
   break;
  case 128:
   if (VAR_15->mac.type == VAR_8) {

    if (VAR_15->phy.nw_mng_if_sel &
        VAR_5) {
     *VAR_16 = VAR_4;
     break;
    } else if (VAR_15->device_id ==
         VAR_1) {
     *VAR_16 = VAR_3;
     break;
    }
   }

  default:
   *VAR_16 = VAR_2 |
     VAR_3;
   break;
  }
  *VAR_17 = VAR_7;
 }

 return VAR_6;
}
