
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_eth_stats {int tx_broadcast; int tx_multicast; int tx_unicast; int tx_bytes; int rx_broadcast; int rx_multicast; int rx_unicast; int rx_bytes; int rx_discards; int tx_errors; } ;
struct TYPE_2__ {int stat_counter_idx; } ;
struct ixl_vsi {int stat_offsets_loaded; struct i40e_eth_stats eth_stats_offsets; struct i40e_eth_stats eth_stats; TYPE_1__ info; scalar_t__ back; } ;
struct i40e_hw_port_stats {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw_port_stats stats; struct i40e_hw hw; } ;


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
 int FUNC_18 (struct i40e_hw*,int ,int,int *,int *) ;
 int FUNC_19 (struct i40e_hw*,int ,int ,int,int *,int *) ;

void
FUNC_20(struct ixl_vsi *VAR_0)
{
 struct ixl_pf *VAR_1 = (struct ixl_pf *)VAR_0->back;
 struct i40e_hw *VAR_2 = &VAR_1->hw;
 struct i40e_eth_stats *VAR_3;
 struct i40e_eth_stats *VAR_4;
 struct i40e_hw_port_stats *VAR_5;
 u16 VAR_6 = VAR_0->info.stat_counter_idx;

 VAR_3 = &VAR_0->eth_stats;
 VAR_4 = &VAR_0->eth_stats_offsets;
 VAR_5 = &VAR_1->stats;


 FUNC_18(VAR_2, FUNC_13(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_errors, &VAR_3->tx_errors);
 FUNC_18(VAR_2, FUNC_12(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_discards, &VAR_3->rx_discards);

 FUNC_19(VAR_2, FUNC_4(VAR_6),
      FUNC_5(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_bytes, &VAR_3->rx_bytes);
 FUNC_19(VAR_2, FUNC_14(VAR_6),
      FUNC_15(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_unicast, &VAR_3->rx_unicast);
 FUNC_19(VAR_2, FUNC_8(VAR_6),
      FUNC_9(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_multicast, &VAR_3->rx_multicast);
 FUNC_19(VAR_2, FUNC_0(VAR_6),
      FUNC_1(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_broadcast, &VAR_3->rx_broadcast);

 FUNC_19(VAR_2, FUNC_6(VAR_6),
      FUNC_7(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_bytes, &VAR_3->tx_bytes);
 FUNC_19(VAR_2, FUNC_16(VAR_6),
      FUNC_17(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_unicast, &VAR_3->tx_unicast);
 FUNC_19(VAR_2, FUNC_10(VAR_6),
      FUNC_11(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_multicast, &VAR_3->tx_multicast);
 FUNC_19(VAR_2, FUNC_2(VAR_6),
      FUNC_3(VAR_6),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_broadcast, &VAR_3->tx_broadcast);
 VAR_0->stat_offsets_loaded = 1;
}
