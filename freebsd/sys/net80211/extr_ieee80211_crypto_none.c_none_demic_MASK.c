
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_2__ {int is_rx_badkeyid; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211_key {struct ieee80211vap* wk_private; } ;



__attribute__((used)) static int
FUNC_0(struct ieee80211_key *VAR_0, struct mbuf *VAR_1, int VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_0->wk_private;

 VAR_3->iv_stats.is_rx_badkeyid++;
 return 0;
}
