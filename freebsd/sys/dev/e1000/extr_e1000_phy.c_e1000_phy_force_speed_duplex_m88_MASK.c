
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;scalar_t__ (* commit ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {scalar_t__ type; int id; TYPE_1__ ops; scalar_t__ autoneg_wait_to_complete; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
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
 int FUNC_3 (struct e1000_hw*,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_13 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_14 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_15 (struct e1000_hw*,int ,int*) ;

s32 FUNC_16(struct e1000_hw *VAR_13)
{
 struct e1000_phy_info *VAR_14 = &VAR_13->phy;
 s32 VAR_15;
 u16 VAR_16;
 bool VAR_17;

 FUNC_0("e1000_phy_force_speed_duplex_m88");


 if (VAR_14->type != VAR_11) {



  VAR_15 = VAR_14->ops.read_reg(VAR_13, VAR_5,
         &VAR_16);
  if (VAR_15)
   return VAR_15;

  VAR_16 &= ~VAR_7;
  VAR_15 = VAR_14->ops.write_reg(VAR_13, VAR_5,
          VAR_16);
  if (VAR_15)
   return VAR_15;

  FUNC_2("M88E1000 PSCR: %X\n", VAR_16);
 }

 VAR_15 = VAR_14->ops.read_reg(VAR_13, VAR_8, &VAR_16);
 if (VAR_15)
  return VAR_15;

 FUNC_3(VAR_13, &VAR_16);

 VAR_15 = VAR_14->ops.write_reg(VAR_13, VAR_8, VAR_16);
 if (VAR_15)
  return VAR_15;


 VAR_15 = VAR_13->phy.ops.commit(VAR_13);
 if (VAR_15)
  return VAR_15;

 if (VAR_14->autoneg_wait_to_complete) {
  FUNC_1("Waiting for forced speed/duplex link on M88 phy.\n");

  VAR_15 = FUNC_4(VAR_13, VAR_9,
           100000, &VAR_17);
  if (VAR_15)
   return VAR_15;

  if (!VAR_17) {
   bool VAR_18 = VAR_10;

   switch (VAR_13->phy.id) {
   case 132:
   case 130:
   case 131:
   case 128:
   case 129:
   case 133:
    VAR_18 = VAR_1;
    break;
   default:
    if (VAR_13->phy.type != VAR_12)
     VAR_18 = VAR_1;
    break;
   }

   if (!VAR_18) {
    FUNC_1("Link taking longer than expected.\n");
   } else {



    VAR_15 = VAR_14->ops.write_reg(VAR_13,
      VAR_4,
      0x001d);
    if (VAR_15)
     return VAR_15;
    VAR_15 = FUNC_5(VAR_13);
    if (VAR_15)
     return VAR_15;
   }
  }


  VAR_15 = FUNC_4(VAR_13, VAR_9,
           100000, &VAR_17);
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_13->phy.type != VAR_12)
  return VAR_0;

 if (VAR_13->phy.id == 132 ||
  VAR_13->phy.id == 130 ||
  VAR_13->phy.id == 131)
  return VAR_0;
 if (VAR_13->phy.id == 133)
  return VAR_0;
 if ((VAR_13->phy.id == 128) ||
     (VAR_13->phy.id == 129))
  return VAR_0;
 VAR_15 = VAR_14->ops.read_reg(VAR_13, VAR_3, &VAR_16);
 if (VAR_15)
  return VAR_15;





 VAR_16 |= VAR_2;
 VAR_15 = VAR_14->ops.write_reg(VAR_13, VAR_3, VAR_16);
 if (VAR_15)
  return VAR_15;




 VAR_15 = VAR_14->ops.read_reg(VAR_13, VAR_5, &VAR_16);
 if (VAR_15)
  return VAR_15;

 VAR_16 |= VAR_6;
 VAR_15 = VAR_14->ops.write_reg(VAR_13, VAR_5, VAR_16);

 return VAR_15;
}
