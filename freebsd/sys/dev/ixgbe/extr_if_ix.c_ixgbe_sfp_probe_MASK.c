
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* identify_sfp ) (struct ixgbe_hw*) ;scalar_t__ (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ sfp_type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
struct adapter {void* sfp_probe; struct ixgbe_hw hw; } ;
typedef scalar_t__ s32 ;
typedef int if_ctx_t ;
typedef int device_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;

__attribute__((used)) static bool
FUNC_5(if_ctx_t VAR_5)
{
 struct adapter *VAR_6 = FUNC_2(VAR_5);
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 device_t VAR_8 = FUNC_1(VAR_5);
 bool VAR_9 = VAR_0;

 if ((VAR_7->phy.type == VAR_3) &&
     (VAR_7->phy.sfp_type == VAR_4)) {
  s32 VAR_10 = VAR_7->phy.ops.identify_sfp(VAR_7);
  if (VAR_10)
   goto out;
  VAR_10 = VAR_7->phy.ops.reset(VAR_7);
  VAR_6->sfp_probe = VAR_0;
  if (VAR_10 == VAR_1) {
   FUNC_0(VAR_8, "Unsupported SFP+ module detected!");
   FUNC_0(VAR_8,
       "Reload driver with supported module.\n");
   goto out;
  } else
   FUNC_0(VAR_8, "SFP+ module detected!\n");

  VAR_9 = VAR_2;
 }
out:

 return (VAR_9);
}
