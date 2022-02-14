
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int * iv_tim_bitmap; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

void
FUNC_1(struct ieee80211vap *VAR_1)
{
 if (VAR_1->iv_tim_bitmap != ((void*)0)) {
  FUNC_0(VAR_1->iv_tim_bitmap, VAR_0);
  VAR_1->iv_tim_bitmap = ((void*)0);
 }
}
