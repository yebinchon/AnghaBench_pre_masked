
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ max_tx_queues; scalar_t__ max_rx_queues; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;

s32 FUNC_5(struct ixgbe_hw *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_6->mac.max_tx_queues; VAR_7++) {
  FUNC_4(VAR_6, VAR_4, VAR_7);
  FUNC_4(VAR_6, VAR_3, 0);
 }
 FUNC_3(VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_6->mac.max_tx_queues; VAR_7++) {
  VAR_8 = FUNC_2(VAR_6, FUNC_1(VAR_7));
  VAR_8 &= ~VAR_2;
  FUNC_4(VAR_6, FUNC_1(VAR_7), VAR_8);
 }

 for (VAR_7 = 0; VAR_7 < VAR_6->mac.max_rx_queues; VAR_7++) {
  VAR_8 = FUNC_2(VAR_6, FUNC_0(VAR_7));
  VAR_8 &= ~(VAR_0 |
       VAR_1);
  FUNC_4(VAR_6, FUNC_0(VAR_7), VAR_8);
 }

 return VAR_5;
}
