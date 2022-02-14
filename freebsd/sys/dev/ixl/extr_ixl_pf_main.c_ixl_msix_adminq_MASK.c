
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctx; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {TYPE_1__ vsi; int state; int admin_irq; int dev; struct i40e_hw hw; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;



 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct i40e_hw*,int ) ;
 int FUNC_8 (struct i40e_hw*,int ,int) ;

int
FUNC_9(void *VAR_29)
{
 struct ixl_pf *VAR_30 = VAR_29;
 struct i40e_hw *VAR_31 = &VAR_30->hw;
 device_t VAR_32 = VAR_30->dev;
 u32 VAR_33, VAR_34, VAR_35;
 bool VAR_36 = VAR_0;

 FUNC_0(VAR_32, "begin");

 ++VAR_30->admin_irq;

 VAR_33 = FUNC_7(VAR_31, VAR_9);




 VAR_34 = FUNC_7(VAR_31, VAR_12);


 if (VAR_33 & VAR_10) {
  VAR_34 &= ~VAR_13;
  VAR_36 = VAR_28;
 }

 if (VAR_33 & VAR_19) {
  VAR_34 &= ~VAR_15;
  FUNC_1(&VAR_30->state, VAR_25);
  VAR_36 = VAR_28;
 }

 if (VAR_33 & VAR_17) {
  VAR_34 &= ~VAR_14;
  FUNC_3(VAR_32, "Reset Requested!\n");
  VAR_35 = FUNC_7(VAR_31, VAR_3);
  VAR_35 = (VAR_35 & VAR_4)
      >> VAR_5;
  FUNC_3(VAR_32, "Reset type: ");
  switch (VAR_35) {

  case 130:
   FUNC_6("CORER\n");
   break;
  case 128:
   FUNC_6("GLOBR\n");
   break;
  case 129:
   FUNC_6("EMPR\n");
   break;
  default:
   FUNC_6("POR\n");
   break;
  }

  FUNC_2(&VAR_30->state, VAR_24);
  VAR_36 = VAR_28;
 }







 if (VAR_33 & VAR_11)
   FUNC_3(VAR_32, "ECC Error detected!\n");
 if (VAR_33 & VAR_20)
  FUNC_3(VAR_32, "PCI Exception detected!\n");
 if (VAR_33 & VAR_21)
  FUNC_3(VAR_32, "Critical Protocol Engine Error detected!\n");

 if (VAR_33 & VAR_23) {
  VAR_34 &= ~VAR_23;
  FUNC_1(&VAR_30->state,
      VAR_27 | VAR_26);
  VAR_36 = VAR_28;
 }




 if (VAR_33 & VAR_18) {
  VAR_33 = FUNC_7(VAR_31, VAR_7);
  if (VAR_33 & VAR_8) {
   FUNC_3(VAR_32, "HMC Error detected!\n");
   FUNC_3(VAR_32, "INFO 0x%08x\n", VAR_33);
   VAR_33 = FUNC_7(VAR_31, VAR_6);
   FUNC_3(VAR_32, "DATA 0x%08x\n", VAR_33);
   FUNC_8(VAR_31, VAR_7, 0);
  }
 }
 FUNC_8(VAR_31, VAR_12, VAR_34);
 FUNC_5(VAR_31);

 if (VAR_36)
  return (VAR_2);
 else
  return (VAR_1);
}
