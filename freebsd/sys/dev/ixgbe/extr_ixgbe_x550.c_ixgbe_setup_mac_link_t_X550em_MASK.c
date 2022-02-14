
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* setup_link_speed ) (struct ixgbe_hw*,int,int) ;} ;
struct TYPE_5__ {int nw_mng_if_sel; TYPE_3__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int) ;

s32 FUNC_3(struct ixgbe_hw *VAR_5,
      ixgbe_link_speed VAR_6,
      bool VAR_7)
{
 s32 VAR_8;
 ixgbe_link_speed VAR_9;

 FUNC_0("ixgbe_setup_mac_link_t_X550em");




 if (VAR_6 & VAR_0)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;



 if (VAR_5->mac.type == VAR_4 &&
     !(VAR_5->phy.nw_mng_if_sel & VAR_2)) {
  VAR_8 = FUNC_1(VAR_5, &VAR_9);

  if (VAR_8 != VAR_3)
   return VAR_8;
 }

 return VAR_5->phy.ops.setup_link_speed(VAR_5, VAR_6, VAR_7);
}
