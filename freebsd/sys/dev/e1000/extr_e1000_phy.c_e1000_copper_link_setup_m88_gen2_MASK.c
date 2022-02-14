
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* commit ) (struct e1000_hw*) ;scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {int mdix; scalar_t__ id; TYPE_1__ ops; scalar_t__ disable_polarity_correction; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;

s32 FUNC_8(struct e1000_hw *VAR_12)
{
 struct e1000_phy_info *VAR_13 = &VAR_12->phy;
 s32 VAR_14;
 u16 VAR_15;

 FUNC_0("e1000_copper_link_setup_m88_gen2");



 VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_4, &VAR_15);
 if (VAR_14)
  return VAR_14;
 VAR_15 &= ~VAR_6;

 switch (VAR_13->mdix) {
 case 1:
  VAR_15 |= VAR_8;
  break;
 case 2:
  VAR_15 |= VAR_7;
  break;
 case 3:

  if (VAR_13->id != VAR_10) {
   VAR_15 |= VAR_5;
   break;
  }

 case 0:
 default:
  VAR_15 |= VAR_6;
  break;
 }







 VAR_15 &= ~VAR_9;
 if (VAR_13->disable_polarity_correction)
  VAR_15 |= VAR_9;


 if (VAR_13->id == VAR_11) {
  VAR_15 &= ~VAR_2;
  VAR_14 =
      VAR_13->ops.write_reg(VAR_12, VAR_4, VAR_15);
  if (VAR_14)
   return VAR_14;

  VAR_14 = VAR_13->ops.commit(VAR_12);
  if (VAR_14) {
   FUNC_1("Error committing the PHY changes\n");
   return VAR_14;
  }
 }

 VAR_15 &= ~VAR_3;
 VAR_15 |= VAR_1;
 VAR_15 |= VAR_2;

 VAR_14 = VAR_13->ops.write_reg(VAR_12, VAR_4, VAR_15);
 if (VAR_14)
  return VAR_14;


 VAR_14 = VAR_13->ops.commit(VAR_12);
 if (VAR_14) {
  FUNC_1("Error committing the PHY changes\n");
  return VAR_14;
 }

 VAR_14 = FUNC_2(VAR_12);
 if (VAR_14)
  return VAR_14;

 return VAR_0;
}
