
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct em_tx_queue {int msix; int eims; } ;
struct em_rx_queue {int msix; int eims; } ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct adapter {int rx_num_queues; int tx_num_queues; int que_mask; int linkvec; int link_mask; struct em_rx_queue* rx_queues; struct em_tx_queue* tx_queues; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,int,int) ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_6(struct adapter *VAR_17)
{
 struct e1000_hw *VAR_18 = &VAR_17->hw;
 struct em_rx_queue *VAR_19;
 struct em_tx_queue *VAR_20;
 u32 VAR_21, VAR_22 = 0, VAR_23 = 0;


 if (VAR_17->hw.mac.type != 136)
  FUNC_4(VAR_18, VAR_8,
      VAR_10 | VAR_9 |
      VAR_12 | VAR_11);


 switch (VAR_17->hw.mac.type) {
 case 134:
 case 131:
 case 130:
 case 133:
 case 132:
 case 129:
 case 128:

  for (int VAR_24 = 0; VAR_24 < VAR_17->rx_num_queues; VAR_24++) {
   u32 VAR_25 = VAR_24 >> 1;
   VAR_22 = FUNC_3(VAR_18, VAR_13, VAR_25);
   VAR_19 = &VAR_17->rx_queues[VAR_24];
   if (VAR_24 & 1) {
    VAR_22 &= 0xFF00FFFF;
    VAR_22 |= (VAR_19->msix | VAR_15) << 16;
   } else {
    VAR_22 &= 0xFFFFFF00;
    VAR_22 |= VAR_19->msix | VAR_15;
   }
   FUNC_5(VAR_18, VAR_13, VAR_25, VAR_22);
  }

  for (int VAR_26 = 0; VAR_26 < VAR_17->tx_num_queues; VAR_26++) {
   u32 VAR_27 = VAR_26 >> 1;
   VAR_22 = FUNC_3(VAR_18, VAR_13, VAR_27);
   VAR_20 = &VAR_17->tx_queues[VAR_26];
   if (VAR_26 & 1) {
    VAR_22 &= 0x00FFFFFF;
    VAR_22 |= (VAR_20->msix | VAR_15) << 24;
   } else {
    VAR_22 &= 0xFFFF00FF;
    VAR_22 |= (VAR_20->msix | VAR_15) << 8;
   }
   FUNC_5(VAR_18, VAR_13, VAR_27, VAR_22);
   VAR_17->que_mask |= VAR_20->eims;
  }


  VAR_22 = (VAR_17->linkvec | VAR_15) << 8;
  VAR_17->link_mask = 1 << VAR_17->linkvec;
  FUNC_4(VAR_18, VAR_14, VAR_22);
  break;
 case 135:

  for (int VAR_28 = 0; VAR_28 < VAR_17->rx_num_queues; VAR_28++) {
   u32 VAR_29 = VAR_28 & 0x7;
   VAR_22 = FUNC_3(VAR_18, VAR_13, VAR_29);
   VAR_19 = &VAR_17->rx_queues[VAR_28];
   if (VAR_28 < 8) {
    VAR_22 &= 0xFFFFFF00;
    VAR_22 |= VAR_19->msix | VAR_15;
   } else {
    VAR_22 &= 0xFF00FFFF;
    VAR_22 |= (VAR_19->msix | VAR_15) << 16;
   }
   FUNC_5(VAR_18, VAR_13, VAR_29, VAR_22);
   VAR_17->que_mask |= VAR_19->eims;
  }

  for (int VAR_30 = 0; VAR_30 < VAR_17->tx_num_queues; VAR_30++) {
   u32 VAR_31 = VAR_30 & 0x7;
   VAR_22 = FUNC_3(VAR_18, VAR_13, VAR_31);
   VAR_20 = &VAR_17->tx_queues[VAR_30];
   if (VAR_30 < 8) {
    VAR_22 &= 0xFFFF00FF;
    VAR_22 |= (VAR_20->msix | VAR_15) << 8;
   } else {
    VAR_22 &= 0x00FFFFFF;
    VAR_22 |= (VAR_20->msix | VAR_15) << 24;
   }
   FUNC_5(VAR_18, VAR_13, VAR_31, VAR_22);
   VAR_17->que_mask |= VAR_20->eims;
  }


  VAR_22 = (VAR_17->linkvec | VAR_15) << 8;
  VAR_17->link_mask = 1 << VAR_17->linkvec;
  FUNC_4(VAR_18, VAR_14, VAR_22);
  break;

 case 136:

  VAR_21 = FUNC_2(VAR_18, VAR_0);
  VAR_21 |= VAR_3;

  VAR_21 |= VAR_1;
  VAR_21 |= VAR_2;
  FUNC_4(VAR_18, VAR_0, VAR_21);


  for (int VAR_32 = 0; VAR_32 < VAR_17->rx_num_queues; VAR_32++) {
   VAR_19 = &VAR_17->rx_queues[VAR_32];
   VAR_21 = VAR_4 << VAR_32;
   VAR_21 |= VAR_5 << VAR_32;
   VAR_19->eims = VAR_21;
   FUNC_5(VAR_18, FUNC_1(0),
       VAR_32, VAR_19->eims);
   VAR_17->que_mask |= VAR_19->eims;
  }


  FUNC_4(VAR_18, FUNC_1(VAR_17->linkvec),
      VAR_6);
  VAR_17->link_mask |= VAR_6;
 default:
  break;
 }


 if (VAR_16 > 0)
  VAR_23 = (4000000 / VAR_16) & 0x7FFC;

 if (VAR_18->mac.type == 136)
  VAR_23 |= VAR_23 << 16;
 else
  VAR_23 |= VAR_7;

 for (int VAR_33 = 0; VAR_33 < VAR_17->rx_num_queues; VAR_33++) {
  VAR_19 = &VAR_17->rx_queues[VAR_33];
  FUNC_4(VAR_18, FUNC_0(VAR_19->msix), VAR_23);
 }

 return;
}
