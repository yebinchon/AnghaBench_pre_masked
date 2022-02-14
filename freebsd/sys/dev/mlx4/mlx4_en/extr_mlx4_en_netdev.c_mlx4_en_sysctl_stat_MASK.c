
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct mlx4_en_tx_ring {int defrag_attempts; int tso_packets; int bytes; int packets; } ;
struct mlx4_en_rx_ring {int errors; int bytes; int packets; } ;
struct TYPE_6__ {int tx_gt_1548_bytes_packets; int tx_1548_bytes_packets; int tx_1522_bytes_packets; int tx_1518_bytes_packets; int tx_1023_bytes_packets; int tx_511_bytes_packets; int tx_255_bytes_packets; int tx_127_bytes_packets; int tx_lt_64_bytes_packets; int tx_dropped; int tx_errors; int tx_broadcast_packets; int tx_multicast_packets; int tx_bytes; int tx_packets; int rx_gt_1548_bytes_packets; int rx_1548_bytes_packets; int rx_1522_bytes_packets; int rx_1518_bytes_packets; int rx_1023_bytes_packets; int rx_511_bytes_packets; int rx_255_bytes_packets; int rx_127_bytes_packets; int rx_lt_64_bytes_packets; int rx_out_range_length_error; int rx_in_range_length_error; int rx_jabbers; int rx_crc_errors; int rx_over_errors; int rx_length_errors; int rx_dropped; int rx_errors; int rx_broadcast_packets; int rx_multicast_packets; int rx_packets; int rx_bytes; } ;
struct TYPE_5__ {int defrag_attempts; int tx_chksum_offload; int rx_chksum_none; int rx_chksum_good; int rx_alloc_failed; int oversized_packets; int tx_timeout; int wake_queue; int queue_stopped; int tso_packets; } ;
struct TYPE_4__ {int rx_coal_avg; int tx_coal_avg; int inflight_avg; int tx_pktsz_avg; int tx_poll; } ;
struct mlx4_en_priv {int tx_ring_num; int rx_ring_num; struct mlx4_en_rx_ring** rx_ring; struct mlx4_en_tx_ring** tx_ring; TYPE_3__ pkstats; TYPE_2__ port_stats; TYPE_1__ pstats; struct sysctl_oid* stat_sysctl; struct sysctl_oid* conf_sysctl; struct sysctl_ctx_list stat_ctx; } ;
typedef int namebuf ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (struct sysctl_ctx_list*) ;

