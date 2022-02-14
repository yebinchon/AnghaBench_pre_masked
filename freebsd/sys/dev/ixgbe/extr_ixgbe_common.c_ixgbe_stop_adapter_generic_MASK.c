
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ max_tx_queues; scalar_t__ max_rx_queues; } ;
struct ixgbe_hw {TYPE_1__ mac; int adapter_stopped; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (int) ;

s32 FUNC_9(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8;
 u16 VAR_9;

 FUNC_0("ixgbe_stop_adapter_generic");





 VAR_7->adapter_stopped = VAR_6;


 FUNC_7(VAR_7);


 FUNC_5(VAR_7, VAR_1, VAR_2);


 FUNC_1(VAR_7, VAR_0);


 for (VAR_9 = 0; VAR_9 < VAR_7->mac.max_tx_queues; VAR_9++)
  FUNC_5(VAR_7, FUNC_3(VAR_9), VAR_5);


 for (VAR_9 = 0; VAR_9 < VAR_7->mac.max_rx_queues; VAR_9++) {
  VAR_8 = FUNC_1(VAR_7, FUNC_2(VAR_9));
  VAR_8 &= ~VAR_3;
  VAR_8 |= VAR_4;
  FUNC_5(VAR_7, FUNC_2(VAR_9), VAR_8);
 }


 FUNC_4(VAR_7);
 FUNC_8(2);





 return FUNC_6(VAR_7);
}
