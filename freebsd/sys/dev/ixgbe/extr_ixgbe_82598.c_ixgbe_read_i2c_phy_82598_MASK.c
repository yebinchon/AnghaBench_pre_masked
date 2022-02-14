
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int (* read_reg_mdi ) (struct ixgbe_hw*,int ,int ,int*) ;int (* write_reg_mdi ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_8 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_9(struct ixgbe_hw *VAR_17, u8 VAR_18,
        u8 VAR_19, u8 *VAR_20)
{
 s32 VAR_21 = VAR_15;
 u16 VAR_22 = 0;
 u16 VAR_23 = 0;
 u16 VAR_24 = 0;
 u16 VAR_25;
 u32 VAR_26;

 FUNC_0("ixgbe_read_i2c_phy_82598");

 if (FUNC_2(VAR_17, VAR_13) & VAR_14)
  VAR_25 = VAR_4;
 else
  VAR_25 = VAR_3;

 if (VAR_17->mac.ops.acquire_swfw_sync(VAR_17, VAR_25) != VAR_15)
  return VAR_2;

 if (VAR_17->phy.type == VAR_16) {





  VAR_22 = (VAR_18 << 8) + VAR_19;
  VAR_22 = (VAR_22 | VAR_5);
  VAR_17->phy.ops.write_reg_mdi(VAR_17,
       VAR_10,
       VAR_9,
       VAR_22);


  for (VAR_26 = 0; VAR_26 < 100; VAR_26++) {
   VAR_17->phy.ops.read_reg_mdi(VAR_17,
      VAR_12,
      VAR_9,
      &VAR_24);
   VAR_24 = VAR_24 & VAR_7;
   if (VAR_24 != VAR_6)
    break;
   FUNC_3(10);
  }

  if (VAR_24 != VAR_8) {
   FUNC_1("EEPROM read did not pass.\n");
   VAR_21 = VAR_1;
   goto out;
  }


  VAR_17->phy.ops.read_reg_mdi(VAR_17, VAR_11,
     VAR_9, &VAR_23);

  *VAR_20 = (u8)(VAR_23 >> 8);
 } else {
  VAR_21 = VAR_0;
 }

out:
 VAR_17->mac.ops.release_swfw_sync(VAR_17, VAR_25);
 return VAR_21;
}
