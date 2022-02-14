
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct ctx_hw_stats {int tpa_aborts; int tpa_events; int tpa_bytes; int tpa_pkts; int rx_bcast_bytes; int rx_mcast_bytes; int rx_ucast_bytes; int rx_drop_pkts; int rx_discard_pkts; int rx_bcast_pkts; int rx_mcast_pkts; int rx_ucast_pkts; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int hw_stats; struct sysctl_oid* hw_stats_oid; TYPE_1__ rx_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sysctl_oid* FUNC_0 (int *,int ,int ,char*,int ,int ,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (char*,char*,int) ;

int
FUNC_4(struct bnxt_softc *VAR_3, int VAR_4)
{
 struct sysctl_oid *VAR_5;
 struct ctx_hw_stats *VAR_6 = (void *)VAR_3->rx_stats.idi_vaddr;
 char VAR_7[32];
 char VAR_8[64];

 FUNC_3(VAR_7, "rxq%d", VAR_4);
 FUNC_3(VAR_8, "receive queue %d", VAR_4);
 VAR_5 = FUNC_0(&VAR_3->hw_stats,
     FUNC_2(VAR_3->hw_stats_oid), VAR_2, VAR_7, VAR_0, 0,
     VAR_8);
 if (!VAR_5)
  return VAR_1;

 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "ucast_pkts", VAR_0, &VAR_6[VAR_4].rx_ucast_pkts,
     "unicast packets received");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "mcast_pkts", VAR_0, &VAR_6[VAR_4].rx_mcast_pkts,
     "multicast packets received");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "bcast_pkts", VAR_0, &VAR_6[VAR_4].rx_bcast_pkts,
     "broadcast packets received");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "discard_pkts", VAR_0,
     &VAR_6[VAR_4].rx_discard_pkts, "discarded receive packets");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "drop_pkts", VAR_0, &VAR_6[VAR_4].rx_drop_pkts,
     "dropped receive packets");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "ucast_bytes", VAR_0, &VAR_6[VAR_4].rx_ucast_bytes,
     "unicast bytes received");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "mcast_bytes", VAR_0, &VAR_6[VAR_4].rx_mcast_bytes,
     "multicast bytes received");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "bcast_bytes", VAR_0, &VAR_6[VAR_4].rx_bcast_bytes,
     "broadcast bytes received");

 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "tpa_pkts", VAR_0, &VAR_6[VAR_4].tpa_pkts,
     "TPA packets");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "tpa_bytes", VAR_0, &VAR_6[VAR_4].tpa_bytes,
     "TPA bytes");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "tpa_events", VAR_0, &VAR_6[VAR_4].tpa_events,
     "TPA events");
 FUNC_1(&VAR_3->hw_stats, FUNC_2(VAR_5), VAR_2,
     "tpa_aborts", VAR_0, &VAR_6[VAR_4].tpa_aborts,
     "TPA aborts");

 return 0;
}
