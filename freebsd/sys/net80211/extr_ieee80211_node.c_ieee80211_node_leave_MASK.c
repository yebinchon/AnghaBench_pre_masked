
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {scalar_t__ iv_opmode; int iv_sta_assoc; TYPE_1__* iv_auth; } ;
struct ieee80211com {int ic_bsschan; int ic_sta_assoc; } ;
struct ieee80211_node_table {int dummy; } ;
struct ieee80211_node {scalar_t__ ni_associd; struct ieee80211_node_table* ni_table; struct ieee80211vap* ni_vap; struct ieee80211com* ni_ic; } ;
struct TYPE_2__ {int (* ia_node_leave ) (struct ieee80211_node*) ;} ;


 int FUNC_0 (struct ieee80211vap*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211com*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct ieee80211_node*) ;
 int FUNC_7 (struct ieee80211_node_table*) ;
 int FUNC_8 (struct ieee80211_node_table*) ;
 int FUNC_9 (struct ieee80211vap*,int,struct ieee80211_node*,char*,int ) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (struct ieee80211_node*) ;
 int FUNC_13 (struct ieee80211_node*) ;
 int FUNC_14 (struct ieee80211_node*) ;
 int FUNC_15 (struct ieee80211_node*) ;
 int FUNC_16 (struct ieee80211_node*) ;
 int FUNC_17 (struct ieee80211_node_table*,struct ieee80211_node*) ;
 int FUNC_18 (struct ieee80211_node*) ;

void
FUNC_19(struct ieee80211_node *VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_3->ni_ic;
 struct ieee80211vap *VAR_5 = VAR_3->ni_vap;
 struct ieee80211_node_table *VAR_6 = VAR_3->ni_table;

 FUNC_9(VAR_5, VAR_0 | VAR_1, VAR_3,
     "station with aid %d leaves", FUNC_6(VAR_3));

 FUNC_11(VAR_5->iv_opmode != VAR_2,
  ("unexpected operating mode %u", VAR_5->iv_opmode));





 if (VAR_3->ni_associd == 0)
  goto done;






 if (VAR_5->iv_auth->ia_node_leave != ((void*)0))
  VAR_5->iv_auth->ia_node_leave(VAR_3);

 FUNC_5(VAR_4);
 FUNC_0(VAR_5, VAR_3->ni_associd);
 VAR_5->iv_sta_assoc--;
 VAR_4->ic_sta_assoc--;

 if (FUNC_4(VAR_4->ic_bsschan))
  FUNC_16(VAR_3);
 if (FUNC_3(VAR_4->ic_bsschan))
  FUNC_13(VAR_3);
 if (FUNC_1(VAR_4->ic_bsschan) &&
     FUNC_2(VAR_4->ic_bsschan))
  FUNC_14(VAR_3);
 FUNC_10(VAR_4);






 FUNC_15(VAR_3);
done:






 if (VAR_6 != ((void*)0)) {
  FUNC_7(VAR_6);
  FUNC_17(VAR_6, VAR_3);
  FUNC_8(VAR_6);
 } else
  FUNC_12(VAR_3);
}
