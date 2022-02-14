
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; int (* iv_set_tim ) (struct ieee80211_node*,int ) ;int iv_ps_sta; } ;
struct ieee80211com {int ic_stageq; } ;
struct ieee80211_node {int ni_flags; int ** ni_rxfrag; int * ni_challenge; scalar_t__ ni_associd; struct ieee80211com* ni_ic; struct ieee80211vap* ni_vap; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,int ) ;
 int VAR_8 ;
 int FUNC_2 (int *,struct ieee80211_node*) ;
 int FUNC_3 (struct ieee80211_node*) ;
 int FUNC_4 (struct ieee80211_node*) ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (struct ieee80211_node*) ;
 scalar_t__ FUNC_7 (struct ieee80211_node*) ;
 int FUNC_8 (struct ieee80211_node*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (struct ieee80211_node*,int ) ;

__attribute__((used)) static void
FUNC_12(struct ieee80211_node *VAR_9)
{
 struct ieee80211vap *VAR_10 = VAR_9->ni_vap;
 struct ieee80211com *VAR_11 = VAR_9->ni_ic;
 int VAR_12;


 if (VAR_9->ni_flags & VAR_6) {
  if (VAR_10->iv_opmode != VAR_2)
   VAR_10->iv_ps_sta--;
  VAR_9->ni_flags &= ~VAR_6;
  FUNC_1(VAR_10, VAR_0, VAR_9,
      "power save mode off, %u sta's in ps mode", VAR_10->iv_ps_sta);
 }



 if (VAR_9->ni_flags & VAR_7)
  FUNC_8(VAR_9);
 if (VAR_9->ni_flags & VAR_5)
  FUNC_4(VAR_9);
 FUNC_2(&VAR_11->ic_stageq, VAR_9);
 VAR_9->ni_flags &= ~(VAR_3 | VAR_4);




 if (FUNC_7(VAR_9) != 0 && VAR_10->iv_set_tim != ((void*)0))
  VAR_10->iv_set_tim(VAR_9, 0);

 VAR_9->ni_associd = 0;
 if (VAR_9->ni_challenge != ((void*)0)) {
  FUNC_0(VAR_9->ni_challenge, VAR_8);
  VAR_9->ni_challenge = ((void*)0);
 }
 for (VAR_12 = 0; VAR_12 < FUNC_10(VAR_9->ni_rxfrag); VAR_12++)
  if (VAR_9->ni_rxfrag[VAR_12] != ((void*)0)) {
   FUNC_9(VAR_9->ni_rxfrag[VAR_12]);
   VAR_9->ni_rxfrag[VAR_12] = ((void*)0);
  }



 FUNC_6(VAR_9);
}
