
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_6__ {scalar_t__ id; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef int s32 ;


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
 int FUNC_1 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (struct ixgbe_hw*,int ) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_19 (int) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_20 (struct ixgbe_hw*) ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 int FUNC_21 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_22 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_23 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_24 (struct ixgbe_hw*,int ,int ,int*) ;

s32 FUNC_25(struct ixgbe_hw *VAR_56)
{
 u16 VAR_57 = 0;

 FUNC_0("ixgbe_clear_hw_cntrs_generic");

 FUNC_18(VAR_56, VAR_2);
 FUNC_18(VAR_56, VAR_10);
 FUNC_18(VAR_56, VAR_3);
 FUNC_18(VAR_56, VAR_27);
 for (VAR_57 = 0; VAR_57 < 8; VAR_57++)
  FUNC_18(VAR_56, FUNC_1(VAR_57));

 FUNC_18(VAR_56, VAR_20);
 FUNC_18(VAR_56, VAR_26);
 FUNC_18(VAR_56, VAR_44);
 FUNC_18(VAR_56, VAR_18);
 FUNC_18(VAR_56, VAR_15);
 if (VAR_56->mac.type >= VAR_53) {
  FUNC_18(VAR_56, VAR_17);
  FUNC_18(VAR_56, VAR_14);
 } else {
  FUNC_18(VAR_56, VAR_16);
  FUNC_18(VAR_56, VAR_13);
 }

 for (VAR_57 = 0; VAR_57 < 8; VAR_57++) {
  FUNC_18(VAR_56, FUNC_8(VAR_57));
  FUNC_18(VAR_56, FUNC_4(VAR_57));
  if (VAR_56->mac.type >= VAR_53) {
   FUNC_18(VAR_56, FUNC_7(VAR_57));
   FUNC_18(VAR_56, FUNC_3(VAR_57));
  } else {
   FUNC_18(VAR_56, FUNC_6(VAR_57));
   FUNC_18(VAR_56, FUNC_2(VAR_57));
  }
 }
 if (VAR_56->mac.type >= VAR_53)
  for (VAR_57 = 0; VAR_57 < 8; VAR_57++)
   FUNC_18(VAR_56, FUNC_5(VAR_57));
 FUNC_18(VAR_56, VAR_35);
 FUNC_18(VAR_56, VAR_31);
 FUNC_18(VAR_56, VAR_33);
 FUNC_18(VAR_56, VAR_34);
 FUNC_18(VAR_56, VAR_30);
 FUNC_18(VAR_56, VAR_32);
 FUNC_18(VAR_56, VAR_8);
 FUNC_18(VAR_56, VAR_0);
 FUNC_18(VAR_56, VAR_24);
 FUNC_18(VAR_56, VAR_9);
 FUNC_18(VAR_56, VAR_5);
 FUNC_18(VAR_56, VAR_4);
 FUNC_18(VAR_56, VAR_7);
 FUNC_18(VAR_56, VAR_6);
 if (VAR_56->mac.type == VAR_52)
  for (VAR_57 = 0; VAR_57 < 8; VAR_57++)
   FUNC_18(VAR_56, FUNC_19(VAR_57));
 FUNC_18(VAR_56, VAR_46);
 FUNC_18(VAR_56, VAR_42);
 FUNC_18(VAR_56, VAR_45);
 FUNC_18(VAR_56, VAR_43);
 FUNC_18(VAR_56, VAR_22);
 FUNC_18(VAR_56, VAR_21);
 FUNC_18(VAR_56, VAR_23);
 FUNC_18(VAR_56, VAR_49);
 FUNC_18(VAR_56, VAR_48);
 FUNC_18(VAR_56, VAR_50);
 FUNC_18(VAR_56, VAR_51);
 FUNC_18(VAR_56, VAR_41);
 FUNC_18(VAR_56, VAR_37);
 FUNC_18(VAR_56, VAR_39);
 FUNC_18(VAR_56, VAR_40);
 FUNC_18(VAR_56, VAR_36);
 FUNC_18(VAR_56, VAR_38);
 FUNC_18(VAR_56, VAR_25);
 FUNC_18(VAR_56, VAR_1);
 for (VAR_57 = 0; VAR_57 < 16; VAR_57++) {
  FUNC_18(VAR_56, FUNC_15(VAR_57));
  FUNC_18(VAR_56, FUNC_17(VAR_57));
  if (VAR_56->mac.type >= VAR_53) {
   FUNC_18(VAR_56, FUNC_11(VAR_57));
   FUNC_18(VAR_56, FUNC_10(VAR_57));
   FUNC_18(VAR_56, FUNC_14(VAR_57));
   FUNC_18(VAR_56, FUNC_13(VAR_57));
   FUNC_18(VAR_56, FUNC_16(VAR_57));
  } else {
   FUNC_18(VAR_56, FUNC_9(VAR_57));
   FUNC_18(VAR_56, FUNC_12(VAR_57));
  }
 }

 if (VAR_56->mac.type == VAR_55 || VAR_56->mac.type == VAR_54) {
  if (VAR_56->phy.id == 0)
   FUNC_20(VAR_56);
  VAR_56->phy.ops.read_reg(VAR_56, VAR_29,
         VAR_19, &VAR_57);
  VAR_56->phy.ops.read_reg(VAR_56, VAR_28,
         VAR_19, &VAR_57);
  VAR_56->phy.ops.read_reg(VAR_56, VAR_12,
         VAR_19, &VAR_57);
  VAR_56->phy.ops.read_reg(VAR_56, VAR_11,
         VAR_19, &VAR_57);
 }

 return VAR_47;
}
