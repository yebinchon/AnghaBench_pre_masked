
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_rxq_stats {int vrxs_rescheduled; int vrxs_csum_failed; int vrxs_csum; int vrxs_ierrors; int vrxs_iqdrops; int vrxs_ibytes; int vrxs_ipackets; } ;
struct vtnet_rxq {int vtnrx_id; struct vtnet_rxq_stats vtnrx_stats; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int namebuf ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct sysctl_ctx_list *VAR_2,
    struct sysctl_oid_list *VAR_3, struct vtnet_rxq *VAR_4)
{
 struct sysctl_oid *VAR_5;
 struct sysctl_oid_list *VAR_6;
 struct vtnet_rxq_stats *VAR_7;
 char VAR_8[16];

 FUNC_3(VAR_8, sizeof(VAR_8), "rxq%d", VAR_4->vtnrx_id);
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1, VAR_8,
     VAR_0, ((void*)0), "Receive Queue");
 VAR_6 = FUNC_2(VAR_5);

 VAR_7 = &VAR_4->vtnrx_stats;

 FUNC_1(VAR_2, VAR_6, VAR_1, "ipackets", VAR_0,
     &VAR_7->vrxs_ipackets, "Receive packets");
 FUNC_1(VAR_2, VAR_6, VAR_1, "ibytes", VAR_0,
     &VAR_7->vrxs_ibytes, "Receive bytes");
 FUNC_1(VAR_2, VAR_6, VAR_1, "iqdrops", VAR_0,
     &VAR_7->vrxs_iqdrops, "Receive drops");
 FUNC_1(VAR_2, VAR_6, VAR_1, "ierrors", VAR_0,
     &VAR_7->vrxs_ierrors, "Receive errors");
 FUNC_1(VAR_2, VAR_6, VAR_1, "csum", VAR_0,
     &VAR_7->vrxs_csum, "Receive checksum offloaded");
 FUNC_1(VAR_2, VAR_6, VAR_1, "csum_failed", VAR_0,
     &VAR_7->vrxs_csum_failed, "Receive checksum offload failed");
 FUNC_1(VAR_2, VAR_6, VAR_1, "rescheduled", VAR_0,
     &VAR_7->vrxs_rescheduled,
     "Receive interrupt handler rescheduled");
}
