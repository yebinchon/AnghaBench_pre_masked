
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct ixgbe_mac_info {TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ type; int speed; int width; } ;
struct ixgbe_hw {TYPE_1__ bus; struct ixgbe_mac_info mac; } ;


 int VAR_0 ;



 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ixgbe_hw*) ;

void FUNC_1(struct ixgbe_hw *VAR_13, u16 VAR_14)
{
 struct ixgbe_mac_info *VAR_15 = &VAR_13->mac;

 if (VAR_13->bus.type == VAR_7)
  VAR_13->bus.type = VAR_6;

 switch (VAR_14 & VAR_1) {
 case 131:
  VAR_13->bus.width = VAR_8;
  break;
 case 130:
  VAR_13->bus.width = VAR_9;
  break;
 case 129:
  VAR_13->bus.width = VAR_10;
  break;
 case 128:
  VAR_13->bus.width = VAR_11;
  break;
 default:
  VAR_13->bus.width = VAR_12;
  break;
 }

 switch (VAR_14 & VAR_0) {
 case 134:
  VAR_13->bus.speed = VAR_2;
  break;
 case 133:
  VAR_13->bus.speed = VAR_3;
  break;
 case 132:
  VAR_13->bus.speed = VAR_4;
  break;
 default:
  VAR_13->bus.speed = VAR_5;
  break;
 }

 VAR_15->ops.set_lan_id(VAR_13);
}
