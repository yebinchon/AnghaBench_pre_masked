
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct eth_mstorm_per_queue_stat {int tpa_coalesced_bytes; int tpa_aborts_num; int tpa_coalesced_events; int tpa_coalesced_pkts; int ttl0_discard; int packet_too_big_discard; int no_buff_discard; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_2__ {int tpa_coalesced_bytes; int tpa_aborts_num; int tpa_coalesced_events; int tpa_coalesced_pkts; int ttl0_discard; int packet_too_big_discard; int no_buff_discards; } ;
struct ecore_eth_stats {TYPE_1__ common; } ;
typedef int mstats ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct eth_mstorm_per_queue_stat*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,int *,int *,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct eth_mstorm_per_queue_stat*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_0,
         struct ecore_ptt *VAR_1,
         struct ecore_eth_stats *VAR_2,
         u16 VAR_3)
{
 struct eth_mstorm_per_queue_stat VAR_4;
 u32 VAR_5 = 0, VAR_6 = 0;

 FUNC_2(VAR_0, &VAR_5, &VAR_6,
      VAR_3);

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(VAR_0, VAR_1, &VAR_4,
     VAR_5, VAR_6);

 VAR_2->common.no_buff_discards +=
  FUNC_0(VAR_4.no_buff_discard);
 VAR_2->common.packet_too_big_discard +=
  FUNC_0(VAR_4.packet_too_big_discard);
 VAR_2->common.ttl0_discard +=
  FUNC_0(VAR_4.ttl0_discard);
 VAR_2->common.tpa_coalesced_pkts +=
  FUNC_0(VAR_4.tpa_coalesced_pkts);
 VAR_2->common.tpa_coalesced_events +=
  FUNC_0(VAR_4.tpa_coalesced_events);
 VAR_2->common.tpa_aborts_num +=
  FUNC_0(VAR_4.tpa_aborts_num);
 VAR_2->common.tpa_coalesced_bytes +=
  FUNC_0(VAR_4.tpa_coalesced_bytes);
}
