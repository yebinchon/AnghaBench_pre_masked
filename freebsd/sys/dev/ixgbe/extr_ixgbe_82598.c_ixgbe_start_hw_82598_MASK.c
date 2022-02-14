
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ max_tx_queues; scalar_t__ max_rx_queues; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*) ;

s32 FUNC_7(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 s32 VAR_8 = VAR_4;

 FUNC_0("ixgbe_start_hw_82598");

 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8)
  return VAR_8;


 for (VAR_7 = 0; ((VAR_7 < VAR_5->mac.max_tx_queues) &&
      (VAR_7 < VAR_0)); VAR_7++) {
  VAR_6 = FUNC_3(VAR_5, FUNC_2(VAR_7));
  VAR_6 &= ~VAR_3;
  FUNC_4(VAR_5, FUNC_2(VAR_7), VAR_6);
 }

 for (VAR_7 = 0; ((VAR_7 < VAR_5->mac.max_rx_queues) &&
      (VAR_7 < VAR_0)); VAR_7++) {
  VAR_6 = FUNC_3(VAR_5, FUNC_1(VAR_7));
  VAR_6 &= ~(VAR_1 |
       VAR_2);
  FUNC_4(VAR_5, FUNC_1(VAR_7), VAR_6);
 }


 FUNC_5(VAR_5);

 return VAR_8;
}
