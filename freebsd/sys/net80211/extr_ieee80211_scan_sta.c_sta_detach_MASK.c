
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_table {int dummy; } ;
struct ieee80211_scan_state {struct sta_table* ss_priv; } ;


 int FUNC_0 (struct sta_table*,int ) ;
 int FUNC_1 (struct sta_table*) ;
 int FUNC_2 (struct sta_table*) ;
 int FUNC_3 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct sta_table*) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_scan_state *VAR_2)
{
 struct sta_table *VAR_3 = VAR_2->ss_priv;

 if (VAR_3 != ((void*)0)) {
  FUNC_4(VAR_3);
  FUNC_2(VAR_3);
  FUNC_1(VAR_3);
  FUNC_0(VAR_3, VAR_0);
  FUNC_3(VAR_1 > 0, ("imbalanced attach/detach"));
  VAR_1--;
 }
 return 1;
}
