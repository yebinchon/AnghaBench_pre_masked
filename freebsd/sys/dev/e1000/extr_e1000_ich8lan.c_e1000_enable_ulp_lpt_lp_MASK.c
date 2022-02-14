
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
typedef int u16 ;
struct TYPE_9__ {scalar_t__ ulp_state; } ;
struct TYPE_10__ {TYPE_4__ ich8lan; } ;
struct TYPE_7__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_8__ {scalar_t__ type; int revision; TYPE_2__ ops; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct e1000_hw {scalar_t__ device_id; TYPE_5__ dev_spec; TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ VAR_35 ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;

s32 FUNC_9(struct e1000_hw *VAR_36, bool VAR_37)
{
 u32 VAR_38;
 s32 VAR_39 = VAR_20;
 u16 VAR_40;
 u16 VAR_41 = 0;

 if ((VAR_36->mac.type < VAR_33) ||
     (VAR_36->device_id == VAR_6) ||
     (VAR_36->device_id == VAR_7) ||
     (VAR_36->device_id == VAR_4) ||
     (VAR_36->device_id == VAR_5) ||
     (VAR_36->dev_spec.ich8lan.ulp_state == VAR_35))
  return 0;

 if (FUNC_2(VAR_36, VAR_13) & VAR_17) {

  VAR_38 = FUNC_2(VAR_36, VAR_14);
  VAR_38 |= VAR_16 | VAR_15;
  FUNC_3(VAR_36, VAR_14, VAR_38);

  goto out;
 }

 if (!VAR_37) {
  int VAR_42 = 0;


  while (!(FUNC_2(VAR_36, VAR_9) &
    VAR_12)) {

   if (FUNC_2(VAR_36, VAR_18) & VAR_19)
    return -VAR_8;

   if (VAR_42++ == 100)
    break;

   FUNC_6(50);
  }
  FUNC_1("CABLE_DISCONNECTED %s set after %dmsec\n",
    (FUNC_2(VAR_36, VAR_9) &
     VAR_12) ? "" : "not",
    VAR_42 * 50);
 }

 VAR_39 = VAR_36->phy.ops.acquire(VAR_36);
 if (VAR_39)
  goto out;


 VAR_39 = FUNC_4(VAR_36, VAR_0, &VAR_40);
 if (VAR_39)
  goto release;
 VAR_40 |= VAR_1;
 FUNC_5(VAR_36, VAR_0, VAR_40);


 VAR_38 = FUNC_2(VAR_36, VAR_2);
 VAR_38 |= VAR_3;
 FUNC_3(VAR_36, VAR_2, VAR_38);




 if ((VAR_36->phy.type == VAR_34) && (VAR_36->phy.revision == 6)) {
  VAR_39 = FUNC_4(VAR_36, VAR_23,
             &VAR_41);
  if (VAR_39)
   goto release;

  VAR_40 = VAR_41;
  VAR_40 |= VAR_25 | VAR_24;

  VAR_39 = FUNC_5(VAR_36, VAR_23,
       VAR_40);

  if (VAR_39)
   goto release;
 }




 VAR_39 = FUNC_4(VAR_36, VAR_26, &VAR_40);
 if (VAR_39)
  goto release;
 VAR_40 |= (VAR_29 |
      VAR_27);
 if (VAR_37) {
  if (FUNC_2(VAR_36, VAR_21) & VAR_22)
   VAR_40 |= VAR_32;
  else
   VAR_40 &= ~VAR_32;

  VAR_40 |= VAR_31;
  VAR_40 &= ~VAR_28;
 } else {
  VAR_40 |= VAR_28;
  VAR_40 &= ~VAR_31;
  VAR_40 &= ~VAR_32;
 }
 FUNC_5(VAR_36, VAR_26, VAR_40);


 VAR_38 = FUNC_2(VAR_36, VAR_10);
 VAR_38 |= VAR_11;
 FUNC_3(VAR_36, VAR_10, VAR_38);


 VAR_40 |= VAR_30;
 FUNC_5(VAR_36, VAR_26, VAR_40);

 if ((VAR_36->phy.type == VAR_34) && (VAR_36->phy.revision == 6) &&
     VAR_37 && (FUNC_2(VAR_36, VAR_18) & VAR_19)) {
  VAR_39 = FUNC_5(VAR_36, VAR_23,
       VAR_41);
  if (VAR_39)
   goto release;
 }

release:
 VAR_36->phy.ops.release(VAR_36);
out:
 if (VAR_39)
  FUNC_0("Error in ULP enable flow: %d\n", VAR_39);
 else
  VAR_36->dev_spec.ich8lan.ulp_state = VAR_35;

 return VAR_39;
}
