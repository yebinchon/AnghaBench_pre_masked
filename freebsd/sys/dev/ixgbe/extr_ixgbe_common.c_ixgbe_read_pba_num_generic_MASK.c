
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_5, u32 *VAR_6)
{
 s32 VAR_7;
 u16 VAR_8;

 FUNC_0("ixgbe_read_pba_num_generic");

 VAR_7 = VAR_5->eeprom.ops.read(VAR_5, VAR_1, &VAR_8);
 if (VAR_7) {
  FUNC_1("NVM Read Error\n");
  return VAR_7;
 } else if (VAR_8 == VAR_3) {
  FUNC_1("NVM Not supported\n");
  return VAR_0;
 }
 *VAR_6 = (u32)(VAR_8 << 16);

 VAR_7 = VAR_5->eeprom.ops.read(VAR_5, VAR_2, &VAR_8);
 if (VAR_7) {
  FUNC_1("NVM Read Error\n");
  return VAR_7;
 }
 *VAR_6 |= VAR_8;

 return VAR_4;
}
