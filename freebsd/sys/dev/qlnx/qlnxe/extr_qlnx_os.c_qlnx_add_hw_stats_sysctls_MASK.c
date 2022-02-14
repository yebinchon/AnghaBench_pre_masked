
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_7__ {int tx_mac_ctrl_frames; int tx_mac_bc_packets; int tx_mac_mc_packets; int tx_mac_uc_packets; int tx_mac_bytes; int rx_mac_frames_ok; int rx_mac_bc_packets; int rx_mac_mc_packets; int rx_mac_uc_packets; int rx_mac_bytes; int brb_discards; int brb_truncates; int tx_pfc_frames; int tx_pause_frames; int tx_1024_to_1518_byte_packets; int tx_512_to_1023_byte_packets; int tx_256_to_511_byte_packets; int tx_128_to_255_byte_packets; int tx_65_to_127_byte_packets; int tx_64_byte_packets; int rx_fragments; int rx_undersize_packets; int rx_jabbers; int rx_oversize_packets; int rx_carrier_errors; int rx_align_errors; int rx_pfc_frames; int rx_pause_frames; int rx_mac_crtl_frames; int rx_crc_errors; int rx_1024_to_1518_byte_packets; int rx_512_to_1023_byte_packets; int rx_256_to_511_byte_packets; int rx_128_to_255_byte_packets; int rx_65_to_127_byte_packets; int rx_64_byte_packets; int tpa_coalesced_bytes; int tpa_not_coalesced_pkts; int tpa_aborts_num; int tpa_coalesced_events; int tpa_coalesced_pkts; int tx_err_drop_pkts; int tx_bcast_pkts; int tx_mcast_pkts; int tx_ucast_pkts; int tx_bcast_bytes; int tx_mcast_bytes; int tx_ucast_bytes; int mac_filter_discards; int mftag_filter_discards; int rx_bcast_pkts; int rx_mcast_pkts; int rx_ucast_pkts; int rx_bcast_bytes; int rx_mcast_bytes; int rx_ucast_bytes; int ttl0_discard; int packet_too_big_discard; int no_buff_discards; } ;
struct TYPE_6__ {int tx_total_collisions; int tx_lpi_entry_count; int tx_9217_to_16383_byte_packets; int tx_4096_to_9216_byte_packets; int tx_2048_to_4095_byte_packets; int tx_1519_to_2047_byte_packets; int rx_9217_to_16383_byte_packets; int rx_4096_to_9216_byte_packets; int rx_2048_to_4095_byte_packets; int rx_1519_to_2047_byte_packets; int rx_1519_to_1522_byte_packets; } ;
struct TYPE_8__ {TYPE_2__ common; TYPE_1__ bb; } ;
struct TYPE_9__ {TYPE_3__ hw_stats; int pci_dev; } ;
typedef TYPE_4__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(qlnx_host_t *VAR_2)
{
        struct sysctl_ctx_list *VAR_3;
        struct sysctl_oid_list *VAR_4;
 struct sysctl_oid *VAR_5;

        VAR_3 = FUNC_3(VAR_2->pci_dev);
 VAR_4 = FUNC_2(FUNC_4(VAR_2->pci_dev));

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, "hwstat",
   VAR_0, ((void*)0), "hwstat");
        VAR_4 = FUNC_2(VAR_5);

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "no_buff_discards",
                VAR_0, &VAR_2->hw_stats.common.no_buff_discards,
                "No. of packets discarded due to lack of buffer");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "packet_too_big_discard",
                VAR_0, &VAR_2->hw_stats.common.packet_too_big_discard,
                "No. of packets discarded because packet was too big");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "ttl0_discard",
                VAR_0, &VAR_2->hw_stats.common.ttl0_discard,
                "ttl0_discard");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_ucast_bytes",
                VAR_0, &VAR_2->hw_stats.common.rx_ucast_bytes,
                "rx_ucast_bytes");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_mcast_bytes",
                VAR_0, &VAR_2->hw_stats.common.rx_mcast_bytes,
                "rx_mcast_bytes");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_bcast_bytes",
                VAR_0, &VAR_2->hw_stats.common.rx_bcast_bytes,
                "rx_bcast_bytes");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_ucast_pkts",
                VAR_0, &VAR_2->hw_stats.common.rx_ucast_pkts,
                "rx_ucast_pkts");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_mcast_pkts",
                VAR_0, &VAR_2->hw_stats.common.rx_mcast_pkts,
                "rx_mcast_pkts");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_bcast_pkts",
                VAR_0, &VAR_2->hw_stats.common.rx_bcast_pkts,
                "rx_bcast_pkts");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "mftag_filter_discards",
                VAR_0, &VAR_2->hw_stats.common.mftag_filter_discards,
                "mftag_filter_discards");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "mac_filter_discards",
                VAR_0, &VAR_2->hw_stats.common.mac_filter_discards,
                "mac_filter_discards");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_ucast_bytes",
                VAR_0, &VAR_2->hw_stats.common.tx_ucast_bytes,
                "tx_ucast_bytes");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_mcast_bytes",
                VAR_0, &VAR_2->hw_stats.common.tx_mcast_bytes,
                "tx_mcast_bytes");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_bcast_bytes",
                VAR_0, &VAR_2->hw_stats.common.tx_bcast_bytes,
                "tx_bcast_bytes");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_ucast_pkts",
                VAR_0, &VAR_2->hw_stats.common.tx_ucast_pkts,
                "tx_ucast_pkts");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_mcast_pkts",
                VAR_0, &VAR_2->hw_stats.common.tx_mcast_pkts,
                "tx_mcast_pkts");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_bcast_pkts",
                VAR_0, &VAR_2->hw_stats.common.tx_bcast_pkts,
                "tx_bcast_pkts");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_err_drop_pkts",
                VAR_0, &VAR_2->hw_stats.common.tx_err_drop_pkts,
                "tx_err_drop_pkts");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tpa_coalesced_pkts",
                VAR_0, &VAR_2->hw_stats.common.tpa_coalesced_pkts,
                "tpa_coalesced_pkts");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tpa_coalesced_events",
                VAR_0, &VAR_2->hw_stats.common.tpa_coalesced_events,
                "tpa_coalesced_events");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tpa_aborts_num",
                VAR_0, &VAR_2->hw_stats.common.tpa_aborts_num,
                "tpa_aborts_num");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tpa_not_coalesced_pkts",
                VAR_0, &VAR_2->hw_stats.common.tpa_not_coalesced_pkts,
                "tpa_not_coalesced_pkts");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tpa_coalesced_bytes",
                VAR_0, &VAR_2->hw_stats.common.tpa_coalesced_bytes,
                "tpa_coalesced_bytes");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_64_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_64_byte_packets,
                "rx_64_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_65_to_127_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_65_to_127_byte_packets,
                "rx_65_to_127_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_128_to_255_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_128_to_255_byte_packets,
                "rx_128_to_255_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_256_to_511_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_256_to_511_byte_packets,
                "rx_256_to_511_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_512_to_1023_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_512_to_1023_byte_packets,
                "rx_512_to_1023_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_1024_to_1518_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_1024_to_1518_byte_packets,
                "rx_1024_to_1518_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_1519_to_1522_byte_packets",
                VAR_0, &VAR_2->hw_stats.bb.rx_1519_to_1522_byte_packets,
                "rx_1519_to_1522_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_1523_to_2047_byte_packets",
                VAR_0, &VAR_2->hw_stats.bb.rx_1519_to_2047_byte_packets,
                "rx_1523_to_2047_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_2048_to_4095_byte_packets",
                VAR_0, &VAR_2->hw_stats.bb.rx_2048_to_4095_byte_packets,
                "rx_2048_to_4095_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_4096_to_9216_byte_packets",
                VAR_0, &VAR_2->hw_stats.bb.rx_4096_to_9216_byte_packets,
                "rx_4096_to_9216_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_9217_to_16383_byte_packets",
                VAR_0, &VAR_2->hw_stats.bb.rx_9217_to_16383_byte_packets,
                "rx_9217_to_16383_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_crc_errors",
                VAR_0, &VAR_2->hw_stats.common.rx_crc_errors,
                "rx_crc_errors");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_mac_crtl_frames",
                VAR_0, &VAR_2->hw_stats.common.rx_mac_crtl_frames,
                "rx_mac_crtl_frames");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_pause_frames",
                VAR_0, &VAR_2->hw_stats.common.rx_pause_frames,
                "rx_pause_frames");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_pfc_frames",
                VAR_0, &VAR_2->hw_stats.common.rx_pfc_frames,
                "rx_pfc_frames");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_align_errors",
                VAR_0, &VAR_2->hw_stats.common.rx_align_errors,
                "rx_align_errors");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_carrier_errors",
                VAR_0, &VAR_2->hw_stats.common.rx_carrier_errors,
                "rx_carrier_errors");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_oversize_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_oversize_packets,
                "rx_oversize_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_jabbers",
                VAR_0, &VAR_2->hw_stats.common.rx_jabbers,
                "rx_jabbers");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_undersize_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_undersize_packets,
                "rx_undersize_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_fragments",
                VAR_0, &VAR_2->hw_stats.common.rx_fragments,
                "rx_fragments");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_64_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.tx_64_byte_packets,
                "tx_64_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_65_to_127_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.tx_65_to_127_byte_packets,
                "tx_65_to_127_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_128_to_255_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.tx_128_to_255_byte_packets,
                "tx_128_to_255_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_256_to_511_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.tx_256_to_511_byte_packets,
                "tx_256_to_511_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_512_to_1023_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.tx_512_to_1023_byte_packets,
                "tx_512_to_1023_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_1024_to_1518_byte_packets",
                VAR_0, &VAR_2->hw_stats.common.tx_1024_to_1518_byte_packets,
                "tx_1024_to_1518_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_1519_to_2047_byte_packets",
                VAR_0, &VAR_2->hw_stats.bb.tx_1519_to_2047_byte_packets,
                "tx_1519_to_2047_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_2048_to_4095_byte_packets",
                VAR_0, &VAR_2->hw_stats.bb.tx_2048_to_4095_byte_packets,
                "tx_2048_to_4095_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_4096_to_9216_byte_packets",
                VAR_0, &VAR_2->hw_stats.bb.tx_4096_to_9216_byte_packets,
                "tx_4096_to_9216_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_9217_to_16383_byte_packets",
                VAR_0, &VAR_2->hw_stats.bb.tx_9217_to_16383_byte_packets,
                "tx_9217_to_16383_byte_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_pause_frames",
                VAR_0, &VAR_2->hw_stats.common.tx_pause_frames,
                "tx_pause_frames");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_pfc_frames",
                VAR_0, &VAR_2->hw_stats.common.tx_pfc_frames,
                "tx_pfc_frames");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_lpi_entry_count",
                VAR_0, &VAR_2->hw_stats.bb.tx_lpi_entry_count,
                "tx_lpi_entry_count");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_total_collisions",
                VAR_0, &VAR_2->hw_stats.bb.tx_total_collisions,
                "tx_total_collisions");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "brb_truncates",
                VAR_0, &VAR_2->hw_stats.common.brb_truncates,
                "brb_truncates");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "brb_discards",
                VAR_0, &VAR_2->hw_stats.common.brb_discards,
                "brb_discards");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_mac_bytes",
                VAR_0, &VAR_2->hw_stats.common.rx_mac_bytes,
                "rx_mac_bytes");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_mac_uc_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_mac_uc_packets,
                "rx_mac_uc_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_mac_mc_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_mac_mc_packets,
                "rx_mac_mc_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_mac_bc_packets",
                VAR_0, &VAR_2->hw_stats.common.rx_mac_bc_packets,
                "rx_mac_bc_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "rx_mac_frames_ok",
                VAR_0, &VAR_2->hw_stats.common.rx_mac_frames_ok,
                "rx_mac_frames_ok");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_mac_bytes",
                VAR_0, &VAR_2->hw_stats.common.tx_mac_bytes,
                "tx_mac_bytes");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_mac_uc_packets",
                VAR_0, &VAR_2->hw_stats.common.tx_mac_uc_packets,
                "tx_mac_uc_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_mac_mc_packets",
                VAR_0, &VAR_2->hw_stats.common.tx_mac_mc_packets,
                "tx_mac_mc_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_mac_bc_packets",
                VAR_0, &VAR_2->hw_stats.common.tx_mac_bc_packets,
                "tx_mac_bc_packets");

 FUNC_1(VAR_3, VAR_4,
                VAR_1, "tx_mac_ctrl_frames",
                VAR_0, &VAR_2->hw_stats.common.tx_mac_ctrl_frames,
                "tx_mac_ctrl_frames");
 return;
}
