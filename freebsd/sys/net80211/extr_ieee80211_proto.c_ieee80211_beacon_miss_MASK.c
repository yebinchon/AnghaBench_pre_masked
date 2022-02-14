
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_flags; int ic_bmiss_task; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211com*,int *) ;

void
FUNC_3(struct ieee80211com *VAR_1)
{
 FUNC_0(VAR_1);
 if ((VAR_1->ic_flags & VAR_0) == 0) {

  FUNC_2(VAR_1, &VAR_1->ic_bmiss_task);
 }
 FUNC_1(VAR_1);
}
