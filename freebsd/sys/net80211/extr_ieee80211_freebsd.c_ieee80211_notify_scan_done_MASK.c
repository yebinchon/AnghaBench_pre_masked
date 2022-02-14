
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_vnet; } ;
struct ieee80211vap {struct ifnet* iv_ifp; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211vap*,int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ifnet*,int ,int *,int ) ;

void
FUNC_4(struct ieee80211vap *VAR_2)
{
 struct ifnet *VAR_3 = VAR_2->iv_ifp;

 FUNC_2(VAR_2, VAR_0, "%s\n", "notify scan done");


 FUNC_1(VAR_3->if_vnet);
 FUNC_3(VAR_3, VAR_1, ((void*)0), 0);
 FUNC_0();
}
