
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_5__ {int eswitched_err_free_bytes; int eswitched_err_free_frames; int eswitched_ucast_frames; int eswitched_bcast_frames; int eswitched_mcast_frames; int eswitched_bytes; int eswitched_frames; int align_error; int fcs_error; int rcv_dropped; int rcv_jabber; int rcv_len_large; int rcv_len_small; int rcv_len_error; int rcv_pkt_gt_1518bytes; int rcv_pkt_lt_1518bytes; int rcv_pkt_lt_1023bytes; int rcv_pkt_lt_511bytes; int rcv_pkt_lt_255bytes; int rcv_pkt_lt_127bytes; int rcv_pkt_lt_64bytes; int rcv_cntrl_pkts; int rcv_pause_frames; int rcv_bcast_pkts; int rcv_mcast_pkts; int rcv_bytes; int rcv_frames; int xmt_pkt_gt_1518bytes; int xmt_pkt_lt_1518bytes; int xmt_pkt_lt_1023bytes; int xmt_pkt_lt_511bytes; int xmt_pkt_lt_255bytes; int xmt_pkt_lt_127bytes; int xmt_pkt_lt_64bytes; int xmt_cntrl_pkts; int xmt_pause_frames; int xmt_bcast_pkts; int xmt_mcast_pkts; int xmt_bytes; int xmt_frames; } ;
struct TYPE_6__ {TYPE_1__ mac; } ;
struct TYPE_7__ {TYPE_2__ hw; int pci_dev; } ;
typedef TYPE_3__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(qla_host_t *VAR_2)
{
        struct sysctl_ctx_list *VAR_3;
        struct sysctl_oid_list *VAR_4;
        struct sysctl_oid *VAR_5;

        VAR_3 = FUNC_3(VAR_2->pci_dev);
        VAR_4 = FUNC_2(FUNC_4(VAR_2->pci_dev));

        VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, "stats_hw_mac",
                        VAR_0, ((void*)0), "stats_hw_mac");
        VAR_4 = FUNC_2(VAR_5);

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_frames",
                VAR_0, &VAR_2->hw.mac.xmt_frames,
                "xmt_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_bytes",
                VAR_0, &VAR_2->hw.mac.xmt_bytes,
                "xmt_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_mcast_pkts",
                VAR_0, &VAR_2->hw.mac.xmt_mcast_pkts,
                "xmt_mcast_pkts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_bcast_pkts",
                VAR_0, &VAR_2->hw.mac.xmt_bcast_pkts,
                "xmt_bcast_pkts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_pause_frames",
                VAR_0, &VAR_2->hw.mac.xmt_pause_frames,
                "xmt_pause_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_cntrl_pkts",
                VAR_0, &VAR_2->hw.mac.xmt_cntrl_pkts,
                "xmt_cntrl_pkts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_pkt_lt_64bytes",
                VAR_0, &VAR_2->hw.mac.xmt_pkt_lt_64bytes,
                "xmt_pkt_lt_64bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_pkt_lt_127bytes",
                VAR_0, &VAR_2->hw.mac.xmt_pkt_lt_127bytes,
                "xmt_pkt_lt_127bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_pkt_lt_255bytes",
                VAR_0, &VAR_2->hw.mac.xmt_pkt_lt_255bytes,
                "xmt_pkt_lt_255bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_pkt_lt_511bytes",
                VAR_0, &VAR_2->hw.mac.xmt_pkt_lt_511bytes,
                "xmt_pkt_lt_511bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_pkt_lt_1023bytes",
                VAR_0, &VAR_2->hw.mac.xmt_pkt_lt_1023bytes,
                "xmt_pkt_lt_1023bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_pkt_lt_1518bytes",
                VAR_0, &VAR_2->hw.mac.xmt_pkt_lt_1518bytes,
                "xmt_pkt_lt_1518bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "xmt_pkt_gt_1518bytes",
                VAR_0, &VAR_2->hw.mac.xmt_pkt_gt_1518bytes,
                "xmt_pkt_gt_1518bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_frames",
                VAR_0, &VAR_2->hw.mac.rcv_frames,
                "rcv_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_bytes",
                VAR_0, &VAR_2->hw.mac.rcv_bytes,
                "rcv_bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_mcast_pkts",
                VAR_0, &VAR_2->hw.mac.rcv_mcast_pkts,
                "rcv_mcast_pkts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_bcast_pkts",
                VAR_0, &VAR_2->hw.mac.rcv_bcast_pkts,
                "rcv_bcast_pkts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_pause_frames",
                VAR_0, &VAR_2->hw.mac.rcv_pause_frames,
                "rcv_pause_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_cntrl_pkts",
                VAR_0, &VAR_2->hw.mac.rcv_cntrl_pkts,
                "rcv_cntrl_pkts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_pkt_lt_64bytes",
                VAR_0, &VAR_2->hw.mac.rcv_pkt_lt_64bytes,
                "rcv_pkt_lt_64bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_pkt_lt_127bytes",
                VAR_0, &VAR_2->hw.mac.rcv_pkt_lt_127bytes,
                "rcv_pkt_lt_127bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_pkt_lt_255bytes",
                VAR_0, &VAR_2->hw.mac.rcv_pkt_lt_255bytes,
                "rcv_pkt_lt_255bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_pkt_lt_511bytes",
                VAR_0, &VAR_2->hw.mac.rcv_pkt_lt_511bytes,
                "rcv_pkt_lt_511bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_pkt_lt_1023bytes",
                VAR_0, &VAR_2->hw.mac.rcv_pkt_lt_1023bytes,
                "rcv_pkt_lt_1023bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_pkt_lt_1518bytes",
                VAR_0, &VAR_2->hw.mac.rcv_pkt_lt_1518bytes,
                "rcv_pkt_lt_1518bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_pkt_gt_1518bytes",
                VAR_0, &VAR_2->hw.mac.rcv_pkt_gt_1518bytes,
                "rcv_pkt_gt_1518bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_len_error",
                VAR_0, &VAR_2->hw.mac.rcv_len_error,
                "rcv_len_error");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_len_small",
                VAR_0, &VAR_2->hw.mac.rcv_len_small,
                "rcv_len_small");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_len_large",
                VAR_0, &VAR_2->hw.mac.rcv_len_large,
                "rcv_len_large");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_jabber",
                VAR_0, &VAR_2->hw.mac.rcv_jabber,
                "rcv_jabber");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rcv_dropped",
                VAR_0, &VAR_2->hw.mac.rcv_dropped,
                "rcv_dropped");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "fcs_error",
                VAR_0, &VAR_2->hw.mac.fcs_error,
                "fcs_error");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "align_error",
                VAR_0, &VAR_2->hw.mac.align_error,
                "align_error");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "eswitched_frames",
                VAR_0, &VAR_2->hw.mac.eswitched_frames,
                "eswitched_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "eswitched_bytes",
                VAR_0, &VAR_2->hw.mac.eswitched_bytes,
                "eswitched_bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "eswitched_mcast_frames",
                VAR_0, &VAR_2->hw.mac.eswitched_mcast_frames,
                "eswitched_mcast_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "eswitched_bcast_frames",
                VAR_0, &VAR_2->hw.mac.eswitched_bcast_frames,
                "eswitched_bcast_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "eswitched_ucast_frames",
                VAR_0, &VAR_2->hw.mac.eswitched_ucast_frames,
                "eswitched_ucast_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "eswitched_err_free_frames",
                VAR_0, &VAR_2->hw.mac.eswitched_err_free_frames,
                "eswitched_err_free_frames");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "eswitched_err_free_bytes",
                VAR_0, &VAR_2->hw.mac.eswitched_err_free_bytes,
                "eswitched_err_free_bytes");

 return;
}
