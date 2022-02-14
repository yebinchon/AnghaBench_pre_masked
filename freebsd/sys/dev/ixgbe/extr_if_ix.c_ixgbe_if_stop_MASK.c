
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int addr; } ;
struct ixgbe_hw {TYPE_1__ mac; void* adapter_stopped; } ;
struct adapter {struct ixgbe_hw hw; void* link_up; } ;
typedef int if_ctx_t ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct adapter* FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int ,int ) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*) ;

__attribute__((used)) static void
FUNC_8(if_ctx_t VAR_3)
{
 struct adapter *VAR_4 = FUNC_1(VAR_3);
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;

 FUNC_0("ixgbe_if_stop: begin\n");

 FUNC_4(VAR_5);
 VAR_5->adapter_stopped = VAR_0;
 FUNC_6(VAR_5);
 if (VAR_5->mac.type == VAR_2)
  FUNC_7(VAR_5);

 FUNC_2(VAR_5);


 VAR_4->link_up = VAR_0;
 FUNC_3(VAR_3);


 FUNC_5(&VAR_4->hw, 0, VAR_4->hw.mac.addr, 0, VAR_1);

 return;
}
