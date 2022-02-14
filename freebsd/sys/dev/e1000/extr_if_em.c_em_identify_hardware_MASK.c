
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* pci_cmd_word; } ;
struct TYPE_4__ {void* subsystem_device_id; void* subsystem_vendor_id; void* revision_id; int device_id; int vendor_id; TYPE_1__ bus; } ;
struct adapter {TYPE_2__ hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 struct adapter* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(if_ctx_t VAR_4)
{
 device_t VAR_5 = FUNC_2(VAR_4);
 struct adapter *VAR_6 = FUNC_3(VAR_4);


 VAR_6->hw.bus.pci_cmd_word = FUNC_6(VAR_5, VAR_0, 2);


 VAR_6->hw.vendor_id = FUNC_5(VAR_5);
 VAR_6->hw.device_id = FUNC_4(VAR_5);
 VAR_6->hw.revision_id = FUNC_6(VAR_5, VAR_1, 1);
 VAR_6->hw.subsystem_vendor_id =
     FUNC_6(VAR_5, VAR_3, 2);
 VAR_6->hw.subsystem_device_id =
     FUNC_6(VAR_5, VAR_2, 2);


 if (FUNC_1(&VAR_6->hw)) {
  FUNC_0(VAR_5, "Setup init failure\n");
  return;
 }
}
