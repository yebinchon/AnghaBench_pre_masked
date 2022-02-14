
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rs_nrates; } ;
struct ieee80211_rssadapt_node {scalar_t__ ra_rix; scalar_t__ ra_last_raise; scalar_t__ ra_raise_interval; int ra_nfail; TYPE_1__ ra_rates; int ra_nok; } ;
struct ieee80211_ratectl_tx_status {int flags; int pktlen; int rssi; scalar_t__ status; } ;
struct ieee80211_node {struct ieee80211_rssadapt_node* ni_rctls; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_rssadapt_node*,int,int) ;
 int FUNC_1 (struct ieee80211_rssadapt_node*,int,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(const struct ieee80211_node *VAR_4,
    const struct ieee80211_ratectl_tx_status *VAR_5)
{
 struct ieee80211_rssadapt_node *VAR_6 = VAR_4->ni_rctls;
 int VAR_7, VAR_8;

 if (!VAR_6)
  return;

 if ((VAR_5->flags &
     (VAR_0|VAR_1)) !=
     (VAR_0|VAR_1))
  return;

 VAR_7 = VAR_5->pktlen;
 VAR_8 = VAR_5->rssi;

 if (VAR_5->status == VAR_2) {
  VAR_6->ra_nok++;
  if ((VAR_6->ra_rix + 1) < VAR_6->ra_rates.rs_nrates &&
      (VAR_3 - VAR_6->ra_last_raise) >= VAR_6->ra_raise_interval)
   FUNC_1(VAR_6, VAR_7, VAR_8);
 } else {
  VAR_6->ra_nfail++;
  FUNC_0(VAR_6, VAR_7, VAR_8);
 }
}
