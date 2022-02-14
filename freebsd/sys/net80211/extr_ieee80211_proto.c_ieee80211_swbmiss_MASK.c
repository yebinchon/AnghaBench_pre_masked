
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_state; scalar_t__ iv_swbmiss_count; int iv_swbmiss_period; int iv_swbmiss; int iv_swbmiss_task; int * iv_bmiss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211com*,int *) ;

void
FUNC_4(void *VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_2;
 struct ieee80211com *VAR_4 = VAR_3->iv_ic;

 FUNC_0(VAR_4);

 FUNC_1(VAR_3->iv_state >= VAR_1,
     ("wrong state %d", VAR_3->iv_state));

 if (VAR_4->ic_flags & VAR_0) {
  VAR_3->iv_swbmiss_count = 0;
 } else if (VAR_3->iv_swbmiss_count == 0) {
  if (VAR_3->iv_bmiss != ((void*)0))
   FUNC_3(VAR_4, &VAR_3->iv_swbmiss_task);
 } else
  VAR_3->iv_swbmiss_count = 0;
 FUNC_2(&VAR_3->iv_swbmiss, VAR_3->iv_swbmiss_period,
  FUNC_4, VAR_3);
}
