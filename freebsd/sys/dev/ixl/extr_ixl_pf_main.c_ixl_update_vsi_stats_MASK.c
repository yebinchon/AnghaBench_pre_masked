
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct i40e_eth_stats {int rx_unknown_protocol; scalar_t__ rx_discards; int tx_errors; scalar_t__ tx_multicast; scalar_t__ rx_multicast; int tx_bytes; int rx_bytes; scalar_t__ tx_broadcast; scalar_t__ tx_unicast; scalar_t__ rx_broadcast; scalar_t__ rx_unicast; scalar_t__ tx_discards; } ;
struct ixl_vsi {struct i40e_eth_stats eth_stats; struct ifnet* ifp; struct ixl_pf* back; } ;
struct TYPE_2__ {scalar_t__ rx_discards; } ;
struct i40e_hw_port_stats {TYPE_1__ eth; scalar_t__ rx_jabber; scalar_t__ rx_fragments; scalar_t__ rx_oversize; scalar_t__ rx_undersize; scalar_t__ illegal_bytes; scalar_t__ crc_errors; scalar_t__ tx_dropped_link_down; } ;
struct ixl_pf {struct i40e_hw_port_stats stats; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ixl_vsi*,int ) ;
 int FUNC_1 (struct ixl_vsi*,int ) ;
 int FUNC_2 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_3 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_4 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_5 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_6 (struct ixl_vsi*,int ) ;
 int FUNC_7 (struct ixl_vsi*,int ) ;
 int FUNC_8 (struct ixl_vsi*,int ) ;
 int FUNC_9 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_10 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_11 (struct ixl_vsi*,scalar_t__) ;
 int FUNC_12 (struct ixl_vsi*) ;

void
FUNC_13(struct ixl_vsi *VAR_0)
{
 struct ixl_pf *VAR_1;
 struct ifnet *VAR_2;
 struct i40e_eth_stats *VAR_3;
 u64 VAR_4;

 struct i40e_hw_port_stats *VAR_5;

 VAR_1 = VAR_0->back;
 VAR_2 = VAR_0->ifp;
 VAR_3 = &VAR_0->eth_stats;
 VAR_5 = &VAR_1->stats;

 FUNC_12(VAR_0);

 VAR_4 = VAR_3->tx_discards + VAR_5->tx_dropped_link_down;


 FUNC_4(VAR_0, VAR_3->rx_unicast +
                    VAR_3->rx_multicast +
      VAR_3->rx_broadcast);
 FUNC_10(VAR_0, VAR_3->tx_unicast +
                    VAR_3->tx_multicast +
      VAR_3->tx_broadcast);
 FUNC_1(VAR_0, VAR_3->rx_bytes);
 FUNC_7(VAR_0, VAR_3->tx_bytes);
 FUNC_3(VAR_0, VAR_3->rx_multicast);
 FUNC_9(VAR_0, VAR_3->tx_multicast);

 FUNC_2(VAR_0, VAR_5->crc_errors + VAR_5->illegal_bytes +
     VAR_5->rx_undersize + VAR_5->rx_oversize + VAR_5->rx_fragments +
     VAR_5->rx_jabber);
 FUNC_8(VAR_0, VAR_3->tx_errors);
 FUNC_5(VAR_0, VAR_3->rx_discards + VAR_5->eth.rx_discards);
 FUNC_11(VAR_0, VAR_4);
 FUNC_6(VAR_0, VAR_3->rx_unknown_protocol);
 FUNC_0(VAR_0, 0);
}
