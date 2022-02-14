
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct eth_pstorm_per_queue_stat {int error_drop_pkts; int sent_bcast_pkts; int sent_mcast_pkts; int sent_ucast_pkts; int sent_bcast_bytes; int sent_mcast_bytes; int sent_ucast_bytes; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_2__ {int tx_err_drop_pkts; int tx_bcast_pkts; int tx_mcast_pkts; int tx_ucast_pkts; int tx_bcast_bytes; int tx_mcast_bytes; int tx_ucast_bytes; } ;
struct ecore_eth_stats {TYPE_1__ common; } ;
typedef int pstats ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct eth_pstorm_per_queue_stat*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,int *,int *,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct eth_pstorm_per_queue_stat*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_0,
         struct ecore_ptt *VAR_1,
         struct ecore_eth_stats *VAR_2,
         u16 VAR_3)
{
 struct eth_pstorm_per_queue_stat VAR_4;
 u32 VAR_5 = 0, VAR_6 = 0;

 FUNC_2(VAR_0, &VAR_5, &VAR_6,
      VAR_3);

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(VAR_0, VAR_1, &VAR_4,
     VAR_5, VAR_6);

 VAR_2->common.tx_ucast_bytes +=
  FUNC_0(VAR_4.sent_ucast_bytes);
 VAR_2->common.tx_mcast_bytes +=
  FUNC_0(VAR_4.sent_mcast_bytes);
 VAR_2->common.tx_bcast_bytes +=
  FUNC_0(VAR_4.sent_bcast_bytes);
 VAR_2->common.tx_ucast_pkts +=
  FUNC_0(VAR_4.sent_ucast_pkts);
 VAR_2->common.tx_mcast_pkts +=
  FUNC_0(VAR_4.sent_mcast_pkts);
 VAR_2->common.tx_bcast_pkts +=
  FUNC_0(VAR_4.sent_bcast_pkts);
 VAR_2->common.tx_err_drop_pkts +=
  FUNC_0(VAR_4.error_drop_pkts);
}
