
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_table {int dummy; } ;
struct ieee80211_scan_state {scalar_t__ ss_last; struct sta_table* ss_priv; } ;


 int FUNC_0 (struct sta_table*) ;
 int FUNC_1 (struct sta_table*) ;
 int FUNC_2 (struct sta_table*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_scan_state *VAR_0)
{
 struct sta_table *VAR_1 = VAR_0->ss_priv;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 VAR_0->ss_last = 0;
 return 0;
}
