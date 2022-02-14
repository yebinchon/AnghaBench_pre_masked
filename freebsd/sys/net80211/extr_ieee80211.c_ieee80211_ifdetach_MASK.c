
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int dummy; } ;
struct ieee80211com {int * ic_tq; int ic_oerrors; int ic_ierrors; int ic_vaps; int ic_restart_task; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211com*,int ) ;
 struct ieee80211vap* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct ieee80211vap*) ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (struct ieee80211com*) ;
 int FUNC_8 (struct ieee80211com*) ;
 int FUNC_9 (struct ieee80211com*) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (struct ieee80211com*) ;
 int FUNC_12 (struct ieee80211com*) ;
 int FUNC_13 (struct ieee80211com*) ;
 int FUNC_14 (struct ieee80211com*) ;
 int FUNC_15 (struct ieee80211com*) ;
 int FUNC_16 (struct ieee80211vap*) ;
 int FUNC_17 (struct ieee80211com*) ;
 int FUNC_18 (struct ieee80211com*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *) ;
 int VAR_2 ;

void
FUNC_23(struct ieee80211com *VAR_3)
{
 struct ieee80211vap *VAR_4;







 if (VAR_3->ic_tq == ((void*)0))
  return;

 FUNC_19(&VAR_0);
 FUNC_2(VAR_3, VAR_1);
 FUNC_20(&VAR_0);

 FUNC_21(VAR_2, &VAR_3->ic_restart_task);





 while ((VAR_4 = FUNC_3(&VAR_3->ic_vaps)) != ((void*)0)) {
  FUNC_5(VAR_4);
  FUNC_16(VAR_4);
 }
 FUNC_18(VAR_3);

 FUNC_15(VAR_3);
 FUNC_7(VAR_3);
 FUNC_12(VAR_3);
 FUNC_13(VAR_3);



 FUNC_17(VAR_3);
 FUNC_8(VAR_3);

 FUNC_11(VAR_3);
 FUNC_6(VAR_3);
 FUNC_10(VAR_3);
 FUNC_9(VAR_3);

 FUNC_4(VAR_3->ic_ierrors);
 FUNC_4(VAR_3->ic_oerrors);

 FUNC_22(VAR_3->ic_tq);
 FUNC_1(VAR_3);
 FUNC_0(VAR_3);
}
