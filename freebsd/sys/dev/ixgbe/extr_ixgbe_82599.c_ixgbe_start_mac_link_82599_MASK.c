
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
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ) ;
 int FUNC_7 (struct ixgbe_hw*,int ) ;

s32 FUNC_8(struct ixgbe_hw *VAR_13,
          bool VAR_14)
{
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 s32 VAR_18 = VAR_11;
 bool VAR_19 = VAR_0;

 FUNC_0("ixgbe_start_mac_link_82599");





 if (FUNC_4(VAR_13)) {
  VAR_18 = VAR_13->mac.ops.acquire_swfw_sync(VAR_13,
             VAR_8);
  if (VAR_18 != VAR_11)
   goto out;

  VAR_19 = VAR_12;
 }


 FUNC_3(VAR_13);

 if (VAR_19)
  VAR_13->mac.ops.release_swfw_sync(VAR_13, VAR_8);


 if (VAR_14) {
  VAR_15 = FUNC_2(VAR_13, VAR_1);
  if ((VAR_15 & VAR_5) ==
       VAR_2 ||
      (VAR_15 & VAR_5) ==
       VAR_3 ||
      (VAR_15 & VAR_5) ==
       VAR_4) {
   VAR_16 = 0;
   for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
    VAR_16 = FUNC_2(VAR_13, VAR_9);
    if (VAR_16 & VAR_10)
     break;
    FUNC_5(100);
   }
   if (!(VAR_16 & VAR_10)) {
    VAR_18 = VAR_7;
    FUNC_1("Autoneg did not complete.\n");
   }
  }
 }


 FUNC_5(50);

out:
 return VAR_18;
}
