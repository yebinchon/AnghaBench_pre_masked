
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ qsfp_shared_i2c_bus; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_5, u8 VAR_6,
     u8 VAR_7, u8 VAR_8)
{
 u32 VAR_9;
 s32 VAR_10;
 s32 VAR_11 = 200;

 FUNC_0("ixgbe_write_i2c_byte_82599");

 if (VAR_5->phy.qsfp_shared_i2c_bus == VAR_4) {

  VAR_9 = FUNC_2(VAR_5, VAR_1);
  VAR_9 |= VAR_2;
  FUNC_4(VAR_5, VAR_1, VAR_9);
  FUNC_3(VAR_5);

  while (VAR_11) {
   VAR_9 = FUNC_2(VAR_5, VAR_1);
   if (VAR_9 & VAR_3)
    break;

   FUNC_6(5);
   VAR_11--;
  }

  if (!VAR_11) {
   FUNC_1("Driver can't access resource,"
     " acquiring I2C bus timeout.\n");
   VAR_10 = VAR_0;
   goto release_i2c_access;
  }
 }

 VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8);

release_i2c_access:

 if (VAR_5->phy.qsfp_shared_i2c_bus == VAR_4) {

  VAR_9 = FUNC_2(VAR_5, VAR_1);
  VAR_9 &= ~VAR_2;
  FUNC_4(VAR_5, VAR_1, VAR_9);
  FUNC_3(VAR_5);
 }

 return VAR_10;
}
