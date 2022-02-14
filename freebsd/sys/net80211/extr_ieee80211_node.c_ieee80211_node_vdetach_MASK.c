
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int * iv_aid_bitmap; int * iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_sta; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ieee80211vap*) ;

void
FUNC_3(struct ieee80211vap *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_1->iv_ic;

 FUNC_2(&VAR_2->ic_sta, VAR_1);
 if (VAR_1->iv_bss != ((void*)0)) {
  FUNC_1(VAR_1->iv_bss);
  VAR_1->iv_bss = ((void*)0);
 }
 if (VAR_1->iv_aid_bitmap != ((void*)0)) {
  FUNC_0(VAR_1->iv_aid_bitmap, VAR_0);
  VAR_1->iv_aid_bitmap = ((void*)0);
 }
}
