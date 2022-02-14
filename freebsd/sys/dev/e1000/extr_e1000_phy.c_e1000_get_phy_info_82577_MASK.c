
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;

s32 FUNC_7(struct e1000_hw *VAR_14)
{
 struct e1000_phy_info *VAR_15 = &VAR_14->phy;
 s32 VAR_16;
 u16 VAR_17;
 bool VAR_18;

 FUNC_0("e1000_get_phy_info_82577");

 VAR_16 = FUNC_3(VAR_14, 1, 0, &VAR_18);
 if (VAR_16)
  return VAR_16;

 if (!VAR_18) {
  FUNC_1("Phy info is only valid if link is up\n");
  return -VAR_1;
 }

 VAR_15->polarity_correction = VAR_10;

 VAR_16 = FUNC_2(VAR_14);
 if (VAR_16)
  return VAR_16;

 VAR_16 = VAR_15->ops.read_reg(VAR_14, VAR_6, &VAR_17);
 if (VAR_16)
  return VAR_16;

 VAR_15->is_mdix = !!(VAR_17 & VAR_3);

 if ((VAR_17 & VAR_5) ==
     VAR_4) {
  VAR_16 = VAR_14->phy.ops.get_cable_length(VAR_14);
  if (VAR_16)
   return VAR_16;

  VAR_16 = VAR_15->ops.read_reg(VAR_14, VAR_7, &VAR_17);
  if (VAR_16)
   return VAR_16;

  VAR_15->local_rx = (VAR_17 & VAR_8)
    ? VAR_12
    : VAR_11;

  VAR_15->remote_rx = (VAR_17 & VAR_9)
     ? VAR_12
     : VAR_11;
 } else {
  VAR_15->cable_length = VAR_0;
  VAR_15->local_rx = VAR_13;
  VAR_15->remote_rx = VAR_13;
 }

 return VAR_2;
}
