
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* write_reg_locked ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg_locked ) (struct e1000_hw*,int ,int*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {int type; TYPE_2__ ops; } ;
struct e1000_dev_spec_ich8lan {int eee_lp_ability; int eee_disable; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
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


 scalar_t__ FUNC_1 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int) ;
 int FUNC_7 (struct e1000_hw*) ;

s32 FUNC_8(struct e1000_hw *VAR_17)
{
 struct e1000_dev_spec_ich8lan *VAR_18 = &VAR_17->dev_spec.ich8lan;
 s32 VAR_19;
 u16 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 FUNC_0("e1000_set_eee_pchlan");

 switch (VAR_17->phy.type) {
 case 129:
  VAR_20 = VAR_7;
  VAR_21 = VAR_8;
  VAR_23 = VAR_6;
  break;
 case 128:
  VAR_20 = VAR_2;
  VAR_21 = VAR_3;
  VAR_23 = VAR_1;
  break;
 default:
  return VAR_0;
 }

 VAR_19 = VAR_17->phy.ops.acquire(VAR_17);
 if (VAR_19)
  return VAR_19;

 VAR_19 = VAR_17->phy.ops.read_reg_locked(VAR_17, VAR_10, &VAR_24);
 if (VAR_19)
  goto release;


 VAR_24 &= ~VAR_13;


 if (!VAR_18->eee_disable) {

  VAR_19 = FUNC_1(VAR_17, VAR_20,
          &VAR_18->eee_lp_ability);
  if (VAR_19)
   goto release;


  VAR_19 = FUNC_1(VAR_17, VAR_23, &VAR_22);
  if (VAR_19)
   goto release;




  if (VAR_22 & VAR_18->eee_lp_ability & VAR_4)
   VAR_24 |= VAR_11;

  if (VAR_22 & VAR_18->eee_lp_ability & VAR_5) {
   VAR_17->phy.ops.read_reg_locked(VAR_17, VAR_16, &VAR_25);
   if (VAR_25 & VAR_15)
    VAR_24 |= VAR_12;
   else




    VAR_18->eee_lp_ability &=
        ~VAR_5;
  }
 }

 if (VAR_17->phy.type == 129) {
  VAR_19 = FUNC_1(VAR_17, VAR_14,
          &VAR_25);
  if (VAR_19)
   goto release;

  VAR_25 &= ~VAR_9;
  VAR_19 = FUNC_2(VAR_17, VAR_14,
           VAR_25);
 }


 VAR_19 = FUNC_1(VAR_17, VAR_21, &VAR_25);
 if (VAR_19)
  goto release;

 VAR_19 = VAR_17->phy.ops.write_reg_locked(VAR_17, VAR_10, VAR_24);
release:
 VAR_17->phy.ops.release(VAR_17);

 return VAR_19;
}
