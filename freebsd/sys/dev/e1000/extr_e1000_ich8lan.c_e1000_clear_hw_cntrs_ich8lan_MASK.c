
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;int (* read_reg_page ) (struct e1000_hw*,int ,int *) ;scalar_t__ (* set_page ) (struct e1000_hw*,int) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
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
 int FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int *) ;
 int FUNC_5 (struct e1000_hw*,int ,int *) ;
 int FUNC_6 (struct e1000_hw*,int ,int *) ;
 int FUNC_7 (struct e1000_hw*,int ,int *) ;
 int FUNC_8 (struct e1000_hw*,int ,int *) ;
 int FUNC_9 (struct e1000_hw*,int ,int *) ;
 int FUNC_10 (struct e1000_hw*,int ,int *) ;
 int FUNC_11 (struct e1000_hw*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*,int) ;
 int FUNC_13 (struct e1000_hw*,int ,int *) ;
 int FUNC_14 (struct e1000_hw*,int ,int *) ;
 int FUNC_15 (struct e1000_hw*,int ,int *) ;
 int FUNC_16 (struct e1000_hw*,int ,int *) ;
 int FUNC_17 (struct e1000_hw*,int ,int *) ;
 int FUNC_18 (struct e1000_hw*,int ,int *) ;
 int FUNC_19 (struct e1000_hw*,int ,int *) ;

__attribute__((used)) static void FUNC_20(struct e1000_hw *VAR_31)
{
 u16 VAR_32;
 s32 VAR_33;

 FUNC_0("e1000_clear_hw_cntrs_ich8lan");

 FUNC_2(VAR_31);

 FUNC_1(VAR_31, VAR_0);
 FUNC_1(VAR_31, VAR_7);
 FUNC_1(VAR_31, VAR_8);
 FUNC_1(VAR_31, VAR_1);
 FUNC_1(VAR_31, VAR_9);
 FUNC_1(VAR_31, VAR_10);

 FUNC_1(VAR_31, VAR_5);
 FUNC_1(VAR_31, VAR_4);
 FUNC_1(VAR_31, VAR_6);

 FUNC_1(VAR_31, VAR_2);
 FUNC_1(VAR_31, VAR_3);


 if ((VAR_31->phy.type == VAR_28) ||
     (VAR_31->phy.type == VAR_29) ||
     (VAR_31->phy.type == VAR_30) ||
     (VAR_31->phy.type == VAR_27)) {
  VAR_33 = VAR_31->phy.ops.acquire(VAR_31);
  if (VAR_33)
   return;
  VAR_33 = VAR_31->phy.ops.set_page(VAR_31,
            VAR_23 << VAR_26);
  if (VAR_33)
   goto release;
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_22, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_21, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_16, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_15, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_20, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_19, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_18, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_17, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_12, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_11, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_14, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_13, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_25, &VAR_32);
  VAR_31->phy.ops.read_reg_page(VAR_31, VAR_24, &VAR_32);
release:
  VAR_31->phy.ops.release(VAR_31);
 }
}
