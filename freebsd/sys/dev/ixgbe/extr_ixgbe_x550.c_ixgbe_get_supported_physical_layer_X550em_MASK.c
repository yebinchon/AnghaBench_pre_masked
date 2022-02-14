
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; int type; } ;
struct TYPE_5__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* identify ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int type; int nw_mng_if_sel; int speeds_supported; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ phy; int device_id; } ;


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
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;







 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;

u64 FUNC_5(struct ixgbe_hw *VAR_20)
{
 u64 VAR_21 = VAR_17;
 u16 VAR_22 = 0;

 FUNC_0("ixgbe_get_supported_physical_layer_X550em");

 VAR_20->phy.ops.identify(VAR_20);

 switch (VAR_20->phy.type) {
 case 130:
  if (VAR_20->mac.type == VAR_18) {
   if (VAR_20->phy.nw_mng_if_sel &
       VAR_8) {
    VAR_21 =
     VAR_16;
    break;
   } else if (VAR_20->device_id ==
       VAR_0) {
    VAR_21 =
     VAR_9;
    break;
   }
  }

 case 128:
  VAR_21 = VAR_13 |
     VAR_9;
  break;
 case 129:
  VAR_21 = VAR_14 |
     VAR_9;
  break;
 case 131:
  VAR_20->phy.ops.read_reg(VAR_20, VAR_6,
         VAR_7,
         &VAR_22);
  if (VAR_22 & VAR_5)
   VAR_21 |= VAR_15;
  if (VAR_22 & VAR_4)
   VAR_21 |= VAR_10;
  break;
 case 133:
  if (VAR_20->phy.speeds_supported & VAR_3)
   VAR_21 |= VAR_10;
  if (VAR_20->phy.speeds_supported & VAR_1)
   VAR_21 |= VAR_11;
  if (VAR_20->phy.speeds_supported & VAR_2)
   VAR_21 |= VAR_12;
  break;
 case 132:
  VAR_21 = VAR_9;
  break;
 case 134:
  VAR_21 = VAR_10;
  break;
 default:
  break;
 }

 if (VAR_20->mac.ops.get_media_type(VAR_20) == VAR_19)
  VAR_21 = FUNC_1(VAR_20);

 return VAR_21;
}
