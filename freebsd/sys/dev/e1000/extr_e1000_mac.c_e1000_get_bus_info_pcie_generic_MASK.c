
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* set_lan_id ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {TYPE_1__ ops; } ;
struct e1000_bus_info {int width; void* speed; int type; } ;
struct e1000_hw {struct e1000_bus_info bus; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;
typedef enum e1000_bus_width { ____Placeholder_e1000_bus_width } e1000_bus_width ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (struct e1000_hw*) ;

s32 FUNC_3(struct e1000_hw *VAR_10)
{
 struct e1000_mac_info *VAR_11 = &VAR_10->mac;
 struct e1000_bus_info *VAR_12 = &VAR_10->bus;
 s32 VAR_13;
 u16 VAR_14;

 FUNC_0("e1000_get_bus_info_pcie_generic");

 VAR_12->type = VAR_8;

 VAR_13 = FUNC_1(VAR_10, VAR_2,
       &VAR_14);
 if (VAR_13) {
  VAR_12->width = VAR_9;
  VAR_12->speed = VAR_7;
 } else {
  switch (VAR_14 & VAR_1) {
  case 129:
   VAR_12->speed = VAR_5;
   break;
  case 128:
   VAR_12->speed = VAR_6;
   break;
  default:
   VAR_12->speed = VAR_7;
   break;
  }

  VAR_12->width = (enum e1000_bus_width)((VAR_14 &
         VAR_3) >> VAR_4);
 }

 VAR_11->ops.set_lan_id(VAR_10);

 return VAR_0;
}
