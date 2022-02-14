
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;scalar_t__ (* get_cable_length ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {int is_mdix; void* remote_rx; void* local_rx; int cable_length; TYPE_1__ ops; int polarity_correction; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;

s32 FUNC_7(struct e1000_hw *VAR_13)
{
 struct e1000_phy_info *VAR_14 = &VAR_13->phy;
 s32 VAR_15;
 u16 VAR_16;
 bool VAR_17;

 FUNC_0("e1000_get_phy_info_igp");

 VAR_15 = FUNC_3(VAR_13, 1, 0, &VAR_17);
 if (VAR_15)
  return VAR_15;

 if (!VAR_17) {
  FUNC_1("Phy info is only valid if link is up\n");
  return -VAR_1;
 }

 VAR_14->polarity_correction = VAR_9;

 VAR_15 = FUNC_2(VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = VAR_14->ops.read_reg(VAR_13, VAR_2, &VAR_16);
 if (VAR_15)
  return VAR_15;

 VAR_14->is_mdix = !!(VAR_16 & VAR_3);

 if ((VAR_16 & VAR_5) ==
     VAR_4) {
  VAR_15 = VAR_14->ops.get_cable_length(VAR_13);
  if (VAR_15)
   return VAR_15;

  VAR_15 = VAR_14->ops.read_reg(VAR_13, VAR_6, &VAR_16);
  if (VAR_15)
   return VAR_15;

  VAR_14->local_rx = (VAR_16 & VAR_7)
    ? VAR_11
    : VAR_10;

  VAR_14->remote_rx = (VAR_16 & VAR_8)
     ? VAR_11
     : VAR_10;
 } else {
  VAR_14->cable_length = VAR_0;
  VAR_14->local_rx = VAR_12;
  VAR_14->remote_rx = VAR_12;
 }

 return VAR_15;
}
