
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ requested_mode; scalar_t__ current_mode; int pause_time; } ;
struct TYPE_8__ {scalar_t__ (* setup_physical_interface ) (struct e1000_hw*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_6__ {scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_5__ fc; TYPE_4__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;

s32 FUNC_8(struct e1000_hw *VAR_9)
{
 s32 VAR_10;

 FUNC_0("e1000_setup_link_generic");




 if (VAR_9->phy.ops.check_reset_block && VAR_9->phy.ops.check_reset_block(VAR_9))
  return VAR_4;




 if (VAR_9->fc.requested_mode == VAR_8) {
  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10)
   return VAR_10;
 }




 VAR_9->fc.current_mode = VAR_9->fc.requested_mode;

 FUNC_2("After fix-ups FlowControl is now = %x\n",
  VAR_9->fc.current_mode);


 VAR_10 = VAR_9->mac.ops.setup_physical_interface(VAR_9);
 if (VAR_10)
  return VAR_10;






 FUNC_1("Initializing the Flow Control address, type and timer regs\n");
 FUNC_3(VAR_9, VAR_2, VAR_7);
 FUNC_3(VAR_9, VAR_0, VAR_5);
 FUNC_3(VAR_9, VAR_1, VAR_6);

 FUNC_3(VAR_9, VAR_3, VAR_9->fc.pause_time);

 return FUNC_5(VAR_9);
}
