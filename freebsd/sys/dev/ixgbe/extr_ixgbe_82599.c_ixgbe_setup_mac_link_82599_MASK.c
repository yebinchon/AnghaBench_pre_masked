
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ (* prot_autoc_write ) (struct ixgbe_hw*,int,int) ;} ;
struct TYPE_6__ {int orig_autoc; TYPE_2__ ops; scalar_t__ orig_link_settings_stored; } ;
struct TYPE_4__ {int smart_speed_active; scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*,int*) ;
 scalar_t__ VAR_27 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int,int) ;

s32 FUNC_6(struct ixgbe_hw *VAR_28,
          ixgbe_link_speed VAR_29,
          bool VAR_30)
{
 bool VAR_31 = VAR_0;
 s32 VAR_32 = VAR_26;
 u32 VAR_33, VAR_34;
 u32 VAR_35 = FUNC_2(VAR_28, VAR_1);
 u32 VAR_36 = 0;
 u32 VAR_37 = VAR_35;
 u32 VAR_38 = FUNC_2(VAR_28, VAR_2);
 u32 VAR_39 = VAR_38 & VAR_3;
 u32 VAR_40;
 u32 VAR_41;
 ixgbe_link_speed VAR_42 = VAR_25;

 FUNC_0("ixgbe_setup_mac_link_82599");


 VAR_32 = FUNC_3(VAR_28, &VAR_42, &VAR_31);
 if (VAR_32)
  goto out;

 VAR_29 &= VAR_42;

 if (VAR_29 == VAR_25) {
  VAR_32 = VAR_20;
  goto out;
 }


 if (VAR_28->mac.orig_link_settings_stored)
  VAR_36 = VAR_28->mac.orig_autoc;
 else
  VAR_36 = VAR_37;

 VAR_34 = VAR_37 & VAR_17;
 VAR_33 = VAR_37 & VAR_5;

 if (VAR_34 == VAR_14 ||
     VAR_34 == VAR_15 ||
     VAR_34 == VAR_16) {

  VAR_37 &= ~(VAR_8 | VAR_7);
  if (VAR_29 & VAR_23) {
   if (VAR_36 & VAR_9)
    VAR_37 |= VAR_9;
   if ((VAR_36 & VAR_7) &&
       (VAR_28->phy.smart_speed_active == VAR_0))
    VAR_37 |= VAR_7;
  }
  if (VAR_29 & VAR_24)
   VAR_37 |= VAR_10;
 } else if ((VAR_33 == VAR_6) &&
     (VAR_34 == VAR_13 ||
      VAR_34 == VAR_12)) {

  if ((VAR_29 == VAR_23) &&
      (VAR_39 == VAR_4)) {
   VAR_37 &= ~VAR_17;
   VAR_37 |= VAR_11;
  }
 } else if ((VAR_39 == VAR_4) &&
     (VAR_34 == VAR_11)) {

  if ((VAR_29 == VAR_24) &&
      (VAR_33 == VAR_6)) {
   VAR_37 &= ~VAR_17;
   if (VAR_31 || VAR_28->phy.type == VAR_27)
    VAR_37 |= VAR_12;
   else
    VAR_37 |= VAR_13;
  }
 }

 if (VAR_37 != VAR_35) {

  VAR_32 = VAR_28->mac.ops.prot_autoc_write(VAR_28, VAR_37, VAR_0);
  if (VAR_32 != VAR_26)
   goto out;


  if (VAR_30) {
   if (VAR_34 == VAR_14 ||
       VAR_34 == VAR_15 ||
       VAR_34 == VAR_16) {
    VAR_40 = 0;
    for (VAR_41 = 0; VAR_41 < VAR_18; VAR_41++) {
     VAR_40 =
            FUNC_2(VAR_28, VAR_21);
     if (VAR_40 & VAR_22)
      break;
     FUNC_4(100);
    }
    if (!(VAR_40 & VAR_22)) {
     VAR_32 =
      VAR_19;
     FUNC_1("Autoneg did not complete.\n");
    }
   }
  }


  FUNC_4(50);
 }

out:
 return VAR_32;
}
