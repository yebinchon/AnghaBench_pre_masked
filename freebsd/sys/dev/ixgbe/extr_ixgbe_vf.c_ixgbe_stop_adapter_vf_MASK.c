
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_8)
{
 u32 VAR_9;
 u16 VAR_10;





 VAR_8->adapter_stopped = VAR_7;


 FUNC_3(VAR_8, VAR_6, VAR_4);


 FUNC_0(VAR_8, VAR_5);


 for (VAR_10 = 0; VAR_10 < VAR_8->mac.max_tx_queues; VAR_10++)
  FUNC_3(VAR_8, FUNC_2(VAR_10), VAR_2);


 for (VAR_10 = 0; VAR_10 < VAR_8->mac.max_rx_queues; VAR_10++) {
  VAR_9 = FUNC_0(VAR_8, FUNC_1(VAR_10));
  VAR_9 &= ~VAR_0;
  FUNC_3(VAR_8, FUNC_1(VAR_10), VAR_9);
 }

 FUNC_5(VAR_8, VAR_3, 0);


 FUNC_4(VAR_8);
 FUNC_6(2);

 return VAR_1;
}
