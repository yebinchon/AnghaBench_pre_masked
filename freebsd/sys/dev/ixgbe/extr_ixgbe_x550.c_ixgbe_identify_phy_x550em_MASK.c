
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int phy_semaphore_mask; int type; } ;
struct TYPE_5__ {int lan_id; } ;
struct TYPE_7__ {int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct ixgbe_hw {int device_id; TYPE_2__ phy; TYPE_1__ bus; TYPE_4__ mac; } ;
typedef int s32 ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_8)
{
 VAR_8->mac.ops.set_lan_id(VAR_8);

 FUNC_3(VAR_8);

 switch (VAR_8->device_id) {
 case 135:
  return FUNC_1(VAR_8);
 case 129:

  FUNC_4(VAR_8);
  FUNC_0(VAR_8);


 case 134:
  return FUNC_1(VAR_8);
  break;
 case 130:
  VAR_8->phy.type = VAR_6;
  break;
 case 128:
  VAR_8->phy.type = VAR_7;
  break;
 case 131:
 case 137:
 case 136:
  VAR_8->phy.type = VAR_5;
  break;
 case 140:
 case 133:
  return FUNC_2(VAR_8);
 case 132:
  VAR_8->phy.type = VAR_3;
  break;
 case 139:
 case 138:
  VAR_8->phy.type = VAR_4;
  if (VAR_8->bus.lan_id)
   VAR_8->phy.phy_semaphore_mask |= VAR_1;
  else
   VAR_8->phy.phy_semaphore_mask |= VAR_0;
  break;
 default:
  break;
 }
 return VAR_2;
}
