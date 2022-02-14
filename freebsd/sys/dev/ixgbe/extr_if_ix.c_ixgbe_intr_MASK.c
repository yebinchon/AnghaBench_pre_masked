
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_2__ phy; TYPE_1__ mac; } ;
struct ix_rx_queue {int irqs; } ;
struct adapter {int task_requests; int dev; int ctx; struct ixgbe_hw hw; struct ix_rx_queue* rx_queues; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

int
FUNC_8(void *VAR_16)
{
 struct adapter *VAR_17 = VAR_16;
 struct ix_rx_queue *VAR_18 = VAR_17->rx_queues;
 struct ixgbe_hw *VAR_19 = &VAR_17->hw;
 if_ctx_t VAR_20 = VAR_17->ctx;
 u32 VAR_21, VAR_22;

 VAR_21 = FUNC_2(VAR_19, VAR_3);

 ++VAR_18->irqs;
 if (VAR_21 == 0) {
  FUNC_6(VAR_20);
  return (VAR_0);
 }


 if ((VAR_19->device_id == VAR_2) &&
     (VAR_21 & VAR_5)) {
  FUNC_4(VAR_17->dev,
      "\nCRITICAL: FAN FAILURE!! REPLACE IMMEDIATELY!!\n");
  FUNC_3(VAR_19, VAR_9, FUNC_0(VAR_19));
 }


 if (VAR_21 & VAR_6) {
  FUNC_3(VAR_19, VAR_7, VAR_8);
  FUNC_5(VAR_20);
 }

 if (FUNC_7(VAR_19)) {

  if (VAR_19->mac.type >= VAR_14)
   VAR_22 = VAR_4;
  else
   VAR_22 = FUNC_1(VAR_19);

  if (VAR_21 & VAR_22) {
   FUNC_3(VAR_19, VAR_3, VAR_22);
   VAR_17->task_requests |= VAR_10;
  }

  if ((VAR_19->mac.type == VAR_13) &&
      (VAR_21 & FUNC_0(VAR_19))) {
   FUNC_3(VAR_19, VAR_3,
       FUNC_0(VAR_19));
   VAR_17->task_requests |= VAR_11;
  }
 }


 if ((VAR_19->phy.type == VAR_15) &&
     (VAR_21 & VAR_4))
  VAR_17->task_requests |= VAR_12;

 return (VAR_1);
}
