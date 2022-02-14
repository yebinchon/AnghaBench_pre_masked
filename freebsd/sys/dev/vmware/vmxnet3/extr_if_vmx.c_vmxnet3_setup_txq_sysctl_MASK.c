
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_txqueue {int vxtxq_id; struct sysctl_oid_list* vxtxq_sysctl; TYPE_1__* vxtxq_ts; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct UPT1_TxStats {int discard; int error; int mcast_bytes; int mcast_packets; int ucast_bytes; int ucast_packets; int TSO_bytes; int TSO_packets; } ;
typedef int namebuf ;
struct TYPE_2__ {struct UPT1_TxStats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct vmxnet3_txqueue *VAR_2,
    struct sysctl_ctx_list *VAR_3, struct sysctl_oid_list *VAR_4)
{
 struct sysctl_oid *VAR_5, *VAR_6;
 struct sysctl_oid_list *VAR_7, *VAR_8;
 struct UPT1_TxStats *VAR_9;
 char VAR_10[16];

 VAR_9 = &VAR_2->vxtxq_ts->stats;

 FUNC_3(VAR_10, sizeof(VAR_10), "txq%d", VAR_2->vxtxq_id);
 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_10, VAR_0,
     ((void*)0), "Transmit Queue");
 VAR_2->vxtxq_sysctl = VAR_7 = FUNC_2(VAR_5);





 VAR_6 = FUNC_0(VAR_3, VAR_7, VAR_1, "hstats", VAR_0,
     ((void*)0), "Host Statistics");
 VAR_8 = FUNC_2(VAR_6);
 FUNC_1(VAR_3, VAR_8, VAR_1, "tso_packets", VAR_0,
     &VAR_9->TSO_packets, "TSO packets");
 FUNC_1(VAR_3, VAR_8, VAR_1, "tso_bytes", VAR_0,
     &VAR_9->TSO_bytes, "TSO bytes");
 FUNC_1(VAR_3, VAR_8, VAR_1, "ucast_packets", VAR_0,
     &VAR_9->ucast_packets, "Unicast packets");
 FUNC_1(VAR_3, VAR_8, VAR_1, "unicast_bytes", VAR_0,
     &VAR_9->ucast_bytes, "Unicast bytes");
 FUNC_1(VAR_3, VAR_8, VAR_1, "mcast_packets", VAR_0,
     &VAR_9->mcast_packets, "Multicast packets");
 FUNC_1(VAR_3, VAR_8, VAR_1, "mcast_bytes", VAR_0,
     &VAR_9->mcast_bytes, "Multicast bytes");
 FUNC_1(VAR_3, VAR_8, VAR_1, "error", VAR_0,
     &VAR_9->error, "Errors");
 FUNC_1(VAR_3, VAR_8, VAR_1, "discard", VAR_0,
     &VAR_9->discard, "Discards");
}
