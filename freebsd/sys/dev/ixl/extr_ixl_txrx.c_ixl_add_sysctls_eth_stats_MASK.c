
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ixl_sysctl_info {char* member_1; char* member_2; scalar_t__ stat; int description; int name; int * member_0; } ;
struct i40e_eth_stats {int tx_broadcast; int tx_multicast; int tx_unicast; int tx_bytes; int rx_discards; int rx_broadcast; int rx_multicast; int rx_unicast; int rx_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,int ,int ,scalar_t__,int ) ;

void
FUNC_1(struct sysctl_ctx_list *VAR_2,
 struct sysctl_oid_list *VAR_3,
 struct i40e_eth_stats *VAR_4)
{
 struct ixl_sysctl_info VAR_5[] =
 {
  {&VAR_4->rx_bytes, "good_octets_rcvd", "Good Octets Received"},
  {&VAR_4->rx_unicast, "ucast_pkts_rcvd",
   "Unicast Packets Received"},
  {&VAR_4->rx_multicast, "mcast_pkts_rcvd",
   "Multicast Packets Received"},
  {&VAR_4->rx_broadcast, "bcast_pkts_rcvd",
   "Broadcast Packets Received"},
  {&VAR_4->rx_discards, "rx_discards", "Discarded RX packets"},
  {&VAR_4->tx_bytes, "good_octets_txd", "Good Octets Transmitted"},
  {&VAR_4->tx_unicast, "ucast_pkts_txd", "Unicast Packets Transmitted"},
  {&VAR_4->tx_multicast, "mcast_pkts_txd",
   "Multicast Packets Transmitted"},
  {&VAR_4->tx_broadcast, "bcast_pkts_txd",
   "Broadcast Packets Transmitted"},

  {0,0,0}
 };

 struct ixl_sysctl_info *VAR_6 = VAR_5;
 while (VAR_6->stat != 0)
 {
  FUNC_0(VAR_2, VAR_3, VAR_1, VAR_6->name,
    VAR_0, VAR_6->stat,
    VAR_6->description);
  VAR_6++;
 }
}
