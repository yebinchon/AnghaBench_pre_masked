
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
struct TYPE_7__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;int (* write_reg_locked ) (struct e1000_hw*,int ,scalar_t__) ;int (* read_reg_locked ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_8__ {scalar_t__ type; int autoneg_advertised; TYPE_3__ ops; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct e1000_dev_spec_ich8lan {scalar_t__ eee_lp_ability; int eee_disable; } ;
struct TYPE_5__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {scalar_t__ device_id; TYPE_4__ phy; TYPE_2__ mac; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ VAR_26 ;
 int FUNC_4 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_5 (struct e1000_hw*) ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_10 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_11 (struct e1000_hw*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;
 int FUNC_13 (struct e1000_hw*) ;
 int FUNC_14 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_15 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_16 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_17 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_18 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_19 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_20 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_21 (struct e1000_hw*,int ,scalar_t__) ;

void FUNC_22(struct e1000_hw *VAR_30)
{
 struct e1000_dev_spec_ich8lan *VAR_31 = &VAR_30->dev_spec.ich8lan;
 u32 VAR_32;
 s32 VAR_33;

 FUNC_0("e1000_suspend_workarounds_ich8lan");

 VAR_32 = FUNC_1(VAR_30, VAR_9);
 VAR_32 |= VAR_11;

 if (VAR_30->phy.type == VAR_29) {
  u16 VAR_34, VAR_35 = VAR_30->device_id;

  if ((VAR_35 == VAR_3) ||
      (VAR_35 == VAR_4) ||
      (VAR_35 == VAR_1) ||
      (VAR_35 == VAR_2) ||
      (VAR_30->mac.type >= VAR_27)) {
   u32 VAR_36 = FUNC_1(VAR_30, VAR_5);

   FUNC_2(VAR_30, VAR_5,
     VAR_36 & ~VAR_6);
  }

  VAR_33 = VAR_30->phy.ops.acquire(VAR_30);
  if (VAR_33)
   goto out;

  if (!VAR_31->eee_disable) {
   u16 VAR_37;

   VAR_33 =
       FUNC_6(VAR_30,
            VAR_16,
            &VAR_37);
   if (VAR_33)
    goto release;






   if ((VAR_37 & VAR_25) &&
       (VAR_31->eee_lp_ability &
        VAR_25) &&
       (VAR_30->phy.autoneg_advertised & VAR_0)) {
    VAR_32 &= ~(VAR_10 |
           VAR_12);


    VAR_30->phy.ops.read_reg_locked(VAR_30,
           VAR_17,
           &VAR_34);
    VAR_34 |= VAR_18;
    VAR_30->phy.ops.write_reg_locked(VAR_30,
            VAR_17,
            VAR_34);
   }
  }
  if (!(FUNC_1(VAR_30, VAR_7) &
        VAR_8)) {

   VAR_30->phy.ops.read_reg_locked(VAR_30, VAR_21,
          &VAR_34);
   VAR_34 |= VAR_22;
   VAR_30->phy.ops.write_reg_locked(VAR_30, VAR_21,
           VAR_34);




   VAR_30->phy.ops.read_reg_locked(VAR_30, VAR_23, &VAR_34);
   VAR_34 |= VAR_24;
   VAR_30->phy.ops.write_reg_locked(VAR_30, VAR_23, VAR_34);


   VAR_30->phy.ops.read_reg_locked(VAR_30, VAR_19, &VAR_34);
   VAR_34 &= ~VAR_20;
   VAR_30->phy.ops.write_reg_locked(VAR_30, VAR_19, VAR_34);
  }




  VAR_30->phy.ops.read_reg_locked(VAR_30, VAR_14, &VAR_34);
  VAR_34 |= VAR_15;
  VAR_30->phy.ops.write_reg_locked(VAR_30, VAR_14, VAR_34);

release:
  VAR_30->phy.ops.release(VAR_30);
 }
out:
 FUNC_2(VAR_30, VAR_9, VAR_32);

 if (VAR_30->mac.type == VAR_26)
  FUNC_3(VAR_30);

 if (VAR_30->mac.type >= VAR_28) {
  FUNC_4(VAR_30, VAR_13);


  if (VAR_30->mac.type == VAR_28)
   FUNC_5(VAR_30);

  VAR_33 = VAR_30->phy.ops.acquire(VAR_30);
  if (VAR_33)
   return;
  FUNC_7(VAR_30);
  VAR_30->phy.ops.release(VAR_30);
 }

 return;
}
