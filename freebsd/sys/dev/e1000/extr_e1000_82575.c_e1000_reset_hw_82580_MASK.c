
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int (* release_swfw_sync ) (struct e1000_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct e1000_hw*,int ) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__ ops; } ;
struct TYPE_5__ {int global_device_reset; } ;
struct TYPE_6__ {TYPE_1__ _82575; } ;
struct e1000_hw {int device_id; TYPE_4__ mac; TYPE_2__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ) ;
 int FUNC_11 (struct e1000_hw*,int ) ;

__attribute__((used)) static s32 FUNC_12(struct e1000_hw *VAR_14)
{
 s32 VAR_15 = VAR_8;

 u16 VAR_16 = VAR_9;
 u32 VAR_17;
 bool VAR_18 = VAR_14->dev_spec._82575.global_device_reset;

 FUNC_0("e1000_reset_hw_82580");

 VAR_14->dev_spec._82575.global_device_reset = VAR_12;


 if (VAR_14->mac.type == VAR_13)
  VAR_18 = VAR_12;


 VAR_17 = FUNC_2(VAR_14, VAR_0);





 VAR_15 = FUNC_6(VAR_14);
 if (VAR_15)
  FUNC_1("PCI-E Master disable polling has failed.\n");

 FUNC_1("Masking off all interrupts\n");
 FUNC_4(VAR_14, VAR_4, 0xffffffff);
 FUNC_4(VAR_14, VAR_5, 0);
 FUNC_4(VAR_14, VAR_10, VAR_11);
 FUNC_3(VAR_14);

 FUNC_9(10);


 if (VAR_18 && VAR_14->mac.ops.acquire_swfw_sync(VAR_14,
     VAR_16))
   VAR_18 = VAR_12;

 if (VAR_18 && !(FUNC_2(VAR_14, VAR_6) &
     VAR_7))
  VAR_17 |= VAR_1;
 else
  VAR_17 |= VAR_2;

 FUNC_4(VAR_14, VAR_0, VAR_17);

 switch (VAR_14->device_id) {
 case 128:
  break;
 default:
  FUNC_3(VAR_14);
  break;
 }


 FUNC_9(5);

 VAR_15 = FUNC_7(VAR_14);
 if (VAR_15) {





  FUNC_1("Auto Read Done did not complete\n");
 }


 FUNC_4(VAR_14, VAR_6, VAR_7);


 FUNC_4(VAR_14, VAR_4, 0xffffffff);
 FUNC_2(VAR_14, VAR_3);

 VAR_15 = FUNC_8(VAR_14);
 if (VAR_15)
  FUNC_1("Could not reset MDICNFG based on EEPROM\n");


 VAR_15 = FUNC_5(VAR_14);


 if (VAR_18)
  VAR_14->mac.ops.release_swfw_sync(VAR_14, VAR_16);

 return VAR_15;
}
