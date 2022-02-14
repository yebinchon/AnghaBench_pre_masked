
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ max_link_up_time; } ;
struct TYPE_4__ {int (* read_reg ) (struct ixgbe_hw*,int,int ,int*) ;} ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_3__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_5 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_6 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_7 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_8 (struct ixgbe_hw*,int,int ,int*) ;

__attribute__((used)) static s32 FUNC_9(struct ixgbe_hw *VAR_11,
          ixgbe_link_speed *VAR_12, bool *VAR_13,
          bool VAR_14)
{
 u32 VAR_15;
 u32 VAR_16;
 u16 VAR_17, VAR_18;

 FUNC_0("ixgbe_check_mac_link_82598");







 if (VAR_11->phy.type == VAR_10) {
  VAR_11->phy.ops.read_reg(VAR_11, 0xC79F, VAR_8, &VAR_17);
  VAR_11->phy.ops.read_reg(VAR_11, 0xC79F, VAR_8, &VAR_17);
  VAR_11->phy.ops.read_reg(VAR_11, 0xC00C, VAR_8,
         &VAR_18);
  if (VAR_14) {
   for (VAR_16 = 0; VAR_16 < VAR_11->mac.max_link_up_time; VAR_16++) {
    if ((VAR_17 & 1) &&
        ((VAR_18 & 1) == 0)) {
     *VAR_13 = VAR_9;
     break;
    } else {
     *VAR_13 = VAR_0;
    }
    FUNC_3(100);
    VAR_11->phy.ops.read_reg(VAR_11, 0xC79F,
           VAR_8,
           &VAR_17);
    VAR_11->phy.ops.read_reg(VAR_11, 0xC00C,
           VAR_8,
           &VAR_18);
   }
  } else {
   if ((VAR_17 & 1) && ((VAR_18 & 1) == 0))
    *VAR_13 = VAR_9;
   else
    *VAR_13 = VAR_0;
  }

  if (*VAR_13 == VAR_0)
   goto out;
 }

 VAR_15 = FUNC_1(VAR_11, VAR_2);
 if (VAR_14) {
  for (VAR_16 = 0; VAR_16 < VAR_11->mac.max_link_up_time; VAR_16++) {
   if (VAR_15 & VAR_4) {
    *VAR_13 = VAR_9;
    break;
   } else {
    *VAR_13 = VAR_0;
   }
   FUNC_3(100);
   VAR_15 = FUNC_1(VAR_11, VAR_2);
  }
 } else {
  if (VAR_15 & VAR_4)
   *VAR_13 = VAR_9;
  else
   *VAR_13 = VAR_0;
 }

 if (VAR_15 & VAR_3)
  *VAR_12 = VAR_5;
 else
  *VAR_12 = VAR_6;

 if ((VAR_11->device_id == VAR_1) && (*VAR_13 == VAR_9) &&
     (FUNC_2(VAR_11) != VAR_7))
  *VAR_13 = VAR_0;

out:
 return VAR_7;
}
