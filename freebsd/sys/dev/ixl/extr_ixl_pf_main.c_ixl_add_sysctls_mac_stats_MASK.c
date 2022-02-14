
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ixl_sysctl_info {char* member_1; char* member_2; scalar_t__ stat; int description; int name; int * member_0; } ;
struct i40e_eth_stats {int dummy; } ;
struct i40e_hw_port_stats {int link_xoff_rx; int link_xoff_tx; int link_xon_rx; int link_xon_tx; int tx_size_big; int tx_size_1522; int tx_size_1023; int tx_size_511; int tx_size_255; int tx_size_127; int tx_size_64; int checksum_error; int rx_jabber; int rx_oversize; int rx_fragments; int rx_undersize; int rx_size_big; int rx_size_1522; int rx_size_1023; int rx_size_511; int rx_size_255; int rx_size_127; int rx_size_64; int rx_length_errors; int mac_remote_faults; int mac_local_faults; int illegal_bytes; int crc_errors; struct i40e_eth_stats eth; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,int ,int ,scalar_t__,int ) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,struct i40e_eth_stats*) ;

void
FUNC_4(struct sysctl_ctx_list *VAR_2,
 struct sysctl_oid_list *VAR_3,
 struct i40e_hw_port_stats *VAR_4)
{
 struct sysctl_oid *VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1, "mac",
        VAR_0, ((void*)0), "Mac Statistics");
 struct sysctl_oid_list *VAR_6 = FUNC_2(VAR_5);

 struct i40e_eth_stats *VAR_7 = &VAR_4->eth;
 FUNC_3(VAR_2, VAR_6, VAR_7);

 struct ixl_sysctl_info VAR_8[] =
 {
  {&VAR_4->crc_errors, "crc_errors", "CRC Errors"},
  {&VAR_4->illegal_bytes, "illegal_bytes", "Illegal Byte Errors"},
  {&VAR_4->mac_local_faults, "local_faults", "MAC Local Faults"},
  {&VAR_4->mac_remote_faults, "remote_faults", "MAC Remote Faults"},
  {&VAR_4->rx_length_errors, "rx_length_errors", "Receive Length Errors"},

  {&VAR_4->rx_size_64, "rx_frames_64", "64 byte frames received"},
  {&VAR_4->rx_size_127, "rx_frames_65_127", "65-127 byte frames received"},
  {&VAR_4->rx_size_255, "rx_frames_128_255", "128-255 byte frames received"},
  {&VAR_4->rx_size_511, "rx_frames_256_511", "256-511 byte frames received"},
  {&VAR_4->rx_size_1023, "rx_frames_512_1023", "512-1023 byte frames received"},
  {&VAR_4->rx_size_1522, "rx_frames_1024_1522", "1024-1522 byte frames received"},
  {&VAR_4->rx_size_big, "rx_frames_big", "1523-9522 byte frames received"},
  {&VAR_4->rx_undersize, "rx_undersize", "Undersized packets received"},
  {&VAR_4->rx_fragments, "rx_fragmented", "Fragmented packets received"},
  {&VAR_4->rx_oversize, "rx_oversized", "Oversized packets received"},
  {&VAR_4->rx_jabber, "rx_jabber", "Received Jabber"},
  {&VAR_4->checksum_error, "checksum_errors", "Checksum Errors"},

  {&VAR_4->tx_size_64, "tx_frames_64", "64 byte frames transmitted"},
  {&VAR_4->tx_size_127, "tx_frames_65_127", "65-127 byte frames transmitted"},
  {&VAR_4->tx_size_255, "tx_frames_128_255", "128-255 byte frames transmitted"},
  {&VAR_4->tx_size_511, "tx_frames_256_511", "256-511 byte frames transmitted"},
  {&VAR_4->tx_size_1023, "tx_frames_512_1023", "512-1023 byte frames transmitted"},
  {&VAR_4->tx_size_1522, "tx_frames_1024_1522", "1024-1522 byte frames transmitted"},
  {&VAR_4->tx_size_big, "tx_frames_big", "1523-9522 byte frames transmitted"},

  {&VAR_4->link_xon_tx, "xon_txd", "Link XON transmitted"},
  {&VAR_4->link_xon_rx, "xon_recvd", "Link XON received"},
  {&VAR_4->link_xoff_tx, "xoff_txd", "Link XOFF transmitted"},
  {&VAR_4->link_xoff_rx, "xoff_recvd", "Link XOFF received"},

  {0,0,0}
 };

 struct ixl_sysctl_info *VAR_9 = VAR_8;
 while (VAR_9->stat != 0)
 {
  FUNC_1(VAR_2, VAR_6, VAR_1, VAR_9->name,
    VAR_0, VAR_9->stat,
    VAR_9->description);
  VAR_9++;
 }
}
