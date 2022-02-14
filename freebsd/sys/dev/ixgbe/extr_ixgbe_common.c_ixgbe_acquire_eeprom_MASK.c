
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ) ;
 int FUNC_7 (struct ixgbe_hw*,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static s32 FUNC_9(struct ixgbe_hw *VAR_9)
{
 s32 VAR_10 = VAR_8;
 u32 VAR_11;
 u32 VAR_12;

 FUNC_0("ixgbe_acquire_eeprom");

 if (VAR_9->mac.ops.acquire_swfw_sync(VAR_9, VAR_7)
     != VAR_8)
  VAR_10 = VAR_6;

 if (VAR_10 == VAR_8) {
  VAR_11 = FUNC_3(VAR_9, FUNC_2(VAR_9));


  VAR_11 |= VAR_2;
  FUNC_5(VAR_9, FUNC_2(VAR_9), VAR_11);

  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   VAR_11 = FUNC_3(VAR_9, FUNC_2(VAR_9));
   if (VAR_11 & VAR_1)
    break;
   FUNC_8(5);
  }


  if (!(VAR_11 & VAR_1)) {
   VAR_11 &= ~VAR_2;
   FUNC_5(VAR_9, FUNC_2(VAR_9), VAR_11);
   FUNC_1("Could not acquire EEPROM grant\n");

   VAR_9->mac.ops.release_swfw_sync(VAR_9, VAR_7);
   VAR_10 = VAR_5;
  }


  if (VAR_10 == VAR_8) {

   VAR_11 &= ~(VAR_0 | VAR_3);
   FUNC_5(VAR_9, FUNC_2(VAR_9), VAR_11);
   FUNC_4(VAR_9);
   FUNC_8(1);
  }
 }
 return VAR_10;
}
