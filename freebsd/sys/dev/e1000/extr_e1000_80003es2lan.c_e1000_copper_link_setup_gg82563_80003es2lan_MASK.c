
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;scalar_t__ (* commit ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {int mdix; TYPE_3__ ops; scalar_t__ disable_polarity_correction; } ;
struct TYPE_4__ {int (* check_mng_mode ) (struct e1000_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; TYPE_2__ mac; } ;
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
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
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
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_12 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_13 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_14 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_15 (struct e1000_hw*) ;
 scalar_t__ FUNC_16 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_17 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_18 (struct e1000_hw*,int ,int*) ;
 int FUNC_19 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_20(struct e1000_hw *VAR_25)
{
 struct e1000_phy_info *VAR_26 = &VAR_25->phy;
 s32 VAR_27;
 u32 VAR_28;
 u16 VAR_29;

 FUNC_0("e1000_copper_link_setup_gg82563_80003es2lan");

 VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_14, &VAR_29);
 if (VAR_27)
  return VAR_27;

 VAR_29 |= VAR_10;

 VAR_29 |= VAR_11;

 VAR_27 = VAR_25->phy.ops.write_reg(VAR_25, VAR_14, VAR_29);
 if (VAR_27)
  return VAR_27;
 VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_16, &VAR_29);
 if (VAR_27)
  return VAR_27;

 VAR_29 &= ~VAR_21;

 switch (VAR_26->mdix) {
 case 1:
  VAR_29 |= VAR_22;
  break;
 case 2:
  VAR_29 |= VAR_23;
  break;
 case 0:
 default:
  VAR_29 |= VAR_20;
  break;
 }







 VAR_29 &= ~VAR_24;
 if (VAR_26->disable_polarity_correction)
  VAR_29 |= VAR_24;

 VAR_27 = VAR_25->phy.ops.write_reg(VAR_25, VAR_16, VAR_29);
 if (VAR_27)
  return VAR_27;


 VAR_27 = VAR_25->phy.ops.commit(VAR_25);
 if (VAR_27) {
  FUNC_1("Error Resetting the PHY\n");
  return VAR_27;
 }


 VAR_28 = VAR_4;
 VAR_29 = (VAR_2 |
  VAR_3);
 VAR_27 = FUNC_5(VAR_25, VAR_28, VAR_29);
 if (VAR_27)
  return VAR_27;

 VAR_28 = VAR_5;
 VAR_27 = FUNC_4(VAR_25, VAR_28, &VAR_29);
 if (VAR_27)
  return VAR_27;
 VAR_29 |= VAR_6;
 VAR_27 = FUNC_5(VAR_25, VAR_28, VAR_29);
 if (VAR_27)
  return VAR_27;

 VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_17, &VAR_29);
 if (VAR_27)
  return VAR_27;

 VAR_29 &= ~VAR_19;
 VAR_27 = VAR_25->phy.ops.write_reg(VAR_25, VAR_17, VAR_29);
 if (VAR_27)
  return VAR_27;

 VAR_28 = FUNC_2(VAR_25, VAR_0);
 VAR_28 &= ~VAR_1;
 FUNC_3(VAR_25, VAR_0, VAR_28);

 VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_15, &VAR_29);
 if (VAR_27)
  return VAR_27;





 if (!VAR_25->mac.ops.check_mng_mode(VAR_25)) {

  VAR_29 |= VAR_18;
  VAR_27 = VAR_25->phy.ops.write_reg(VAR_25, VAR_15,
      VAR_29);
  if (VAR_27)
   return VAR_27;

  VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_13,
            &VAR_29);
  if (VAR_27)
   return VAR_27;

  VAR_29 &= ~VAR_9;
  VAR_27 = VAR_25->phy.ops.write_reg(VAR_25, VAR_13,
      VAR_29);
  if (VAR_27)
   return VAR_27;
 }




 VAR_27 = VAR_25->phy.ops.read_reg(VAR_25, VAR_12, &VAR_29);
 if (VAR_27)
  return VAR_27;

 VAR_29 |= VAR_8;
 VAR_27 = VAR_25->phy.ops.write_reg(VAR_25, VAR_12, VAR_29);
 if (VAR_27)
  return VAR_27;

 return VAR_7;
}
