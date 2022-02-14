
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
struct TYPE_5__ {int pkts_cnt_oversized; int pkts_droped_unknown; int lro_flows_active; int lro_flows_deleted; int lro_flows_added; int rds_prime_success; int rds_prime_trys; int invalid_mac_addr; int re1_fbq_error; int unxpctd_mcast_pkts; int pkts_dropped_no_rds; int oversized_pkts; int pkts_dropped_no_sds_host; int pkts_dropped_no_sds_card; int pkts_wo_acntxts; int ip_chksum_err; int sw_pkt_count; int lro_pkt_count; int total_pkts; int total_bytes; } ;
struct TYPE_6__ {TYPE_1__ rcv; } ;
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

        VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, "stats_hw_rcv",
                        VAR_0, ((void*)0), "stats_hw_rcv");
        VAR_4 = FUNC_2(VAR_5);

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "total_bytes",
                VAR_0, &VAR_2->hw.rcv.total_bytes,
                "total_bytes");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "total_pkts",
                VAR_0, &VAR_2->hw.rcv.total_pkts,
                "total_pkts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "lro_pkt_count",
                VAR_0, &VAR_2->hw.rcv.lro_pkt_count,
                "lro_pkt_count");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "sw_pkt_count",
                VAR_0, &VAR_2->hw.rcv.sw_pkt_count,
                "sw_pkt_count");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "ip_chksum_err",
                VAR_0, &VAR_2->hw.rcv.ip_chksum_err,
                "ip_chksum_err");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "pkts_wo_acntxts",
                VAR_0, &VAR_2->hw.rcv.pkts_wo_acntxts,
                "pkts_wo_acntxts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "pkts_dropped_no_sds_card",
                VAR_0, &VAR_2->hw.rcv.pkts_dropped_no_sds_card,
                "pkts_dropped_no_sds_card");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "pkts_dropped_no_sds_host",
                VAR_0, &VAR_2->hw.rcv.pkts_dropped_no_sds_host,
                "pkts_dropped_no_sds_host");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "oversized_pkts",
                VAR_0, &VAR_2->hw.rcv.oversized_pkts,
                "oversized_pkts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "pkts_dropped_no_rds",
                VAR_0, &VAR_2->hw.rcv.pkts_dropped_no_rds,
                "pkts_dropped_no_rds");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "unxpctd_mcast_pkts",
                VAR_0, &VAR_2->hw.rcv.unxpctd_mcast_pkts,
                "unxpctd_mcast_pkts");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "re1_fbq_error",
                VAR_0, &VAR_2->hw.rcv.re1_fbq_error,
                "re1_fbq_error");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "invalid_mac_addr",
                VAR_0, &VAR_2->hw.rcv.invalid_mac_addr,
                "invalid_mac_addr");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rds_prime_trys",
                VAR_0, &VAR_2->hw.rcv.rds_prime_trys,
                "rds_prime_trys");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "rds_prime_success",
                VAR_0, &VAR_2->hw.rcv.rds_prime_success,
                "rds_prime_success");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "lro_flows_added",
                VAR_0, &VAR_2->hw.rcv.lro_flows_added,
                "lro_flows_added");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "lro_flows_deleted",
                VAR_0, &VAR_2->hw.rcv.lro_flows_deleted,
                "lro_flows_deleted");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "lro_flows_active",
                VAR_0, &VAR_2->hw.rcv.lro_flows_active,
                "lro_flows_active");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "pkts_droped_unknown",
                VAR_0, &VAR_2->hw.rcv.pkts_droped_unknown,
                "pkts_droped_unknown");

        FUNC_1(VAR_3, VAR_4,
                VAR_1, "pkts_cnt_oversized",
                VAR_0, &VAR_2->hw.rcv.pkts_cnt_oversized,
                "pkts_cnt_oversized");

 return;
}
