
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_19, bool *VAR_20)
{
 u32 VAR_21;
 u16 VAR_22;

 *VAR_20 = VAR_0;


 VAR_21 = VAR_19->phy.ops.read_reg(VAR_19, VAR_10,
          VAR_16,
          &VAR_22);

 if (VAR_21 != VAR_17 ||
     !(VAR_22 & VAR_15))
  return VAR_21;


 VAR_21 = VAR_19->phy.ops.read_reg(VAR_19, VAR_13,
          VAR_16,
          &VAR_22);

 if (VAR_21 != VAR_17 ||
     !(VAR_22 & (VAR_9 |
     VAR_6)))
  return VAR_21;


 VAR_21 = VAR_19->phy.ops.read_reg(VAR_19, VAR_5,
          VAR_16,
          &VAR_22);

 if (VAR_21 != VAR_17)
  return VAR_21;


 if (VAR_22 & VAR_8) {

  FUNC_0(VAR_19, VAR_0);
  return VAR_1;
 } else if (VAR_22 & VAR_7) {

  VAR_21 = VAR_19->phy.ops.read_reg(VAR_19, VAR_11,
       VAR_16,
       &VAR_22);

  if (VAR_21 != VAR_17)
   return VAR_21;


  if (VAR_22 == VAR_12) {

   FUNC_0(VAR_19, VAR_0);
   return VAR_1;
  }
 }


 VAR_21 = VAR_19->phy.ops.read_reg(VAR_19, VAR_10,
          VAR_2, &VAR_22);

 if (VAR_21 != VAR_17 ||
     !(VAR_22 & VAR_14))
  return VAR_21;


 VAR_21 = VAR_19->phy.ops.read_reg(VAR_19, VAR_3,
          VAR_2, &VAR_22);

 if (VAR_21 != VAR_17)
  return VAR_21;


 if (VAR_22 & VAR_4)
  *VAR_20 = VAR_18;

 return VAR_17;
}
