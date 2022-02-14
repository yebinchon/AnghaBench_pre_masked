
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ixl_vsi {TYPE_2__* shared; } ;
struct ixl_vf {int vf_flags; int vsi; } ;
struct TYPE_3__ {scalar_t__ rx_discards; int tx_broadcast; int rx_broadcast; int tx_multicast; int rx_multicast; int tx_unicast; int rx_unicast; int tx_bytes; int rx_bytes; } ;
struct i40e_hw_port_stats {scalar_t__ link_xoff_rx; scalar_t__ crc_errors; scalar_t__ illegal_bytes; scalar_t__ tx_dropped_link_down; scalar_t__ mac_local_faults; scalar_t__ mac_remote_faults; scalar_t__ rx_length_errors; scalar_t__ link_xon_rx; scalar_t__ link_xon_tx; scalar_t__ link_xoff_tx; scalar_t__ rx_undersize; scalar_t__ rx_fragments; scalar_t__ rx_oversize; scalar_t__ rx_jabber; int tx_size_big; int tx_size_1522; int tx_size_1023; int tx_size_511; int tx_size_255; int tx_size_127; int tx_size_64; int rx_size_big; int rx_size_1522; int rx_size_1023; int rx_size_511; int rx_size_255; int rx_size_127; int rx_size_64; TYPE_1__ eth; } ;
struct i40e_hw {int port; } ;
struct ixl_pf {int stat_offsets_loaded; int num_vfs; struct ixl_vf* vfs; struct i40e_hw_port_stats stats; struct i40e_hw_port_stats stats_offsets; struct ixl_vsi vsi; struct i40e_hw hw; } ;
struct TYPE_4__ {int isc_pause_frames; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (int ) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (int ) ;
 int FUNC_44 (int ) ;
 int FUNC_45 (int ) ;
 int FUNC_46 (int ) ;
 int FUNC_47 (int ) ;
 int FUNC_48 (int ) ;
 int FUNC_49 (int ) ;
 int FUNC_50 (int ) ;
 int FUNC_51 (int ) ;
 int FUNC_52 (int ) ;
 int FUNC_53 (int ) ;
 int FUNC_54 (int ) ;
 int FUNC_55 (int ) ;
 int FUNC_56 (int ) ;
 int FUNC_57 (int ) ;
 int FUNC_58 (int ) ;
 int VAR_0 ;
 int FUNC_59 (struct i40e_hw*,int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_60 (struct i40e_hw*,int ,int ,int,int *,int *) ;
 int FUNC_61 (int *) ;
 int FUNC_62 (struct ixl_vsi*) ;

void
FUNC_63(struct ixl_pf *VAR_1)
{
 struct i40e_hw *VAR_2 = &VAR_1->hw;
 struct ixl_vsi *VAR_3 = &VAR_1->vsi;
 struct ixl_vf *VAR_4;
 u64 VAR_5 = VAR_1->stats.link_xoff_rx;

 struct i40e_hw_port_stats *VAR_6 = &VAR_1->stats;
 struct i40e_hw_port_stats *VAR_7 = &VAR_1->stats_offsets;


 FUNC_59(VAR_2, FUNC_4(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->crc_errors, &VAR_6->crc_errors);
 FUNC_59(VAR_2, FUNC_9(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->illegal_bytes, &VAR_6->illegal_bytes);
 FUNC_60(VAR_2, FUNC_5(VAR_2->port),
      FUNC_6(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->eth.rx_bytes, &VAR_6->eth.rx_bytes);
 FUNC_60(VAR_2, FUNC_7(VAR_2->port),
      FUNC_8(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->eth.tx_bytes, &VAR_6->eth.tx_bytes);
 FUNC_59(VAR_2, FUNC_48(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->eth.rx_discards,
      &VAR_6->eth.rx_discards);
 FUNC_60(VAR_2, FUNC_55(VAR_2->port),
      FUNC_56(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->eth.rx_unicast,
      &VAR_6->eth.rx_unicast);
 FUNC_60(VAR_2, FUNC_57(VAR_2->port),
      FUNC_58(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->eth.tx_unicast,
      &VAR_6->eth.tx_unicast);
 FUNC_60(VAR_2, FUNC_15(VAR_2->port),
      FUNC_16(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->eth.rx_multicast,
      &VAR_6->eth.rx_multicast);
 FUNC_60(VAR_2, FUNC_17(VAR_2->port),
      FUNC_18(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->eth.tx_multicast,
      &VAR_6->eth.tx_multicast);
 FUNC_60(VAR_2, FUNC_0(VAR_2->port),
      FUNC_1(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->eth.rx_broadcast,
      &VAR_6->eth.rx_broadcast);
 FUNC_60(VAR_2, FUNC_2(VAR_2->port),
      FUNC_3(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->eth.tx_broadcast,
      &VAR_6->eth.tx_broadcast);

 FUNC_59(VAR_2, FUNC_54(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->tx_dropped_link_down,
      &VAR_6->tx_dropped_link_down);
 FUNC_59(VAR_2, FUNC_14(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->mac_local_faults,
      &VAR_6->mac_local_faults);
 FUNC_59(VAR_2, FUNC_19(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->mac_remote_faults,
      &VAR_6->mac_remote_faults);
 FUNC_59(VAR_2, FUNC_51(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_length_errors,
      &VAR_6->rx_length_errors);


 FUNC_59(VAR_2, FUNC_12(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->link_xon_rx, &VAR_6->link_xon_rx);
 FUNC_59(VAR_2, FUNC_13(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->link_xon_tx, &VAR_6->link_xon_tx);
 FUNC_59(VAR_2, FUNC_10(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->link_xoff_rx, &VAR_6->link_xoff_rx);
 FUNC_59(VAR_2, FUNC_11(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->link_xoff_tx, &VAR_6->link_xoff_tx);





 if (VAR_1->stats.link_xoff_rx != VAR_5)
  VAR_3->shared->isc_pause_frames = 1;


 FUNC_60(VAR_2, FUNC_30(VAR_2->port),
      FUNC_31(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_size_64, &VAR_6->rx_size_64);
 FUNC_60(VAR_2, FUNC_22(VAR_2->port),
      FUNC_23(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_size_127, &VAR_6->rx_size_127);
 FUNC_60(VAR_2, FUNC_26(VAR_2->port),
      FUNC_27(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_size_255, &VAR_6->rx_size_255);
 FUNC_60(VAR_2, FUNC_28(VAR_2->port),
      FUNC_29(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_size_511, &VAR_6->rx_size_511);
 FUNC_60(VAR_2, FUNC_20(VAR_2->port),
      FUNC_21(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_size_1023, &VAR_6->rx_size_1023);
 FUNC_60(VAR_2, FUNC_24(VAR_2->port),
      FUNC_25(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_size_1522, &VAR_6->rx_size_1522);
 FUNC_60(VAR_2, FUNC_32(VAR_2->port),
      FUNC_33(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_size_big, &VAR_6->rx_size_big);


 FUNC_60(VAR_2, FUNC_44(VAR_2->port),
      FUNC_45(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->tx_size_64, &VAR_6->tx_size_64);
 FUNC_60(VAR_2, FUNC_36(VAR_2->port),
      FUNC_37(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->tx_size_127, &VAR_6->tx_size_127);
 FUNC_60(VAR_2, FUNC_40(VAR_2->port),
      FUNC_41(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->tx_size_255, &VAR_6->tx_size_255);
 FUNC_60(VAR_2, FUNC_42(VAR_2->port),
      FUNC_43(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->tx_size_511, &VAR_6->tx_size_511);
 FUNC_60(VAR_2, FUNC_34(VAR_2->port),
      FUNC_35(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->tx_size_1023, &VAR_6->tx_size_1023);
 FUNC_60(VAR_2, FUNC_38(VAR_2->port),
      FUNC_39(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->tx_size_1522, &VAR_6->tx_size_1522);
 FUNC_60(VAR_2, FUNC_46(VAR_2->port),
      FUNC_47(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->tx_size_big, &VAR_6->tx_size_big);

 FUNC_59(VAR_2, FUNC_53(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_undersize, &VAR_6->rx_undersize);
 FUNC_59(VAR_2, FUNC_49(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_fragments, &VAR_6->rx_fragments);
 FUNC_59(VAR_2, FUNC_52(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_oversize, &VAR_6->rx_oversize);
 FUNC_59(VAR_2, FUNC_50(VAR_2->port),
      VAR_1->stat_offsets_loaded,
      &VAR_7->rx_jabber, &VAR_6->rx_jabber);
 VAR_1->stat_offsets_loaded = 1;



 FUNC_62(VAR_3);

 for (int VAR_8 = 0; VAR_8 < VAR_1->num_vfs; VAR_8++) {
  VAR_4 = &VAR_1->vfs[VAR_8];
  if (VAR_4->vf_flags & VAR_0)
   FUNC_61(&VAR_1->vfs[VAR_8].vsi);
 }
}
