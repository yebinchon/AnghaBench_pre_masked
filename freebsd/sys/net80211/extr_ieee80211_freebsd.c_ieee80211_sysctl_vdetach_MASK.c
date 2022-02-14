
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int * iv_sysctl; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct ieee80211vap *VAR_1)
{

 if (VAR_1->iv_sysctl != ((void*)0)) {
  FUNC_1(VAR_1->iv_sysctl);
  FUNC_0(VAR_1->iv_sysctl, VAR_0);
  VAR_1->iv_sysctl = ((void*)0);
 }
}
