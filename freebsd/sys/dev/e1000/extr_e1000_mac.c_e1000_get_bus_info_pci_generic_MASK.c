
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* set_lan_id ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {TYPE_1__ ops; } ;
struct e1000_bus_info {scalar_t__ type; int width; void* speed; } ;
struct e1000_hw {struct e1000_bus_info bus; struct e1000_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct e1000_hw*) ;

s32 FUNC_3(struct e1000_hw *VAR_15)
{
 struct e1000_mac_info *VAR_16 = &VAR_15->mac;
 struct e1000_bus_info *VAR_17 = &VAR_15->bus;
 u32 VAR_18 = FUNC_1(VAR_15, VAR_0);
 s32 VAR_19 = VAR_5;

 FUNC_0("e1000_get_bus_info_pci_generic");


 VAR_17->type = (VAR_18 & VAR_3)
   ? VAR_12
   : VAR_11;


 if (VAR_17->type == VAR_11) {
  VAR_17->speed = (VAR_18 & VAR_2)
        ? VAR_9
        : VAR_8;
 } else {
  switch (VAR_18 & VAR_4) {
  case 128:
   VAR_17->speed = VAR_9;
   break;
  case 130:
   VAR_17->speed = VAR_6;
   break;
  case 129:
   VAR_17->speed = VAR_7;
   break;
  default:
   VAR_17->speed = VAR_10;
   break;
  }
 }


 VAR_17->width = (VAR_18 & VAR_1)
       ? VAR_14
       : VAR_13;


 VAR_16->ops.set_lan_id(VAR_15);

 return VAR_19;
}
