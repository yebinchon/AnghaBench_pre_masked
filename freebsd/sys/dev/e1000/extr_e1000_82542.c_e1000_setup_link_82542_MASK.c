
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* setup_physical_interface ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {TYPE_1__ ops; scalar_t__ report_tx_early; } ;
struct TYPE_4__ {int pause_time; int current_mode; int requested_mode; } ;
struct e1000_hw {TYPE_2__ fc; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_9)
{
 struct e1000_mac_info *VAR_10 = &VAR_9->mac;
 s32 VAR_11;

 FUNC_0("e1000_setup_link_82542");

 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11)
  goto out;

 VAR_9->fc.requested_mode &= ~VAR_8;

 if (VAR_10->report_tx_early)
  VAR_9->fc.requested_mode &= ~VAR_7;





 VAR_9->fc.current_mode = VAR_9->fc.requested_mode;

 FUNC_2("After fix-ups FlowControl is now = %x\n",
    VAR_9->fc.current_mode);


 VAR_11 = VAR_10->ops.setup_physical_interface(VAR_9);
 if (VAR_11)
  goto out;







 FUNC_1("Initializing Flow Control address, type and timer regs\n");

 FUNC_3(VAR_9, VAR_1, VAR_5);
 FUNC_3(VAR_9, VAR_0, VAR_4);
 FUNC_3(VAR_9, VAR_2, VAR_6);

 FUNC_3(VAR_9, VAR_3, VAR_9->fc.pause_time);

 VAR_11 = FUNC_5(VAR_9);

out:
 return VAR_11;
}
