
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq_stats {int vtxs_rescheduled; int vtxs_tso; int vtxs_csum; int vtxs_omcasts; int vtxs_obytes; int vtxs_opackets; } ;
struct vtnet_txq {int vtntx_id; struct vtnet_txq_stats vtntx_stats; } ;
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
    struct sysctl_oid_list *VAR_3, struct vtnet_txq *VAR_4)
{
 struct sysctl_oid *VAR_5;
 struct sysctl_oid_list *VAR_6;
 struct vtnet_txq_stats *VAR_7;
 char VAR_8[16];

 FUNC_3(VAR_8, sizeof(VAR_8), "txq%d", VAR_4->vtntx_id);
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1, VAR_8,
     VAR_0, ((void*)0), "Transmit Queue");
 VAR_6 = FUNC_2(VAR_5);

 VAR_7 = &VAR_4->vtntx_stats;

 FUNC_1(VAR_2, VAR_6, VAR_1, "opackets", VAR_0,
     &VAR_7->vtxs_opackets, "Transmit packets");
 FUNC_1(VAR_2, VAR_6, VAR_1, "obytes", VAR_0,
     &VAR_7->vtxs_obytes, "Transmit bytes");
 FUNC_1(VAR_2, VAR_6, VAR_1, "omcasts", VAR_0,
     &VAR_7->vtxs_omcasts, "Transmit multicasts");
 FUNC_1(VAR_2, VAR_6, VAR_1, "csum", VAR_0,
     &VAR_7->vtxs_csum, "Transmit checksum offloaded");
 FUNC_1(VAR_2, VAR_6, VAR_1, "tso", VAR_0,
     &VAR_7->vtxs_tso, "Transmit segmentation offloaded");
 FUNC_1(VAR_2, VAR_6, VAR_1, "rescheduled", VAR_0,
     &VAR_7->vtxs_rescheduled,
     "Transmit interrupt handler rescheduled");
}
