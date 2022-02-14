
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union e1000_rx_desc_extended {int dummy; } e1000_rx_desc_extended ;
typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;
struct rx_ring {int rx_paddr; int hdr_split; } ;
struct ifnet {int * if_vlantrunk; } ;
struct em_rx_queue {struct rx_ring rxr; } ;
struct e1000_rx_desc {int dummy; } ;
struct TYPE_7__ {scalar_t__ type; int mc_filter_type; } ;
struct e1000_hw {TYPE_3__ mac; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int value; } ;
struct adapter {int tx_num_queues; int rx_num_queues; int rx_mbuf_sz; scalar_t__ fc; struct e1000_hw hw; struct em_rx_queue* rx_queues; TYPE_2__ rx_int_delay; TYPE_1__ rx_abs_int_delay; TYPE_4__* shared; } ;
typedef TYPE_4__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_8__ {int* isc_nrxd; int isc_max_frame_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_17 ;
 int FUNC_6 (struct e1000_hw*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_7 (int) ;
 int VAR_28 ;
 int FUNC_8 (int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_9 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_10 (char*) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 int FUNC_11 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_52 ;
 int VAR_53 ;
 int FUNC_12 (struct adapter*) ;
 int FUNC_13 (struct ifnet*) ;
 scalar_t__ FUNC_14 (struct ifnet*) ;
 struct ifnet* FUNC_15 (int ) ;
 struct adapter* FUNC_16 (int ) ;
 int VAR_54 ;
 int FUNC_17 (struct adapter*) ;
 scalar_t__ VAR_55 ;

__attribute__((used)) static void
FUNC_18(if_ctx_t VAR_56)
{
 struct adapter *VAR_57 = FUNC_16(VAR_56);
 if_softc_ctx_t VAR_58 = VAR_57->shared;
 struct ifnet *VAR_59 = FUNC_15(VAR_56);
 struct e1000_hw *VAR_60 = &VAR_57->hw;
 struct em_rx_queue *VAR_61;
 int VAR_62;
 u32 VAR_63, VAR_64, VAR_65;

 FUNC_10("em_initialize_receive_units: begin");





 VAR_63 = FUNC_6(VAR_60, VAR_3);

 if ((VAR_60->mac.type != VAR_45) && (VAR_60->mac.type != VAR_47))
  FUNC_9(VAR_60, VAR_3, VAR_63 & ~VAR_6);


 VAR_63 &= ~(3 << VAR_9);
 VAR_63 |= VAR_6 | VAR_4 |
     VAR_7 | VAR_10 |
     (VAR_60->mac.mc_filter_type << VAR_9);


 VAR_63 &= ~VAR_11;


 if (FUNC_14(VAR_59) > VAR_32)
  VAR_63 |= VAR_8;
 else
  VAR_63 &= ~VAR_8;


 if (!VAR_53)
  VAR_63 |= VAR_12;

 if (VAR_57->hw.mac.type >= VAR_42) {
  FUNC_9(&VAR_57->hw, VAR_2,
       VAR_57->rx_abs_int_delay.value);





  FUNC_9(VAR_60, VAR_1, VAR_0);
 }
 FUNC_9(&VAR_57->hw, VAR_17,
     VAR_57->rx_int_delay.value);


 VAR_65 = FUNC_6(VAR_60, VAR_18);
 VAR_65 |= VAR_20;




 if (VAR_60->mac.type == VAR_45) {
  for (int VAR_66 = 0; VAR_66 < 4; VAR_66++)
   FUNC_9(VAR_60, FUNC_0(VAR_66),
       VAR_0);

  VAR_65 |= VAR_19;
 }
 FUNC_9(VAR_60, VAR_18, VAR_65);

 VAR_64 = FUNC_6(VAR_60, VAR_22);
 if (FUNC_13(VAR_59) & VAR_34 &&
     VAR_57->hw.mac.type >= VAR_43) {
  if (VAR_57->tx_num_queues > 1) {
   if (VAR_57->hw.mac.type >= VAR_55) {
    VAR_64 |= VAR_26;
    if (VAR_60->mac.type != VAR_46)
     VAR_64 |= VAR_23;
   } else
    VAR_64 |= VAR_27 |
     VAR_24 |
     VAR_26;
  } else {
   if (VAR_57->hw.mac.type >= VAR_55)
    VAR_64 |= VAR_25;
   else
    VAR_64 |= VAR_27 | VAR_24;
   if (VAR_57->hw.mac.type > VAR_46)
    VAR_64 |= VAR_23;
  }
 } else
  VAR_64 &= ~VAR_27;

 FUNC_9(VAR_60, VAR_22, VAR_64);

 if (VAR_57->rx_num_queues > 1) {
  if (VAR_57->hw.mac.type >= VAR_55)
   FUNC_17(VAR_57);
  else
   FUNC_12(VAR_57);
 }
 if (VAR_60->mac.type == VAR_44)
  FUNC_9(VAR_60, VAR_17, 0x20);

 for (VAR_62 = 0, VAR_61 = VAR_57->rx_queues; VAR_62 < VAR_57->rx_num_queues; VAR_62++, VAR_61++) {
  struct rx_ring *VAR_67 = &VAR_61->rxr;

  u64 VAR_68 = VAR_67->rx_paddr;




  FUNC_9(VAR_60, FUNC_4(VAR_62),
      VAR_58->isc_nrxd[0] * sizeof(union e1000_rx_desc_extended));
  FUNC_9(VAR_60, FUNC_1(VAR_62), (u32)(VAR_68 >> 32));
  FUNC_9(VAR_60, FUNC_2(VAR_62), (u32)VAR_68);

  FUNC_9(VAR_60, FUNC_3(VAR_62), 0);
  FUNC_9(VAR_60, FUNC_5(VAR_62), 0);
 }
 if (((VAR_57->hw.mac.type == VAR_51) ||
     (VAR_57->hw.mac.type == VAR_52) ||
     (VAR_57->hw.mac.type == VAR_50)) &&
     (FUNC_14(VAR_59) > VAR_32)) {
  u32 VAR_69 = FUNC_6(VAR_60, FUNC_7(0));
  FUNC_9(VAR_60, FUNC_7(0), VAR_69 | 3);
 } else if (VAR_57->hw.mac.type == VAR_45) {
  for (int VAR_70 = 0; VAR_70 < VAR_57->rx_num_queues; VAR_70++) {
   u32 VAR_71 = FUNC_6(VAR_60, FUNC_7(VAR_70));
   VAR_71 |= 0x20;
   VAR_71 |= 4 << 8;
   VAR_71 |= 4 << 16;
   VAR_71 |= 1 << 24;
   FUNC_9(VAR_60, FUNC_7(VAR_70), VAR_71);
  }
 } else if (VAR_57->hw.mac.type >= VAR_55) {
  u32 VAR_72, VAR_73 = 0;

  if (FUNC_14(VAR_59) > VAR_32) {

   if (VAR_57->rx_mbuf_sz <= 4096) {
    VAR_73 |= 4096 >> VAR_29;
    VAR_63 |= VAR_14 | VAR_5;
   } else if (VAR_57->rx_mbuf_sz > 4096) {
    VAR_73 |= 8192 >> VAR_29;
    VAR_63 |= VAR_15 | VAR_5;
   }
   VAR_72 = VAR_58->isc_max_frame_size;

   if (VAR_59->if_vlantrunk != ((void*)0))
    VAR_72 += VAR_41;
   FUNC_9(&VAR_57->hw, VAR_21, VAR_72);
  } else {
   VAR_73 |= 2048 >> VAR_29;
   VAR_63 |= VAR_13;
  }







  if ((VAR_57->rx_num_queues > 1) &&
      (VAR_57->fc == VAR_48 ||
       VAR_57->fc == VAR_49)) {
   VAR_73 |= VAR_31;
  }

  for (VAR_62 = 0, VAR_61 = VAR_57->rx_queues; VAR_62 < VAR_57->rx_num_queues; VAR_62++, VAR_61++) {
   struct rx_ring *VAR_74 = &VAR_61->rxr;
   u64 VAR_75 = VAR_74->rx_paddr;
   u32 VAR_76;





   VAR_73 |= VAR_30;


   FUNC_9(VAR_60, FUNC_4(VAR_62),
     VAR_58->isc_nrxd[0] * sizeof(struct e1000_rx_desc));
   FUNC_9(VAR_60, FUNC_1(VAR_62),
     (uint32_t)(VAR_75 >> 32));
   FUNC_9(VAR_60, FUNC_2(VAR_62),
     (uint32_t)VAR_75);
   FUNC_9(VAR_60, FUNC_8(VAR_62), VAR_73);

   VAR_76 = FUNC_6(VAR_60, FUNC_7(VAR_62));
   VAR_76 |= VAR_28;
   VAR_76 &= 0xFFF00000;
   VAR_76 |= VAR_36;
   VAR_76 |= VAR_35 << 8;
   VAR_76 |= VAR_37 << 16;
   FUNC_9(VAR_60, FUNC_7(VAR_62), VAR_76);
  }
 } else if (VAR_57->hw.mac.type >= VAR_52) {
  if (FUNC_14(VAR_59) > VAR_32)
   FUNC_11(VAR_60, VAR_40);
  else
   FUNC_11(VAR_60, VAR_33);
 }


 VAR_63 &= ~VAR_16;

 if (VAR_57->hw.mac.type < VAR_55) {
  if (VAR_57->rx_mbuf_sz == VAR_38)
   VAR_63 |= VAR_13;
  else if (VAR_57->rx_mbuf_sz == VAR_39)
   VAR_63 |= VAR_14 | VAR_5;
  else if (VAR_57->rx_mbuf_sz > VAR_39)
   VAR_63 |= VAR_15 | VAR_5;


  VAR_63 &= ~0x00000C00;
 }


 FUNC_9(VAR_60, VAR_3, VAR_63);

 return;
}
