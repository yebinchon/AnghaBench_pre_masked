
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* check_overtemp ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ ops; } ;
struct TYPE_5__ {int type; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
struct adapter {int feat_en; int task_requests; int ctx; struct ixgbe_hw hw; int fdir_reinit; int link_irq; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
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
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int VAR_26 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct adapter*,int,int ) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*) ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;

 scalar_t__ VAR_30 ;
 int FUNC_9 (struct ixgbe_hw*) ;
 int FUNC_10 (struct ixgbe_hw*) ;

__attribute__((used)) static int
FUNC_11(void *VAR_31)
{
 struct adapter *VAR_32 = VAR_31;
 struct ixgbe_hw *VAR_33 = &VAR_32->hw;
 u32 VAR_34, VAR_35;
 s32 VAR_36;

 ++VAR_32->link_irq;


 FUNC_3(VAR_33, VAR_12, VAR_14);


 VAR_34 = FUNC_2(VAR_33, VAR_11);

 VAR_34 &= ~VAR_9;

 FUNC_3(VAR_33, VAR_2, VAR_34);


 if (VAR_34 & VAR_7) {
  FUNC_3(VAR_33, VAR_12, VAR_13);
  VAR_32->task_requests |= VAR_21;
 }

 if (VAR_32->hw.mac.type != VAR_27) {
  if ((VAR_32->feat_en & VAR_17) &&
      (VAR_34 & VAR_4)) {

   if (!FUNC_4(&VAR_32->fdir_reinit, 0, 1))
    return (VAR_0);

   FUNC_3(VAR_33, VAR_12, VAR_4);
   VAR_32->task_requests |= VAR_20;
  } else
   if (VAR_34 & VAR_3) {
    FUNC_5(FUNC_6(VAR_32->ctx),
       "\nCRITICAL: ECC ERROR!! Please Reboot!!\n");
    FUNC_3(VAR_33, VAR_2, VAR_3);
   }


  if (VAR_32->feat_en & VAR_19) {
   switch (VAR_32->hw.mac.type) {
   case 128:
    if (!(VAR_34 & VAR_6))
     break;
    FUNC_3(VAR_33, VAR_12,
        VAR_6);
    FUNC_3(VAR_33, VAR_2,
        VAR_6);
    VAR_36 = VAR_33->phy.ops.check_overtemp(VAR_33);
    if (VAR_36 != VAR_15)
     break;
    FUNC_5(FUNC_6(VAR_32->ctx),
        "\nCRITICAL: OVER TEMP!! PHY IS SHUT DOWN!!\n");
    FUNC_5(FUNC_6(VAR_32->ctx),
        "System shutdown required!\n");
    break;
   default:
    if (!(VAR_34 & VAR_10))
     break;
    VAR_36 = VAR_33->phy.ops.check_overtemp(VAR_33);
    if (VAR_36 != VAR_15)
     break;
    FUNC_5(FUNC_6(VAR_32->ctx),
        "\nCRITICAL: OVER TEMP!! PHY IS SHUT DOWN!!\n");
    FUNC_5(FUNC_6(VAR_32->ctx),
        "System shutdown required!\n");
    FUNC_3(VAR_33, VAR_2, VAR_10);
    break;
   }
  }


  if ((VAR_32->feat_en & VAR_18) &&
      (VAR_34 & VAR_8))
   VAR_32->task_requests |= VAR_22;
 }

 if (FUNC_8(VAR_33)) {

  if (VAR_33->mac.type >= VAR_29)
   VAR_35 = VAR_5;
  else
   VAR_35 = FUNC_1(VAR_33);

  if (VAR_34 & VAR_35) {
   FUNC_3(VAR_33, VAR_2, VAR_35);
   VAR_32->task_requests |= VAR_23;
  }

  if ((VAR_33->mac.type == VAR_28) &&
      (VAR_34 & FUNC_0(VAR_33))) {
   FUNC_3(VAR_33, VAR_2,
       FUNC_0(VAR_33));
   VAR_32->task_requests |= VAR_24;
  }
 }


 if (VAR_32->feat_en & VAR_16) {
  FUNC_7(VAR_32, VAR_34, VAR_26);
  FUNC_3(VAR_33, VAR_2, FUNC_0(VAR_33));
 }


 if ((VAR_33->phy.type == VAR_30) &&
     (VAR_34 & VAR_5)) {
  FUNC_3(VAR_33, VAR_2, VAR_5);
  VAR_32->task_requests |= VAR_25;
 }

 return (VAR_32->task_requests != 0) ? VAR_1 : VAR_0;
}
