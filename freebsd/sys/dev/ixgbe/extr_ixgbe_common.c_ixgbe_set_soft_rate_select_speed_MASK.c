
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ (* write_i2c_byte ) (struct ixgbe_hw*,int ,int ,int) ;scalar_t__ (* read_i2c_byte ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int) ;

void FUNC_5(struct ixgbe_hw *VAR_6,
     ixgbe_link_speed VAR_7)
{
 s32 VAR_8;
 u8 VAR_9, VAR_10;

 switch (VAR_7) {
 case 129:

  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_9 = VAR_4;
  break;
 default:
  FUNC_0("Invalid fixed module speed\n");
  return;
 }


 VAR_8 = VAR_6->phy.ops.read_i2c_byte(VAR_6, VAR_2,
        VAR_0,
        &VAR_10);
 if (VAR_8) {
  FUNC_0("Failed to read Rx Rate Select RS0\n");
  goto out;
 }

 VAR_10 = (VAR_10 & ~VAR_5) | VAR_9;

 VAR_8 = VAR_6->phy.ops.write_i2c_byte(VAR_6, VAR_2,
         VAR_0,
         VAR_10);
 if (VAR_8) {
  FUNC_0("Failed to write Rx Rate Select RS0\n");
  goto out;
 }


 VAR_8 = VAR_6->phy.ops.read_i2c_byte(VAR_6, VAR_1,
        VAR_0,
        &VAR_10);
 if (VAR_8) {
  FUNC_0("Failed to read Rx Rate Select RS1\n");
  goto out;
 }

 VAR_10 = (VAR_10 & ~VAR_5) | VAR_9;

 VAR_8 = VAR_6->phy.ops.write_i2c_byte(VAR_6, VAR_1,
         VAR_0,
         VAR_10);
 if (VAR_8) {
  FUNC_0("Failed to write Rx Rate Select RS1\n");
  goto out;
 }
out:
 return;
}
