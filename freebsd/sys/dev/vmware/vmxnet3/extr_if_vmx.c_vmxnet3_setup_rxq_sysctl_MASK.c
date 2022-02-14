
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_rxqueue {int vxrxq_id; struct sysctl_oid_list* vxrxq_sysctl; TYPE_1__* vxrxq_rs; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct UPT1_RxStats {int error; int nobuffer; int bcast_bytes; int bcast_packets; int mcast_bytes; int mcast_packets; int ucast_bytes; int ucast_packets; int LRO_bytes; int LRO_packets; } ;
typedef int namebuf ;
struct TYPE_2__ {struct UPT1_RxStats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct vmxnet3_rxqueue *VAR_2,
    struct sysctl_ctx_list *VAR_3, struct sysctl_oid_list *VAR_4)
{
 struct sysctl_oid *VAR_5, *VAR_6;
 struct sysctl_oid_list *VAR_7, *VAR_8;
 struct UPT1_RxStats *VAR_9;
 char VAR_10[16];

 VAR_9 = &VAR_2->vxrxq_rs->stats;

 FUNC_3(VAR_10, sizeof(VAR_10), "rxq%d", VAR_2->vxrxq_id);
 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_10, VAR_0,
     ((void*)0), "Receive Queue");
 VAR_2->vxrxq_sysctl = VAR_7 = FUNC_2(VAR_5);





 VAR_6 = FUNC_0(VAR_3, VAR_7, VAR_1, "hstats", VAR_0,
     ((void*)0), "Host Statistics");
 VAR_8 = FUNC_2(VAR_6);
 FUNC_1(VAR_3, VAR_8, VAR_1, "lro_packets", VAR_0,
     &VAR_9->LRO_packets, "LRO packets");
 FUNC_1(VAR_3, VAR_8, VAR_1, "lro_bytes", VAR_0,
     &VAR_9->LRO_bytes, "LRO bytes");
 FUNC_1(VAR_3, VAR_8, VAR_1, "ucast_packets", VAR_0,
     &VAR_9->ucast_packets, "Unicast packets");
 FUNC_1(VAR_3, VAR_8, VAR_1, "unicast_bytes", VAR_0,
     &VAR_9->ucast_bytes, "Unicast bytes");
 FUNC_1(VAR_3, VAR_8, VAR_1, "mcast_packets", VAR_0,
     &VAR_9->mcast_packets, "Multicast packets");
 FUNC_1(VAR_3, VAR_8, VAR_1, "mcast_bytes", VAR_0,
     &VAR_9->mcast_bytes, "Multicast bytes");
 FUNC_1(VAR_3, VAR_8, VAR_1, "bcast_packets", VAR_0,
     &VAR_9->bcast_packets, "Broadcast packets");
 FUNC_1(VAR_3, VAR_8, VAR_1, "bcast_bytes", VAR_0,
     &VAR_9->bcast_bytes, "Broadcast bytes");
 FUNC_1(VAR_3, VAR_8, VAR_1, "nobuffer", VAR_0,
     &VAR_9->nobuffer, "No buffer");
 FUNC_1(VAR_3, VAR_8, VAR_1, "error", VAR_0,
     &VAR_9->error, "Errors");
}
