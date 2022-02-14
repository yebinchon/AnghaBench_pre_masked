
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct i40e_eth_stats {int rx_unknown_protocol; int rx_discards; int tx_errors; scalar_t__ tx_multicast; scalar_t__ rx_multicast; int tx_bytes; int rx_bytes; scalar_t__ tx_broadcast; scalar_t__ tx_unicast; scalar_t__ rx_broadcast; scalar_t__ rx_unicast; int tx_discards; } ;
struct ixl_vsi {struct i40e_eth_stats eth_stats; } ;
struct iavf_sc {struct ixl_vsi vsi; } ;


 int FUNC_0 (struct ixl_vsi*,int ) ;
 int FUNC_1 (struct ixl_vsi*,int ) ;
 int FUNC_2 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_3 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_4 (struct ixl_vsi*,int ) ;
 int FUNC_5 (struct ixl_vsi*,int ) ;
 int FUNC_6 (struct ixl_vsi*,int ) ;
 int FUNC_7 (struct ixl_vsi*,int ) ;
 int FUNC_8 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_9 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_10 (struct ixl_vsi*,int ) ;

void
FUNC_11(struct iavf_sc *VAR_0, struct i40e_eth_stats *VAR_1)
{
 struct ixl_vsi *VAR_2 = &VAR_0->vsi;
 uint64_t VAR_3;

 VAR_3 = VAR_1->tx_discards;


 FUNC_3(VAR_2, VAR_1->rx_unicast +
                    VAR_1->rx_multicast +
      VAR_1->rx_broadcast);
 FUNC_9(VAR_2, VAR_1->tx_unicast +
                    VAR_1->tx_multicast +
      VAR_1->tx_broadcast);
 FUNC_1(VAR_2, VAR_1->rx_bytes);
 FUNC_6(VAR_2, VAR_1->tx_bytes);
 FUNC_2(VAR_2, VAR_1->rx_multicast);
 FUNC_8(VAR_2, VAR_1->tx_multicast);

 FUNC_7(VAR_2, VAR_1->tx_errors);
 FUNC_4(VAR_2, VAR_1->rx_discards);
 FUNC_10(VAR_2, VAR_3);
 FUNC_5(VAR_2, VAR_1->rx_unknown_protocol);
 FUNC_0(VAR_2, 0);

 VAR_2->eth_stats = *VAR_1;
}
