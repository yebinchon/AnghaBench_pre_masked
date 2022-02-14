
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_rds_rings; int num_sds_rings; int num_tx_rings; int max_tx_segs; int sds_cidx_thres; int rds_pidx_thres; int rcv_intr_coalesce; int xmt_intr_coalesce; int enable_9kb; int enable_hw_lro; int sp_log_index; int sp_log_stop; int sp_log_stop_events; int mdump_active; int mdump_done; int mdump_capture_mask; int user_pri_nic; int user_pri_iscsi; } ;
struct TYPE_7__ {int txr_idx; int err_inject; TYPE_1__ hw; int pci_dev; } ;
typedef TYPE_2__ qla_host_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int,void*,int ,int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int,int*,int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(qla_host_t *VAR_8)
{
        device_t VAR_9;

        VAR_9 = VAR_8->pci_dev;

 FUNC_1(FUNC_3(VAR_9),
  FUNC_2(FUNC_4(VAR_9)),
  VAR_3, "num_rds_rings", VAR_0, &VAR_8->hw.num_rds_rings,
  VAR_8->hw.num_rds_rings, "Number of Rcv Descriptor Rings");

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "num_sds_rings", VAR_0, &VAR_8->hw.num_sds_rings,
  VAR_8->hw.num_sds_rings, "Number of Status Descriptor Rings");

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "num_tx_rings", VAR_0, &VAR_8->hw.num_tx_rings,
  VAR_8->hw.num_tx_rings, "Number of Transmit Rings");

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "tx_ring_index", VAR_1, &VAR_8->txr_idx,
  VAR_8->txr_idx, "Tx Ring Used");

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "max_tx_segs", VAR_0, &VAR_8->hw.max_tx_segs,
  VAR_8->hw.max_tx_segs, "Max # of Segments in a non-TSO pkt");

 VAR_8->hw.sds_cidx_thres = 32;
        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "sds_cidx_thres", VAR_1, &VAR_8->hw.sds_cidx_thres,
  VAR_8->hw.sds_cidx_thres,
  "Number of SDS entries to process before updating"
  " SDS Ring Consumer Index");

 VAR_8->hw.rds_pidx_thres = 32;
        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "rds_pidx_thres", VAR_1, &VAR_8->hw.rds_pidx_thres,
  VAR_8->hw.rds_pidx_thres,
  "Number of Rcv Rings Entries to post before updating"
  " RDS Ring Producer Index");

        VAR_8->hw.rcv_intr_coalesce = (3 << 16) | 256;
        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "rcv_intr_coalesce", VAR_1,
                &VAR_8->hw.rcv_intr_coalesce,
                VAR_8->hw.rcv_intr_coalesce,
                "Rcv Intr Coalescing Parameters\n"
                "\tbits 15:0 max packets\n"
                "\tbits 31:16 max micro-seconds to wait\n"
                "\tplease run\n"
                "\tifconfig <if> down && ifconfig <if> up\n"
                "\tto take effect \n");

        VAR_8->hw.xmt_intr_coalesce = (64 << 16) | 64;
        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "xmt_intr_coalesce", VAR_1,
                &VAR_8->hw.xmt_intr_coalesce,
                VAR_8->hw.xmt_intr_coalesce,
                "Xmt Intr Coalescing Parameters\n"
                "\tbits 15:0 max packets\n"
                "\tbits 31:16 max micro-seconds to wait\n"
                "\tplease run\n"
                "\tifconfig <if> down && ifconfig <if> up\n"
                "\tto take effect \n");

        FUNC_0(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "port_cfg", VAR_2 | VAR_1,
                (void *)VAR_8, 0,
                VAR_5, "I",
                        "Set Port Configuration if values below "
                        "otherwise Get Port Configuration\n"
                        "\tBits 0-3 ; 1 = DCBX Enable; 0 = DCBX Disable\n"
                        "\tBits 4-7 : 0 = no pause; 1 = std ; 2 = ppm \n"
                        "\tBits 8-11: std pause cfg; 0 = xmt and rcv;"
                        " 1 = xmt only; 2 = rcv only;\n"
                );

 FUNC_0(FUNC_3(VAR_9),
  FUNC_2(FUNC_4(VAR_9)),
  VAR_3, "set_cam_search_mode", VAR_2 | VAR_1,
  (void *)VAR_8, 0,
  VAR_6, "I",
   "Set CAM Search Mode"
   "\t 1 = search mode internal\n"
   "\t 2 = search mode auto\n");

 FUNC_0(FUNC_3(VAR_9),
  FUNC_2(FUNC_4(VAR_9)),
  VAR_3, "get_cam_search_mode", VAR_2 | VAR_1,
  (void *)VAR_8, 0,
  VAR_4, "I",
   "Get CAM Search Mode"
   "\t 1 = search mode internal\n"
   "\t 2 = search mode auto\n");

        VAR_8->hw.enable_9kb = 1;

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "enable_9kb", VAR_1, &VAR_8->hw.enable_9kb,
                VAR_8->hw.enable_9kb, "Enable 9Kbyte Buffers when MTU = 9000");

        VAR_8->hw.enable_hw_lro = 1;

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "enable_hw_lro", VAR_1, &VAR_8->hw.enable_hw_lro,
                VAR_8->hw.enable_hw_lro, "Enable Hardware LRO; Default is true \n"
  "\t 1 : Hardware LRO if LRO is enabled\n"
  "\t 0 : Software LRO if LRO is enabled\n"
  "\t Any change requires ifconfig down/up to take effect\n"
  "\t Note that LRO may be turned off/on via ifconfig\n");

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "sp_log_index", VAR_1, &VAR_8->hw.sp_log_index,
                VAR_8->hw.sp_log_index, "sp_log_index");

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "sp_log_stop", VAR_1, &VAR_8->hw.sp_log_stop,
                VAR_8->hw.sp_log_stop, "sp_log_stop");

        VAR_8->hw.sp_log_stop_events = 0;

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "sp_log_stop_events", VAR_1,
  &VAR_8->hw.sp_log_stop_events,
                VAR_8->hw.sp_log_stop_events, "Slow path event log is stopped"
  " when OR of the following events occur \n"
  "\t 0x01 : Heart beat Failure\n"
  "\t 0x02 : Temperature Failure\n"
  "\t 0x04 : HW Initialization Failure\n"
  "\t 0x08 : Interface Initialization Failure\n"
  "\t 0x10 : Error Recovery Failure\n");

 VAR_8->hw.mdump_active = 0;
        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "minidump_active", VAR_1, &VAR_8->hw.mdump_active,
  VAR_8->hw.mdump_active,
  "Minidump retrieval is Active");

 VAR_8->hw.mdump_done = 0;
        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "mdump_done", VAR_1,
  &VAR_8->hw.mdump_done, VAR_8->hw.mdump_done,
  "Minidump has been done and available for retrieval");

 VAR_8->hw.mdump_capture_mask = 0xF;
        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "minidump_capture_mask", VAR_1,
  &VAR_8->hw.mdump_capture_mask, VAR_8->hw.mdump_capture_mask,
  "Minidump capture mask");
        VAR_8->hw.user_pri_nic = 0;
        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "user_pri_nic", VAR_1, &VAR_8->hw.user_pri_nic,
                VAR_8->hw.user_pri_nic,
                "VLAN Tag User Priority for Normal Ethernet Packets");

        VAR_8->hw.user_pri_iscsi = 4;
        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_3, "user_pri_iscsi", VAR_1, &VAR_8->hw.user_pri_iscsi,
                VAR_8->hw.user_pri_iscsi,
                "VLAN Tag User Priority for iSCSI Packets");

 FUNC_6(VAR_8);
 FUNC_5(VAR_8);

 return;
}
