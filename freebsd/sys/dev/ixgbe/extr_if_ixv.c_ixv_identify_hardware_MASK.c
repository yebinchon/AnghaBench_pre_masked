
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ixgbe_hw {int device_id; TYPE_1__ mac; int subsystem_device_id; int subsystem_vendor_id; int revision_id; int vendor_id; } ;
struct adapter {struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;







 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(if_ctx_t VAR_6)
{
 struct adapter *VAR_7 = FUNC_2(VAR_6);
 device_t VAR_8 = FUNC_1(VAR_6);
 struct ixgbe_hw *VAR_9 = &VAR_7->hw;


 VAR_9->vendor_id = FUNC_7(VAR_8);
 VAR_9->device_id = FUNC_3(VAR_8);
 VAR_9->revision_id = FUNC_4(VAR_8);
 VAR_9->subsystem_vendor_id = FUNC_6(VAR_8);
 VAR_9->subsystem_device_id = FUNC_5(VAR_8);


 switch (VAR_9->device_id) {
 case 132:
  VAR_9->mac.type = VAR_0;
  break;
 case 131:
  VAR_9->mac.type = VAR_1;
  break;
 case 128:
  VAR_9->mac.type = VAR_4;
  break;
 case 129:
  VAR_9->mac.type = VAR_3;
  break;
 case 130:
  VAR_9->mac.type = VAR_2;
  break;
 default:
  FUNC_0(VAR_8, "unknown mac type\n");
  VAR_9->mac.type = VAR_5;
  break;
 }
}
