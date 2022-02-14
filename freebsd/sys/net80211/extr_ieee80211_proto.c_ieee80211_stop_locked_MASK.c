
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct ieee80211vap {struct ifnet* iv_ifp; struct ieee80211com* iv_ic; } ;
struct ieee80211com {scalar_t__ ic_nrunning; scalar_t__ ic_name; int ic_parent_task; } ;


 int FUNC_0 (struct ieee80211vap*,int,char*,scalar_t__) ;
 int FUNC_1 (struct ieee80211com*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ieee80211vap*,int ,int) ;
 int FUNC_3 (struct ieee80211com*,int *) ;

void
FUNC_4(struct ieee80211vap *VAR_4)
{
 struct ieee80211com *VAR_5 = VAR_4->iv_ic;
 struct ifnet *VAR_6 = VAR_4->iv_ifp;

 FUNC_1(VAR_5);

 FUNC_0(VAR_4, VAR_1 | VAR_0,
     "stop running, %d vaps running\n", VAR_5->ic_nrunning);

 FUNC_2(VAR_4, VAR_2, -1);
 if (VAR_6->if_drv_flags & VAR_3) {
  VAR_6->if_drv_flags &= ~VAR_3;
  if (--VAR_5->ic_nrunning == 0) {
   FUNC_0(VAR_4,
       VAR_1 | VAR_0,
       "down parent %s\n", VAR_5->ic_name);
   FUNC_3(VAR_5, &VAR_5->ic_parent_task);
  }
 }
}
