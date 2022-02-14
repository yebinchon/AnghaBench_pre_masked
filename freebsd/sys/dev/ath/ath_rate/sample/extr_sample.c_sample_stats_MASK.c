
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
struct sample_node {int static_rix; int ratemask; int* current_rix; int* packets_since_switch; int* ticks_since_switch; int* last_sample_rix; int* current_sample_rix; int* packets_sent; int* packets_since_sample; int* sample_tt; TYPE_1__** stats; } ;
struct ieee80211_node {int ni_macaddr; } ;
struct ath_softc {int * sc_currates; } ;
struct TYPE_2__ {unsigned long long total_packets; unsigned long long packets_acked; int ewma_pct; scalar_t__ last_tx; int average_tx_time; int successive_failures; scalar_t__ tries; } ;
typedef int HAL_RATE_TABLE ;


 int FUNC_0 (struct ieee80211_node*) ;
 struct sample_node* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*,int) ;
 char* FUNC_4 (int const*,int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_node*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, struct ieee80211_node *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_2;
 const HAL_RATE_TABLE *VAR_5 = VAR_4->sc_currates;
 struct sample_node *VAR_6 = FUNC_1(FUNC_0(VAR_3));
 uint64_t VAR_7;
 int VAR_8, VAR_9;

 FUNC_7("\n[%s] refcnt %d static_rix (%d %s) ratemask 0x%jx\n",
     FUNC_5(VAR_3->ni_macaddr), FUNC_6(VAR_3),
     FUNC_3(VAR_5, VAR_6->static_rix),
     FUNC_4(VAR_5, VAR_6->static_rix),
     (uintmax_t)VAR_6->ratemask);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  FUNC_7("[%4u] cur rix %d (%d %s) since switch: packets %d ticks %u\n",
      FUNC_2(VAR_9), VAR_6->current_rix[VAR_9],
      FUNC_3(VAR_5, VAR_6->current_rix[VAR_9]),
      FUNC_4(VAR_5, VAR_6->current_rix[VAR_9]),
      VAR_6->packets_since_switch[VAR_9], VAR_6->ticks_since_switch[VAR_9]);
  FUNC_7("[%4u] last sample (%d %s) cur sample (%d %s) packets sent %d\n",
      FUNC_2(VAR_9),
      FUNC_3(VAR_5, VAR_6->last_sample_rix[VAR_9]),
      FUNC_4(VAR_5, VAR_6->last_sample_rix[VAR_9]),
      FUNC_3(VAR_5, VAR_6->current_sample_rix[VAR_9]),
      FUNC_4(VAR_5, VAR_6->current_sample_rix[VAR_9]),
      VAR_6->packets_sent[VAR_9]);
  FUNC_7("[%4u] packets since sample %d sample tt %u\n",
      FUNC_2(VAR_9), VAR_6->packets_since_sample[VAR_9],
      VAR_6->sample_tt[VAR_9]);
 }
 for (VAR_7 = VAR_6->ratemask, VAR_8 = 0; VAR_7 != 0; VAR_7 >>= 1, VAR_8++) {
  if ((VAR_7 & 1) == 0)
    continue;
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   if (VAR_6->stats[VAR_9][VAR_8].total_packets == 0)
    continue;
   FUNC_7("[%2u %s:%4u] %8ju:%-8ju (%3d%%) (EWMA %3d.%1d%%) T %8ju F %4d avg %5u last %u\n",
       FUNC_3(VAR_5, VAR_8), FUNC_4(VAR_5, VAR_8),
       FUNC_2(VAR_9),
       (uintmax_t) VAR_6->stats[VAR_9][VAR_8].total_packets,
       (uintmax_t) VAR_6->stats[VAR_9][VAR_8].packets_acked,
       (int) ((VAR_6->stats[VAR_9][VAR_8].packets_acked * 100ULL) /
        VAR_6->stats[VAR_9][VAR_8].total_packets),
       VAR_6->stats[VAR_9][VAR_8].ewma_pct / 10,
       VAR_6->stats[VAR_9][VAR_8].ewma_pct % 10,
       (uintmax_t) VAR_6->stats[VAR_9][VAR_8].tries,
       VAR_6->stats[VAR_9][VAR_8].successive_failures,
       VAR_6->stats[VAR_9][VAR_8].average_tx_time,
       VAR_1 - VAR_6->stats[VAR_9][VAR_8].last_tx);
  }
 }
}
