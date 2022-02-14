
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scanreq {int space; } ;
struct ieee80211_scan_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_scan_entry const*,int*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const struct ieee80211_scan_entry *VAR_1)
{
 struct scanreq *VAR_2 = VAR_0;
 int VAR_3;

 VAR_2->space += FUNC_0(VAR_1, &VAR_3);
}
