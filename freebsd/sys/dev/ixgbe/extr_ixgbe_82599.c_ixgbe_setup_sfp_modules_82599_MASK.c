
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_9__ {scalar_t__ (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_12__ {int semaphore_delay; TYPE_3__ ops; } ;
struct TYPE_10__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* prot_autoc_write ) (struct ixgbe_hw*,int,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_11__ {int orig_autoc; TYPE_4__ ops; } ;
struct TYPE_7__ {int * reset; } ;
struct TYPE_8__ {scalar_t__ sfp_type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_6__ eeprom; TYPE_5__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int,int*) ;
 int FUNC_11 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,int,int ) ;
 int FUNC_13 (struct ixgbe_hw*,int ) ;

s32 FUNC_14(struct ixgbe_hw *VAR_10)
{
 s32 VAR_11 = VAR_8;
 u16 VAR_12, VAR_13, VAR_14;

 FUNC_0("ixgbe_setup_sfp_modules_82599");

 if (VAR_10->phy.sfp_type != VAR_9) {
  FUNC_6(VAR_10);

  VAR_10->phy.ops.reset = ((void*)0);

  VAR_11 = FUNC_5(VAR_10, &VAR_12,
             &VAR_13);
  if (VAR_11 != VAR_8)
   goto setup_sfp_out;


  VAR_11 = VAR_10->mac.ops.acquire_swfw_sync(VAR_10,
       VAR_7);
  if (VAR_11 != VAR_8) {
   VAR_11 = VAR_6;
   goto setup_sfp_out;
  }

  if (VAR_10->eeprom.ops.read(VAR_10, ++VAR_13, &VAR_14))
   goto setup_sfp_err;
  while (VAR_14 != 0xffff) {
   FUNC_4(VAR_10, VAR_2, VAR_14);
   FUNC_3(VAR_10);
   if (VAR_10->eeprom.ops.read(VAR_10, ++VAR_13, &VAR_14))
    goto setup_sfp_err;
  }


  VAR_10->mac.ops.release_swfw_sync(VAR_10, VAR_7);



  FUNC_7(VAR_10->eeprom.semaphore_delay);


  VAR_11 = VAR_10->mac.ops.prot_autoc_write(VAR_10,
   VAR_10->mac.orig_autoc | VAR_1,
   VAR_0);

  if (VAR_11) {
   FUNC_1("sfp module setup not complete\n");
   VAR_11 = VAR_5;
   goto setup_sfp_out;
  }

 }

setup_sfp_out:
 return VAR_11;

setup_sfp_err:

 VAR_10->mac.ops.release_swfw_sync(VAR_10, VAR_7);

 FUNC_7(VAR_10->eeprom.semaphore_delay);
 FUNC_2(VAR_3,
        "eeprom read at offset %d failed", VAR_13);
 return VAR_4;
}
