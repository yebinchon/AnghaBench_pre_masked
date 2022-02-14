
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int * iv_nw_keys; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211vap*,int *) ;
 int FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (struct ieee80211vap*) ;

void
FUNC_3(struct ieee80211vap *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  (void) FUNC_0(VAR_1, &VAR_1->iv_nw_keys[VAR_2]);
 FUNC_2(VAR_1);
}
