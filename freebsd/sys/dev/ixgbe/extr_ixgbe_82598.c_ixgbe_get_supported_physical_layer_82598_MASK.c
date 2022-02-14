
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* identify_sfp ) (struct ixgbe_hw*) ;int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* identify ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int type; int sfp_type; TYPE_1__ ops; } ;
struct ixgbe_hw {int device_id; TYPE_2__ phy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
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
 int FUNC_1 (struct ixgbe_hw*,int ) ;

 int VAR_25 ;




 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_4 (struct ixgbe_hw*) ;

u64 FUNC_5(struct ixgbe_hw *VAR_26)
{
 u64 VAR_27 = VAR_24;
 u32 VAR_28 = FUNC_1(VAR_26, VAR_0);
 u32 VAR_29 = VAR_28 & VAR_3;
 u32 VAR_30 = VAR_28 & VAR_5;
 u16 VAR_31 = 0;

 FUNC_0("ixgbe_get_supported_physical_layer_82598");

 VAR_26->phy.ops.identify(VAR_26);



 switch (VAR_26->phy.type) {
 case 131:
 case 132:
  VAR_26->phy.ops.read_reg(VAR_26, VAR_12,
  VAR_13, &VAR_31);
  if (VAR_31 & VAR_11)
   VAR_27 |= VAR_22;
  if (VAR_31 & VAR_9)
   VAR_27 |= VAR_16;
  if (VAR_31 & VAR_10)
   VAR_27 |= VAR_17;
  goto out;
 default:
  break;
 }

 switch (VAR_28 & VAR_8) {
 case 141:
 case 140:
  if (VAR_30 == VAR_4)
   VAR_27 = VAR_15;
  else
   VAR_27 = VAR_14;
  break;
 case 142:
  if (VAR_29 == VAR_1)
   VAR_27 = VAR_18;
  else if (VAR_29 == VAR_2)
   VAR_27 = VAR_19;
  else
   VAR_27 = VAR_24;
  break;
 case 139:
 case 138:
  if (VAR_28 & VAR_7)
   VAR_27 |= VAR_15;
  if (VAR_28 & VAR_6)
   VAR_27 |= VAR_19;
  break;
 default:
  break;
 }

 if (VAR_26->phy.type == VAR_25) {
  VAR_26->phy.ops.identify_sfp(VAR_26);

  switch (VAR_26->phy.sfp_type) {
  case 130:
   VAR_27 = VAR_23;
   break;
  case 128:
   VAR_27 = VAR_21;
   break;
  case 129:
   VAR_27 = VAR_20;
   break;
  default:
   VAR_27 = VAR_24;
   break;
  }
 }

 switch (VAR_26->device_id) {
 case 134:
  VAR_27 = VAR_23;
  break;
 case 137:
 case 136:
 case 133:
  VAR_27 = VAR_21;
  break;
 case 135:
  VAR_27 = VAR_20;
  break;
 default:
  break;
 }

out:
 return VAR_27;
}
