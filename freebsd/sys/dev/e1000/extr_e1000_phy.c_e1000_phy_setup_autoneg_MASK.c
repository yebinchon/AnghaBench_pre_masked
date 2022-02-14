
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int autoneg_advertised; int autoneg_mask; TYPE_2__ ops; } ;
struct TYPE_3__ {int current_mode; } ;
struct e1000_hw {TYPE_1__ fc; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;




 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int) ;

s32 FUNC_7(struct e1000_hw *VAR_17)
{
 struct e1000_phy_info *VAR_18 = &VAR_17->phy;
 s32 VAR_19;
 u16 VAR_20;
 u16 VAR_21 = 0;

 FUNC_0("e1000_phy_setup_autoneg");

 VAR_18->autoneg_advertised &= VAR_18->autoneg_mask;


 VAR_19 = VAR_18->ops.read_reg(VAR_17, VAR_16, &VAR_20);
 if (VAR_19)
  return VAR_19;

 if (VAR_18->autoneg_mask & VAR_0) {

  VAR_19 = VAR_18->ops.read_reg(VAR_17, VAR_15,
         &VAR_21);
  if (VAR_19)
   return VAR_19;
 }
 VAR_20 &= ~(VAR_9 |
     VAR_10 |
     VAR_11 |
     VAR_12);
 VAR_21 &= ~(VAR_7 | VAR_6);

 FUNC_2("autoneg_advertised %x\n", VAR_18->autoneg_advertised);


 if (VAR_18->autoneg_advertised & VAR_5) {
  FUNC_1("Advertise 10mb Half duplex\n");
  VAR_20 |= VAR_12;
 }


 if (VAR_18->autoneg_advertised & VAR_4) {
  FUNC_1("Advertise 10mb Full duplex\n");
  VAR_20 |= VAR_11;
 }


 if (VAR_18->autoneg_advertised & VAR_3) {
  FUNC_1("Advertise 100mb Half duplex\n");
  VAR_20 |= VAR_10;
 }


 if (VAR_18->autoneg_advertised & VAR_2) {
  FUNC_1("Advertise 100mb Full duplex\n");
  VAR_20 |= VAR_9;
 }


 if (VAR_18->autoneg_advertised & VAR_1)
  FUNC_1("Advertise 1000mb Half duplex request denied!\n");


 if (VAR_18->autoneg_advertised & VAR_0) {
  FUNC_1("Advertise 1000mb Full duplex\n");
  VAR_21 |= VAR_6;
 }
 switch (VAR_17->fc.current_mode) {
 case 130:



  VAR_20 &= ~(VAR_13 | VAR_14);
  break;
 case 129:
  VAR_20 |= (VAR_13 | VAR_14);
  break;
 case 128:



  VAR_20 |= VAR_13;
  VAR_20 &= ~VAR_14;
  break;
 case 131:



  VAR_20 |= (VAR_13 | VAR_14);
  break;
 default:
  FUNC_1("Flow control param set incorrectly\n");
  return -VAR_8;
 }

 VAR_19 = VAR_18->ops.write_reg(VAR_17, VAR_16, VAR_20);
 if (VAR_19)
  return VAR_19;

 FUNC_2("Auto-Neg Advertising %x\n", VAR_20);

 if (VAR_18->autoneg_mask & VAR_0)
  VAR_19 = VAR_18->ops.write_reg(VAR_17, VAR_15,
          VAR_21);

 return VAR_19;
}
