
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct TYPE_7__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; TYPE_4__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int *,int*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_7, ixgbe_link_speed *VAR_8,
         bool *VAR_9, bool VAR_10)
{
 u32 VAR_11;
 u16 VAR_12, VAR_13 = 0;

 if (VAR_7->mac.ops.get_media_type(VAR_7) != VAR_6)
  return VAR_1;

 VAR_11 = FUNC_0(VAR_7, VAR_8, VAR_9,
           VAR_10);


 if (VAR_11 != VAR_5 || !(*VAR_9))
  return VAR_11;






 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  VAR_11 = VAR_7->phy.ops.read_reg(VAR_7, VAR_4,
           VAR_2,
           &VAR_13);

  if (VAR_11 != VAR_5)
   return VAR_11;
 }


 if (!(VAR_13 & VAR_3))
  *VAR_9 = VAR_0;

 return VAR_5;
}
