
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int polarity_correction; int is_mdix; void* remote_rx; void* local_rx; int cable_length; TYPE_1__ ops; int cable_polarity; } ;
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
 void* VAR_8 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int ,int*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int*) ;

s32 FUNC_6(struct e1000_hw *VAR_11)
{
 struct e1000_phy_info *VAR_12 = &VAR_11->phy;
 s32 VAR_13;
 u16 VAR_14;
 bool VAR_15;

 FUNC_0("e1000_get_phy_info_ife");

 VAR_13 = FUNC_3(VAR_11, 1, 0, &VAR_15);
 if (VAR_13)
  return VAR_13;

 if (!VAR_15) {
  FUNC_1("Phy info is only valid if link is up\n");
  return -VAR_1;
 }

 VAR_13 = VAR_12->ops.read_reg(VAR_11, VAR_4, &VAR_14);
 if (VAR_13)
  return VAR_13;
 VAR_12->polarity_correction = !(VAR_14 & VAR_6);

 if (VAR_12->polarity_correction) {
  VAR_13 = FUNC_2(VAR_11);
  if (VAR_13)
   return VAR_13;
 } else {

  VAR_12->cable_polarity = ((VAR_14 & VAR_7)
           ? VAR_10
           : VAR_9);
 }

 VAR_13 = VAR_12->ops.read_reg(VAR_11, VAR_3, &VAR_14);
 if (VAR_13)
  return VAR_13;

 VAR_12->is_mdix = !!(VAR_14 & VAR_5);


 VAR_12->cable_length = VAR_0;
 VAR_12->local_rx = VAR_8;
 VAR_12->remote_rx = VAR_8;

 return VAR_2;
}
