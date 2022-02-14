
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_flags; int ic_inact; int ic_stageq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (int *,int,void (*) (void*),struct ieee80211com*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct ieee80211com*) ;
 int FUNC_5 (struct ieee80211com*) ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (struct ieee80211com*) ;
 int FUNC_8 (struct ieee80211com*) ;

void
FUNC_9(void *VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_3;
 if ((VAR_4->ic_flags & VAR_0) == 0) {
  FUNC_6(VAR_4);
  FUNC_7(VAR_4);
  FUNC_3(&VAR_4->ic_stageq, VAR_1);

  FUNC_0(VAR_4);
  FUNC_4(VAR_4);
  FUNC_5(VAR_4);
  FUNC_8(VAR_4);
  FUNC_1(VAR_4);
 }
 FUNC_2(&VAR_4->ic_inact, VAR_1*VAR_2,
  FUNC_9, VAR_4);
}
