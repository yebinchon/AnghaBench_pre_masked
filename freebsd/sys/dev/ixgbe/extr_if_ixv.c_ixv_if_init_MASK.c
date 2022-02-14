
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* check_link ) (struct ixgbe_hw*,int *,int *,int ) ;int (* start_hw ) (struct ixgbe_hw*) ;int (* reset_hw ) (struct ixgbe_hw*) ;int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ,int) ;int (* stop_adapter ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; int addr; } ;
struct ixgbe_hw {TYPE_2__ mac; int adapter_stopped; } ;
struct ifnet {int dummy; } ;
struct adapter {int link_up; int link_speed; int vector; int rx_mbuf_sz; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 struct ifnet* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct adapter* FUNC_9 (int ) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct ixgbe_hw*) ;
 int FUNC_19 (struct ixgbe_hw*,int ,int ,int ,int) ;
 int FUNC_20 (struct ixgbe_hw*,int ,int ,int ,int) ;
 int FUNC_21 (struct ixgbe_hw*) ;
 int FUNC_22 (struct ixgbe_hw*) ;
 int FUNC_23 (struct ixgbe_hw*,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_24(if_ctx_t VAR_6)
{
 struct adapter *VAR_7 = FUNC_9(VAR_6);
 struct ifnet *VAR_8 = FUNC_7(VAR_6);
 device_t VAR_9 = FUNC_6(VAR_6);
 struct ixgbe_hw *VAR_10 = &VAR_7->hw;
 int VAR_11 = 0;

 FUNC_1("ixv_if_init: begin");
 VAR_10->adapter_stopped = VAR_0;
 VAR_10->mac.ops.stop_adapter(VAR_10);


 VAR_10->mac.ops.set_rar(VAR_10, 0, VAR_10->mac.addr, 0, VAR_4);


 FUNC_4(FUNC_0(VAR_8), VAR_10->mac.addr, VAR_2);
 VAR_10->mac.ops.set_rar(VAR_10, 0, VAR_10->mac.addr, 0, 1);


 VAR_10->mac.ops.reset_hw(VAR_10);
 VAR_10->mac.ops.start_hw(VAR_10);
 VAR_11 = FUNC_16(VAR_7);
 if (VAR_11) {
  FUNC_5(VAR_9,
      "Mailbox API negotiation failed in if_init!\n");
  return;
 }

 FUNC_15(VAR_6);


 FUNC_12(VAR_6);

 VAR_7->rx_mbuf_sz = FUNC_8(VAR_6);


 FUNC_14(VAR_6);


 FUNC_17(VAR_6);


 FUNC_10(VAR_7);


 FUNC_3(VAR_10, VAR_5, VAR_1);


 FUNC_3(VAR_10, FUNC_2(VAR_7->vector), VAR_3);


 FUNC_13(VAR_7);


 VAR_10->mac.ops.check_link(VAR_10, &VAR_7->link_speed, &VAR_7->link_up,
     VAR_0);


 FUNC_11(VAR_6);

 return;
}
