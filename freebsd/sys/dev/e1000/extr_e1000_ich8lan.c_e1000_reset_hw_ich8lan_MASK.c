
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_6__ {scalar_t__ (* get_cfg_done ) (struct e1000_hw*) ;int (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct e1000_dev_spec_ich8lan {int nvm_k1_enabled; } ;
struct TYPE_5__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_3__ phy; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


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
 int VAR_19 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int,int*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct e1000_hw*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_28)
{
 struct e1000_dev_spec_ich8lan *VAR_29 = &VAR_28->dev_spec.ich8lan;
 u16 VAR_30;
 u32 VAR_31, VAR_32;
 s32 VAR_33;

 FUNC_0("e1000_reset_hw_ich8lan");




 VAR_33 = FUNC_6(VAR_28);
 if (VAR_33)
  FUNC_1("PCI-E Master disable polling has failed.\n");

 FUNC_1("Masking off all interrupts\n");
 FUNC_4(VAR_28, VAR_10, 0xffffffff);





 FUNC_4(VAR_28, VAR_19, 0);
 FUNC_4(VAR_28, VAR_21, VAR_22);
 FUNC_3(VAR_28);

 FUNC_10(10);


 if (VAR_28->mac.type == VAR_25) {

  FUNC_4(VAR_28, VAR_15, VAR_16);

  FUNC_4(VAR_28, VAR_17, VAR_18);
 }

 if (VAR_28->mac.type == VAR_27) {

  VAR_33 = FUNC_9(VAR_28, VAR_13, 1, &VAR_30);
  if (VAR_33)
   return VAR_33;

  if (VAR_30 & VAR_14)
   VAR_29->nvm_k1_enabled = VAR_24;
  else
   VAR_29->nvm_k1_enabled = VAR_23;
 }

 VAR_31 = FUNC_2(VAR_28, VAR_1);

 if (!VAR_28->phy.ops.check_reset_block(VAR_28)) {




  VAR_31 |= VAR_2;




  if ((VAR_28->mac.type == VAR_26) &&
      !(FUNC_2(VAR_28, VAR_7) & VAR_8))
   FUNC_7(VAR_28, VAR_24);
 }
 VAR_33 = FUNC_5(VAR_28);
 FUNC_1("Issuing a global reset to ich8lan\n");
 FUNC_4(VAR_28, VAR_1, (VAR_31 | VAR_3));

 FUNC_10(20);


 if (VAR_28->mac.type == VAR_26) {
  VAR_32 = FUNC_2(VAR_28, VAR_4);
  VAR_32 &= ~VAR_6;
  VAR_32 |= VAR_5;
  FUNC_4(VAR_28, VAR_4, VAR_32);
 }


 if (VAR_31 & VAR_2) {
  VAR_33 = VAR_28->phy.ops.get_cfg_done(VAR_28);
  if (VAR_33)
   return VAR_33;

  VAR_33 = FUNC_8(VAR_28);
  if (VAR_33)
   return VAR_33;
 }





 if (VAR_28->mac.type == VAR_27)
  FUNC_4(VAR_28, VAR_0, 0x65656565);

 FUNC_4(VAR_28, VAR_10, 0xffffffff);
 FUNC_2(VAR_28, VAR_9);

 VAR_32 = FUNC_2(VAR_28, VAR_11);
 VAR_32 |= VAR_12;
 FUNC_4(VAR_28, VAR_11, VAR_32);

 return VAR_20;
}
