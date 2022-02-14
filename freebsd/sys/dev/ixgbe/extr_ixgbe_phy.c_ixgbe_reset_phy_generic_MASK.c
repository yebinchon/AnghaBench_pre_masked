
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* check_overtemp ) (struct ixgbe_hw*) ;scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; int reset_if_overtemp; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ,int) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_9 (int) ;

s32 FUNC_10(struct ixgbe_hw *VAR_13)
{
 u32 VAR_14;
 u16 VAR_15 = 0;
 s32 VAR_16 = VAR_9;

 FUNC_0("ixgbe_reset_phy_generic");

 if (VAR_13->phy.type == VAR_11)
  VAR_16 = FUNC_3(VAR_13);

 if (VAR_16 != VAR_9 || VAR_13->phy.type == VAR_10)
  goto out;


 if (!VAR_13->phy.reset_if_overtemp &&
     (VAR_1 == VAR_13->phy.ops.check_overtemp(VAR_13)))
  goto out;


 if (FUNC_2(VAR_13))
  goto out;





 VAR_13->phy.ops.write_reg(VAR_13, VAR_3,
         VAR_4,
         VAR_5);






 for (VAR_14 = 0; VAR_14 < 30; VAR_14++) {
  FUNC_4(100);
  if (VAR_13->phy.type == VAR_12) {
   VAR_16 = VAR_13->phy.ops.read_reg(VAR_13,
        VAR_7,
        VAR_6,
        &VAR_15);
   if (VAR_16 != VAR_9)
    return VAR_16;

   if (VAR_15 & VAR_8) {
    FUNC_9(2);
    break;
   }
  } else {
   VAR_16 = VAR_13->phy.ops.read_reg(VAR_13,
           VAR_3,
           VAR_4,
           &VAR_15);
   if (VAR_16 != VAR_9)
    return VAR_16;

   if (!(VAR_15 & VAR_5)) {
    FUNC_9(2);
    break;
   }
  }
 }

 if (VAR_15 & VAR_5) {
  VAR_16 = VAR_2;
  FUNC_1(VAR_0,
        "PHY reset polling failed to complete.\n");
 }

out:
 return VAR_16;
}
