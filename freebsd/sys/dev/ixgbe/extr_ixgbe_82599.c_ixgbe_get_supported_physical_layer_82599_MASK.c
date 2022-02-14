
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* identify ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;


 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int*) ;

u64 FUNC_5(struct ixgbe_hw *VAR_30)
{
 u64 VAR_31 = VAR_29;
 u32 VAR_32 = FUNC_1(VAR_30, VAR_0);
 u32 VAR_33 = FUNC_1(VAR_30, VAR_1);
 u32 VAR_34 = VAR_33 & VAR_3;
 u32 VAR_35 = VAR_32 & VAR_7;
 u32 VAR_36 = VAR_32 & VAR_10;
 u16 VAR_37 = 0;

 FUNC_0("ixgbe_get_support_physical_layer_82599");

 VAR_30->phy.ops.identify(VAR_30);

 switch (VAR_30->phy.type) {
 case 128:
 case 129:
  VAR_30->phy.ops.read_reg(VAR_30, VAR_18,
  VAR_19, &VAR_37);
  if (VAR_37 & VAR_17)
   VAR_31 |= VAR_27;
  if (VAR_37 & VAR_15)
   VAR_31 |= VAR_22;
  if (VAR_37 & VAR_16)
   VAR_31 |= VAR_23;
  goto out;
 default:
  break;
 }

 switch (VAR_32 & VAR_14) {
 case 133:
 case 132:
  if (VAR_36 == VAR_9) {
   VAR_31 = VAR_21 |
       VAR_20;
   goto out;
  } else

   goto sfp_check;
  break;
 case 135:
  if (VAR_35 == VAR_5)
   VAR_31 = VAR_24;
  else if (VAR_35 == VAR_6)
   VAR_31 = VAR_26;
  else if (VAR_35 == VAR_8)
   VAR_31 = VAR_28;
  goto out;
  break;
 case 134:
  if (VAR_34 == VAR_2) {
   VAR_31 = VAR_25;
   goto out;
  } else if (VAR_34 == VAR_4)
   goto sfp_check;
  break;
 case 131:
 case 130:
  if (VAR_32 & VAR_13)
   VAR_31 |= VAR_21;
  if (VAR_32 & VAR_12)
   VAR_31 |= VAR_26;
  if (VAR_32 & VAR_11)
   VAR_31 |= VAR_25;
  goto out;
  break;
 default:
  goto out;
  break;
 }

sfp_check:



 VAR_31 = FUNC_2(VAR_30);
out:
 return VAR_31;
}
