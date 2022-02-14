
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ,int ) ;int (* stop_adapter ) (struct ixgbe_hw*) ;int (* reset_hw ) (struct ixgbe_hw*) ;} ;
struct TYPE_3__ {int addr; TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ mac; void* adapter_stopped; } ;
struct adapter {void* link_up; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct adapter* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(if_ctx_t VAR_2)
{
 struct adapter *VAR_3 = FUNC_1(VAR_2);
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;

 FUNC_0("ixv_stop: begin\n");

 FUNC_2(VAR_2);

 VAR_4->mac.ops.reset_hw(VAR_4);
 VAR_3->hw.adapter_stopped = VAR_0;
 VAR_4->mac.ops.stop_adapter(VAR_4);


 VAR_3->link_up = VAR_0;
 FUNC_3(VAR_2);


 VAR_4->mac.ops.set_rar(VAR_4, 0, VAR_4->mac.addr, 0, VAR_1);
}
