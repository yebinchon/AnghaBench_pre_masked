
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int,int*) ;scalar_t__ (* commit ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {scalar_t__ type; int mdix; scalar_t__ id; scalar_t__ revision; TYPE_1__ ops; scalar_t__ disable_polarity_correction; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;

s32 FUNC_13(struct e1000_hw *VAR_26)
{
 struct e1000_phy_info *VAR_27 = &VAR_26->phy;
 s32 VAR_28;
 u16 VAR_29;

 FUNC_0("e1000_copper_link_setup_m88");



 VAR_28 = VAR_27->ops.read_reg(VAR_26, VAR_13, &VAR_29);
 if (VAR_28)
  return VAR_28;


 if (VAR_27->type != VAR_24)
  VAR_29 |= VAR_14;
 VAR_29 &= ~VAR_16;

 switch (VAR_27->mdix) {
 case 1:
  VAR_29 |= VAR_18;
  break;
 case 2:
  VAR_29 |= VAR_17;
  break;
 case 3:
  VAR_29 |= VAR_15;
  break;
 case 0:
 default:
  VAR_29 |= VAR_16;
  break;
 }







 VAR_29 &= ~VAR_19;
 if (VAR_27->disable_polarity_correction)
  VAR_29 |= VAR_19;


 if (VAR_27->type == VAR_24) {

  if (VAR_27->id == VAR_0) {
   VAR_29 &= ~VAR_1;
   VAR_28 = VAR_27->ops.write_reg(VAR_26, VAR_13,
           VAR_29);
   if (VAR_28)
    return VAR_28;

   VAR_28 = VAR_27->ops.commit(VAR_26);
   if (VAR_28) {
    FUNC_1("Error committing the PHY changes\n");
    return VAR_28;
   }
  }

  VAR_29 |= VAR_1;
 }

 VAR_28 = VAR_27->ops.write_reg(VAR_26, VAR_13, VAR_29);
 if (VAR_28)
  return VAR_28;

 if ((VAR_27->type == VAR_25) &&
     (VAR_27->revision < VAR_3) &&
     (VAR_27->id != VAR_0)) {



  VAR_28 = VAR_27->ops.read_reg(VAR_26, VAR_12,
         &VAR_29);
  if (VAR_28)
   return VAR_28;

  VAR_29 |= VAR_11;

  if ((VAR_27->revision == VAR_2) &&
      (VAR_27->id == VAR_20)) {

   VAR_29 &= ~VAR_22;
   VAR_29 |= VAR_21;
  } else {

   VAR_29 &= ~(VAR_8 |
         VAR_10);
   VAR_29 |= (VAR_7 |
         VAR_9);
  }
  VAR_28 = VAR_27->ops.write_reg(VAR_26, VAR_12,
          VAR_29);
  if (VAR_28)
   return VAR_28;
 }

 if ((VAR_27->type == VAR_24) && (VAR_27->id == VAR_0)) {

  VAR_28 = VAR_27->ops.write_reg(VAR_26, 29, 0x0003);
  if (VAR_28)
   return VAR_28;


  VAR_28 = VAR_27->ops.write_reg(VAR_26, 30, 0x0000);
  if (VAR_28)
   return VAR_28;
 }


 VAR_28 = VAR_27->ops.commit(VAR_26);
 if (VAR_28) {
  FUNC_1("Error committing the PHY changes\n");
  return VAR_28;
 }

 if (VAR_27->type == VAR_23) {
  VAR_28 = VAR_27->ops.read_reg(VAR_26, VAR_12,
         &VAR_29);
  if (VAR_28)
   return VAR_28;


  VAR_29 |= VAR_6;
  VAR_29 &= ~VAR_5;
  VAR_28 = VAR_27->ops.write_reg(VAR_26, VAR_12,
          VAR_29);
  if (VAR_28)
   return VAR_28;
 }

 return VAR_4;
}
