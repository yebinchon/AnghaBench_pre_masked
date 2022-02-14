
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {TYPE_2__ phy; int device_id; TYPE_1__ mac; } ;
struct ix_rx_queue {int msix; } ;
struct adapter {int feat_en; scalar_t__ intr_type; int feat_cap; int num_rx_queues; struct ixgbe_hw hw; struct ix_rx_queue* rx_queues; } ;
typedef int if_ctx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (struct adapter*,int ) ;





 int VAR_24 ;

void
FUNC_6(if_ctx_t VAR_25)
{
 struct adapter *VAR_26 = FUNC_4(VAR_25);
 struct ixgbe_hw *VAR_27 = &VAR_26->hw;
 struct ix_rx_queue *VAR_28 = VAR_26->rx_queues;
 u32 VAR_29, VAR_30;

 VAR_29 = (VAR_9 & ~VAR_17);

 switch (VAR_26->hw.mac.type) {
 case 132:
  VAR_29 |= VAR_8;

  VAR_29 |= VAR_11;

  VAR_29 |= VAR_12;
  VAR_29 |= VAR_13;
  break;
 case 131:

  VAR_30 = FUNC_1(VAR_27, VAR_22);
  if (VAR_30 & VAR_23)
   VAR_29 |= VAR_18;
  VAR_29 |= VAR_8;
  break;
 case 130:

  VAR_29 |= VAR_18;
  VAR_29 |= VAR_8;
  break;
 case 128:
 case 129:

  if (VAR_27->device_id == VAR_4 ||
      VAR_27->device_id == VAR_1 ||
      VAR_27->device_id == VAR_2 ||
      VAR_27->device_id == VAR_3)
   VAR_29 |= FUNC_0(VAR_27);
  if (VAR_27->phy.type == VAR_24)
   VAR_29 |= VAR_6;
  VAR_29 |= VAR_8;
  break;
 default:
  break;
 }


 if (VAR_26->feat_en & VAR_19)
  VAR_29 |= VAR_12;

 if (VAR_26->feat_en & VAR_21)
  VAR_29 |= VAR_15;

 if (VAR_26->feat_en & VAR_20)
  VAR_29 |= VAR_10;

 FUNC_3(VAR_27, VAR_7, VAR_29);


 if (VAR_26->intr_type == VAR_0) {
  VAR_29 = VAR_9;

  VAR_29 &= ~VAR_16;
  VAR_29 &= ~VAR_14;
  if (VAR_26->feat_cap & VAR_21)
   VAR_29 &= ~VAR_15;
  FUNC_3(VAR_27, VAR_5, VAR_29);
 }






 for (int VAR_31 = 0; VAR_31 < VAR_26->num_rx_queues; VAR_31++, VAR_28++)
  FUNC_5(VAR_26, VAR_28->msix);

 FUNC_2(VAR_27);

}
