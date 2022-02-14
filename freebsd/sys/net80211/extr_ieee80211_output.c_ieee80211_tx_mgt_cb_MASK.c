
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_state; int iv_mgtsend; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,struct ieee80211vap*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_node *VAR_3, void *VAR_4, int VAR_5)
{
 struct ieee80211vap *VAR_6 = VAR_3->ni_vap;
 enum ieee80211_state VAR_7 = (enum ieee80211_state) VAR_4;
 if (VAR_6->iv_state == VAR_7) {
  FUNC_0(&VAR_6->iv_mgtsend,
   VAR_5 == 0 ? VAR_0*VAR_1 : 0,
   VAR_2, VAR_6);
 }
}
