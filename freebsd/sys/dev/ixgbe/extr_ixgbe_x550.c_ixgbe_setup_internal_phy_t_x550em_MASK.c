
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
struct TYPE_7__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_8__ {int nw_mng_if_sel; TYPE_3__ ops; } ;
struct TYPE_5__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int*) ;

s32 FUNC_5(struct ixgbe_hw *VAR_11)
{
 ixgbe_link_speed VAR_12;
 bool VAR_13;
 u32 VAR_14;
 u16 VAR_15;

 if (VAR_11->mac.ops.get_media_type(VAR_11) != VAR_10)
  return VAR_0;

 if (VAR_11->mac.type == VAR_9 &&
     !(VAR_11->phy.nw_mng_if_sel & VAR_7)) {

  VAR_14 = FUNC_0(VAR_11, &VAR_13);
  if (VAR_14 != VAR_8)
   return VAR_14;

  if (!VAR_13)
   return VAR_8;

  VAR_14 = VAR_11->phy.ops.read_reg(VAR_11,
           VAR_5,
           VAR_4,
           &VAR_15);
  if (VAR_14 != VAR_8)
   return VAR_14;


  VAR_14 = FUNC_0(VAR_11, &VAR_13);
  if (VAR_14 != VAR_8)
   return VAR_14;
  if (!VAR_13)
   return VAR_8;


  VAR_15 &= VAR_6;

  switch (VAR_15) {
  case 129:
   VAR_12 = VAR_2;
   break;
  case 128:
   VAR_12 = VAR_3;
   break;
  default:

   return VAR_1;
  }

  return FUNC_1(VAR_11, &VAR_12);
 } else {
  VAR_15 = VAR_2 |
   VAR_3;
  return FUNC_2(VAR_11, VAR_15);
 }
}