__attribute__((used)) static void FUNC_7(struct mlx4_en_priv *VAR_2)
{
 struct sysctl_ctx_list *VAR_3;
 struct sysctl_oid_list *VAR_4;
 struct sysctl_oid *VAR_5;
 struct sysctl_oid_list *VAR_6;
 struct mlx4_en_tx_ring *VAR_7;
 struct mlx4_en_rx_ring *VAR_8;
 char VAR_9[128];
 int VAR_10;

 VAR_3 = &VAR_2->stat_ctx;
 FUNC_6(VAR_3);
 VAR_2->stat_sysctl = FUNC_0(VAR_3, FUNC_4(VAR_2->conf_sysctl), VAR_1,
     "stat", VAR_0, ((void*)0), "Statistics");
 VAR_4 = FUNC_4(VAR_2->stat_sysctl);
 FUNC_2(VAR_3, VAR_4, VAR_1, "tso_packets", VAR_0,
     &VAR_2->port_stats.tso_packets, 0, "TSO packets sent");
 FUNC_2(VAR_3, VAR_4, VAR_1, "queue_stopped", VAR_0,
     &VAR_2->port_stats.queue_stopped, 0, "Queue full");
 FUNC_2(VAR_3, VAR_4, VAR_1, "wake_queue", VAR_0,
     &VAR_2->port_stats.wake_queue, 0, "Queue resumed after full");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_timeout", VAR_0,
     &VAR_2->port_stats.tx_timeout, 0, "Transmit timeouts");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_oversized_packets", VAR_0,
     &VAR_2->port_stats.oversized_packets, 0, "TX oversized packets, m_defrag failed");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_alloc_failed", VAR_0,
     &VAR_2->port_stats.rx_alloc_failed, 0, "RX failed to allocate mbuf");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_chksum_good", VAR_0,
            &VAR_2->port_stats.rx_chksum_good, 0, "RX checksum offload success");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_chksum_none", VAR_0,
     &VAR_2->port_stats.rx_chksum_none, 0, "RX without checksum offload");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_chksum_offload",
     VAR_0, &VAR_2->port_stats.tx_chksum_offload, 0,
     "TX checksum offloads");
 FUNC_2(VAR_3, VAR_4, VAR_1, "defrag_attempts",
     VAR_0, &VAR_2->port_stats.defrag_attempts, 0,
     "Oversized chains defragged");


 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_bytes", VAR_0,
     &VAR_2->pkstats.rx_bytes, 0, "RX Bytes");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_packets", VAR_0,
     &VAR_2->pkstats.rx_packets, 0, "RX packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_multicast_packets", VAR_0,
     &VAR_2->pkstats.rx_multicast_packets, 0, "RX Multicast Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_broadcast_packets", VAR_0,
     &VAR_2->pkstats.rx_broadcast_packets, 0, "RX Broadcast Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_errors", VAR_0,
     &VAR_2->pkstats.rx_errors, 0, "RX Errors");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_dropped", VAR_0,
     &VAR_2->pkstats.rx_dropped, 0, "RX Dropped");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_length_errors", VAR_0,
     &VAR_2->pkstats.rx_length_errors, 0, "RX Length Errors");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_over_errors", VAR_0,
     &VAR_2->pkstats.rx_over_errors, 0, "RX Over Errors");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_crc_errors", VAR_0,
     &VAR_2->pkstats.rx_crc_errors, 0, "RX CRC Errors");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_jabbers", VAR_0,
     &VAR_2->pkstats.rx_jabbers, 0, "RX Jabbers");

 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_in_range_length_error", VAR_0,
     &VAR_2->pkstats.rx_in_range_length_error, 0, "RX IN_Range Length Error");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_out_range_length_error",
     VAR_0, &VAR_2->pkstats.rx_out_range_length_error, 0,
     "RX Out Range Length Error");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_lt_64_bytes_packets", VAR_0,
     &VAR_2->pkstats.rx_lt_64_bytes_packets, 0, "RX Lt 64 Bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_127_bytes_packets", VAR_0,
     &VAR_2->pkstats.rx_127_bytes_packets, 0, "RX 127 bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_255_bytes_packets", VAR_0,
     &VAR_2->pkstats.rx_255_bytes_packets, 0, "RX 255 bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_511_bytes_packets", VAR_0,
     &VAR_2->pkstats.rx_511_bytes_packets, 0, "RX 511 bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_1023_bytes_packets", VAR_0,
     &VAR_2->pkstats.rx_1023_bytes_packets, 0, "RX 1023 bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_1518_bytes_packets", VAR_0,
     &VAR_2->pkstats.rx_1518_bytes_packets, 0, "RX 1518 bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_1522_bytes_packets", VAR_0,
     &VAR_2->pkstats.rx_1522_bytes_packets, 0, "RX 1522 bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_1548_bytes_packets", VAR_0,
     &VAR_2->pkstats.rx_1548_bytes_packets, 0, "RX 1548 bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "rx_gt_1548_bytes_packets", VAR_0,
     &VAR_2->pkstats.rx_gt_1548_bytes_packets, 0,
     "RX Greater Then 1548 bytes Packets");

 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_packets", VAR_0,
     &VAR_2->pkstats.tx_packets, 0, "TX packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_bytes", VAR_0,
     &VAR_2->pkstats.tx_bytes, 0, "TX Bytes");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_multicast_packets", VAR_0,
     &VAR_2->pkstats.tx_multicast_packets, 0, "TX Multicast Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_broadcast_packets", VAR_0,
     &VAR_2->pkstats.tx_broadcast_packets, 0, "TX Broadcast Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_errors", VAR_0,
     &VAR_2->pkstats.tx_errors, 0, "TX Errors");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_dropped", VAR_0,
     &VAR_2->pkstats.tx_dropped, 0, "TX Dropped");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_lt_64_bytes_packets", VAR_0,
     &VAR_2->pkstats.tx_lt_64_bytes_packets, 0, "TX Less Then 64 Bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_127_bytes_packets", VAR_0,
     &VAR_2->pkstats.tx_127_bytes_packets, 0, "TX 127 Bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_255_bytes_packets", VAR_0,
     &VAR_2->pkstats.tx_255_bytes_packets, 0, "TX 255 Bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_511_bytes_packets", VAR_0,
     &VAR_2->pkstats.tx_511_bytes_packets, 0, "TX 511 Bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_1023_bytes_packets", VAR_0,
     &VAR_2->pkstats.tx_1023_bytes_packets, 0, "TX 1023 Bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_1518_bytes_packets", VAR_0,
     &VAR_2->pkstats.tx_1518_bytes_packets, 0, "TX 1518 Bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_1522_bytes_packets", VAR_0,
     &VAR_2->pkstats.tx_1522_bytes_packets, 0, "TX 1522 Bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_1548_bytes_packets", VAR_0,
     &VAR_2->pkstats.tx_1548_bytes_packets, 0, "TX 1548 Bytes Packets");
 FUNC_2(VAR_3, VAR_4, VAR_1, "tx_gt_1548_bytes_packets", VAR_0,
     &VAR_2->pkstats.tx_gt_1548_bytes_packets, 0,
     "TX Greater Then 1548 Bytes Packets");

 for (VAR_10 = 0; VAR_10 < VAR_2->tx_ring_num; VAR_10++) {
  VAR_7 = VAR_2->tx_ring[VAR_10];
  FUNC_5(VAR_9, sizeof(VAR_9), "tx_ring%d", VAR_10);
  VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_9,
      VAR_0, ((void*)0), "TX Ring");
  VAR_6 = FUNC_4(VAR_5);
  FUNC_2(VAR_3, VAR_6, VAR_1, "packets",
      VAR_0, &VAR_7->packets, 0, "TX packets");
  FUNC_2(VAR_3, VAR_6, VAR_1, "bytes",
      VAR_0, &VAR_7->bytes, 0, "TX bytes");
  FUNC_2(VAR_3, VAR_6, VAR_1, "tso_packets",
      VAR_0, &VAR_7->tso_packets, 0, "TSO packets");
  FUNC_2(VAR_3, VAR_6, VAR_1, "defrag_attempts",
      VAR_0, &VAR_7->defrag_attempts, 0,
      "Oversized chains defragged");
 }

 for (VAR_10 = 0; VAR_10 < VAR_2->rx_ring_num; VAR_10++) {
  VAR_8 = VAR_2->rx_ring[VAR_10];
  FUNC_5(VAR_9, sizeof(VAR_9), "rx_ring%d", VAR_10);
  VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_9,
      VAR_0, ((void*)0), "RX Ring");
  VAR_6 = FUNC_4(VAR_5);
  FUNC_2(VAR_3, VAR_6, VAR_1, "packets",
      VAR_0, &VAR_8->packets, 0, "RX packets");
  FUNC_2(VAR_3, VAR_6, VAR_1, "bytes",
      VAR_0, &VAR_8->bytes, 0, "RX bytes");
  FUNC_2(VAR_3, VAR_6, VAR_1, "error",
      VAR_0, &VAR_8->errors, 0, "RX soft errors");
 }
}
