
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {scalar_t__ (* setup_sfp ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {int type; TYPE_3__ ops; } ;
struct TYPE_5__ {scalar_t__ (* identify_sfp ) (struct ixgbe_hw*) ;scalar_t__ (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ phy; scalar_t__ need_crosstalk_fix; } ;
struct adapter {int task_requests; struct ixgbe_hw hw; } ;
typedef void* if_ctx_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void*) ;
 struct adapter* FUNC_3 (void*) ;
 int VAR_5 ;



 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_6)
{
 if_ctx_t VAR_7 = VAR_6;
 struct adapter *VAR_8 = FUNC_3(VAR_7);
 struct ixgbe_hw *VAR_9 = &VAR_8->hw;
 device_t VAR_10 = FUNC_2(VAR_7);
 u32 VAR_11, VAR_12 = 0;

 if (VAR_8->hw.need_crosstalk_fix) {
  switch (VAR_9->mac.type) {
  case 130:
   VAR_12 = FUNC_0(VAR_9, VAR_1) &
       VAR_3;
   break;
  case 128:
  case 129:
   VAR_12 = FUNC_0(VAR_9, VAR_1) &
       VAR_2;
   break;
  default:
   break;
  }

  if (!VAR_12)
   goto handle_mod_out;
 }

 VAR_11 = VAR_9->phy.ops.identify_sfp(VAR_9);
 if (VAR_11 == VAR_0) {
  FUNC_1(VAR_10,
      "Unsupported SFP+ module type was detected.\n");
  goto handle_mod_out;
 }

 if (VAR_9->mac.type == VAR_5)
  VAR_11 = VAR_9->phy.ops.reset(VAR_9);
 else
  VAR_11 = VAR_9->mac.ops.setup_sfp(VAR_9);

 if (VAR_11 == VAR_0) {
  FUNC_1(VAR_10,
      "Setup failure - unsupported SFP+ module type.\n");
  goto handle_mod_out;
 }
 VAR_8->task_requests |= VAR_4;
 return;

handle_mod_out:
 VAR_8->task_requests &= ~(VAR_4);
}
