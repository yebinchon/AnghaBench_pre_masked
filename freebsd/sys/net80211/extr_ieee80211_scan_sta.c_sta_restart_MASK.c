
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_table {int st_newscan; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_scan_state {struct sta_table* ss_priv; } ;



__attribute__((used)) static int
FUNC_0(struct ieee80211_scan_state *VAR_0, struct ieee80211vap *VAR_1)
{
 struct sta_table *VAR_2 = VAR_0->ss_priv;

 VAR_2->st_newscan = 1;
 return 0;
}
