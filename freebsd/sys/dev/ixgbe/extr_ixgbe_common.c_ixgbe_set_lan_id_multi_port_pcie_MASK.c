
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_bus_info {int func; int instance_id; scalar_t__ lan_id; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_2__ eeprom; struct ixgbe_bus_info bus; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int*) ;

void FUNC_4(struct ixgbe_hw *VAR_8)
{
 struct ixgbe_bus_info *VAR_9 = &VAR_8->bus;
 u32 VAR_10;
 u16 VAR_11;

 FUNC_0("ixgbe_set_lan_id_multi_port_pcie");

 VAR_10 = FUNC_2(VAR_8, VAR_5);
 VAR_9->func = (VAR_10 & VAR_6) >> VAR_7;
 VAR_9->lan_id = (u8)VAR_9->func;


 VAR_10 = FUNC_2(VAR_8, FUNC_1(VAR_8));
 if (VAR_10 & VAR_4)
  VAR_9->func ^= 0x1;


 if (VAR_8->device_id == VAR_0) {
  VAR_8->eeprom.ops.read(VAR_8, VAR_1, &VAR_11);
  VAR_9->instance_id = (VAR_11 & VAR_2) >>
       VAR_3;
 }
}
