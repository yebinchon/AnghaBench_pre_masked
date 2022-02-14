
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;scalar_t__ (* get_cable_length ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {scalar_t__ media_type; int polarity_correction; int is_mdix; void* remote_rx; void* local_rx; int cable_length; TYPE_1__ ops; } ;
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
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int*) ;

s32 FUNC_8(struct e1000_hw *VAR_15)
{
 struct e1000_phy_info *VAR_16 = &VAR_15->phy;
 s32 VAR_17;
 u16 VAR_18;
 bool VAR_19;

 FUNC_0("e1000_get_phy_info_m88");

 if (VAR_16->media_type != VAR_14) {
  FUNC_1("Phy info is only valid for copper media\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_3(VAR_15, 1, 0, &VAR_19);
 if (VAR_17)
  return VAR_17;

 if (!VAR_19) {
  FUNC_1("Phy info is only valid if link is up\n");
  return -VAR_1;
 }

 VAR_17 = VAR_16->ops.read_reg(VAR_15, VAR_2, &VAR_18);
 if (VAR_17)
  return VAR_17;

 VAR_16->polarity_correction = !!(VAR_18 &
          VAR_4);

 VAR_17 = FUNC_2(VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = VAR_16->ops.read_reg(VAR_15, VAR_3, &VAR_18);
 if (VAR_17)
  return VAR_17;

 VAR_16->is_mdix = !!(VAR_18 & VAR_6);

 if ((VAR_18 & VAR_7) == VAR_5) {
  VAR_17 = VAR_15->phy.ops.get_cable_length(VAR_15);
  if (VAR_17)
   return VAR_17;

  VAR_17 = VAR_16->ops.read_reg(VAR_15, VAR_8, &VAR_18);
  if (VAR_17)
   return VAR_17;

  VAR_16->local_rx = (VAR_18 & VAR_9)
    ? VAR_12
    : VAR_11;

  VAR_16->remote_rx = (VAR_18 & VAR_10)
     ? VAR_12
     : VAR_11;
 } else {

  VAR_16->cable_length = VAR_0;
  VAR_16->local_rx = VAR_13;
  VAR_16->remote_rx = VAR_13;
 }

 return VAR_17;
}
