
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_7__ {int personality; int dbg_level; int dp_level; int dbg_trace_lro_cnt; int dbg_trace_tso_pkt_len; int dp_module; int err_inject; int storm_stats_enable; int storm_stats_index; int grcdump_taken; int idle_chk_taken; int rx_coalesce_usecs; int tx_coalesce_usecs; int rx_pkt_threshold; int rx_jumbo_buf_eq_mtu; int err_get_proto_invalid_type; int err_fp_null; int err_illegal_intr; int mfw_ver; int stormfw_ver; int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,void*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int ,int ,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int*,int,char*) ;
 struct sysctl_oid_list* FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(qlnx_host_t *VAR_8)
{
        device_t VAR_9 = VAR_8->pci_dev;
 struct sysctl_ctx_list *VAR_10;
 struct sysctl_oid_list *VAR_11;

 VAR_10 = FUNC_5(VAR_9);
 VAR_11 = FUNC_4(FUNC_6(VAR_9));

 FUNC_7(VAR_8);
 FUNC_9(VAR_8);

 if (FUNC_10(VAR_8) != 0)
  FUNC_8(VAR_8);

 FUNC_2(VAR_10, VAR_11, VAR_3, "Driver_Version",
  VAR_0, VAR_7, 0,
  "Driver Version");

 FUNC_2(VAR_10, VAR_11, VAR_3, "STORMFW_Version",
  VAR_0, VAR_8->stormfw_ver, 0,
  "STORM Firmware Version");

 FUNC_2(VAR_10, VAR_11, VAR_3, "MFW_Version",
  VAR_0, VAR_8->mfw_ver, 0,
  "Management Firmware Version");

        FUNC_3(VAR_10, VAR_11,
                VAR_3, "personality", VAR_0,
                &VAR_8->personality, VAR_8->personality,
  "\tpersonality = 0 => Ethernet Only\n"
  "\tpersonality = 3 => Ethernet and RoCE\n"
  "\tpersonality = 4 => Ethernet and iWARP\n"
  "\tpersonality = 6 => Default in Shared Memory\n");

        VAR_8->dbg_level = 0;
        FUNC_3(VAR_10, VAR_11,
                VAR_3, "debug", VAR_1,
                &VAR_8->dbg_level, VAR_8->dbg_level, "Debug Level");

        VAR_8->dp_level = 0x01;
        FUNC_3(VAR_10, VAR_11,
                VAR_3, "dp_level", VAR_1,
                &VAR_8->dp_level, VAR_8->dp_level, "DP Level");

        VAR_8->dbg_trace_lro_cnt = 0;
        FUNC_3(VAR_10, VAR_11,
                VAR_3, "dbg_trace_lro_cnt", VAR_1,
                &VAR_8->dbg_trace_lro_cnt, VAR_8->dbg_trace_lro_cnt,
  "Trace LRO Counts");

        VAR_8->dbg_trace_tso_pkt_len = 0;
        FUNC_3(VAR_10, VAR_11,
                VAR_3, "dbg_trace_tso_pkt_len", VAR_1,
                &VAR_8->dbg_trace_tso_pkt_len, VAR_8->dbg_trace_tso_pkt_len,
  "Trace TSO packet lengths");

        VAR_8->dp_module = 0;
        FUNC_3(VAR_10, VAR_11,
                VAR_3, "dp_module", VAR_1,
                &VAR_8->dp_module, VAR_8->dp_module, "DP Module");

        VAR_8->err_inject = 0;

        FUNC_3(VAR_10, VAR_11,
                VAR_3, "err_inject", VAR_1,
                &VAR_8->err_inject, VAR_8->err_inject, "Error Inject");

 VAR_8->storm_stats_enable = 0;

 FUNC_3(VAR_10, VAR_11,
  VAR_3, "storm_stats_enable", VAR_1,
  &VAR_8->storm_stats_enable, VAR_8->storm_stats_enable,
  "Enable Storm Statistics Gathering");

 VAR_8->storm_stats_index = 0;

 FUNC_3(VAR_10, VAR_11,
  VAR_3, "storm_stats_index", VAR_0,
  &VAR_8->storm_stats_index, VAR_8->storm_stats_index,
  "Enable Storm Statistics Gathering Current Index");

 VAR_8->grcdump_taken = 0;
 FUNC_3(VAR_10, VAR_11,
  VAR_3, "grcdump_taken", VAR_0,
  &VAR_8->grcdump_taken, VAR_8->grcdump_taken,
  "grcdump_taken");

 VAR_8->idle_chk_taken = 0;
 FUNC_3(VAR_10, VAR_11,
  VAR_3, "idle_chk_taken", VAR_0,
  &VAR_8->idle_chk_taken, VAR_8->idle_chk_taken,
  "idle_chk_taken");

 FUNC_3(VAR_10, VAR_11,
  VAR_3, "rx_coalesce_usecs", VAR_0,
  &VAR_8->rx_coalesce_usecs, VAR_8->rx_coalesce_usecs,
  "rx_coalesce_usecs");

 FUNC_3(VAR_10, VAR_11,
  VAR_3, "tx_coalesce_usecs", VAR_0,
  &VAR_8->tx_coalesce_usecs, VAR_8->tx_coalesce_usecs,
  "tx_coalesce_usecs");

 FUNC_0(VAR_10, VAR_11,
  VAR_3, "trigger_dump", (VAR_2 | VAR_1),
  (void *)VAR_8, 0,
  VAR_6, "I", "trigger_dump");

 FUNC_0(VAR_10, VAR_11,
  VAR_3, "set_rx_coalesce_usecs",
  (VAR_2 | VAR_1),
  (void *)VAR_8, 0,
  VAR_4, "I",
  "rx interrupt coalesce period microseconds");

 FUNC_0(VAR_10, VAR_11,
  VAR_3, "set_tx_coalesce_usecs",
  (VAR_2 | VAR_1),
  (void *)VAR_8, 0,
  VAR_5, "I",
  "tx interrupt coalesce period microseconds");

 VAR_8->rx_pkt_threshold = 128;
        FUNC_3(VAR_10, VAR_11,
                VAR_3, "rx_pkt_threshold", VAR_1,
                &VAR_8->rx_pkt_threshold, VAR_8->rx_pkt_threshold,
  "No. of Rx Pkts to process at a time");

 VAR_8->rx_jumbo_buf_eq_mtu = 0;
        FUNC_3(VAR_10, VAR_11,
                VAR_3, "rx_jumbo_buf_eq_mtu", VAR_1,
                &VAR_8->rx_jumbo_buf_eq_mtu, VAR_8->rx_jumbo_buf_eq_mtu,
  "== 0 => Rx Jumbo buffers are capped to 4Kbytes\n"
  "otherwise Rx Jumbo buffers are set to >= MTU size\n");

 FUNC_1(VAR_10, VAR_11,
                VAR_3, "err_illegal_intr", VAR_0,
  &VAR_8->err_illegal_intr, "err_illegal_intr");

 FUNC_1(VAR_10, VAR_11,
                VAR_3, "err_fp_null", VAR_0,
  &VAR_8->err_fp_null, "err_fp_null");

 FUNC_1(VAR_10, VAR_11,
                VAR_3, "err_get_proto_invalid_type", VAR_0,
  &VAR_8->err_get_proto_invalid_type, "err_get_proto_invalid_type");
 return;
}
