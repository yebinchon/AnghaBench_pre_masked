
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int iv_htcaps; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (struct ieee80211_node*,int const*) ;

void
FUNC_4(struct ieee80211_node *VAR_1, const uint8_t *VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_1->ni_vap;

 FUNC_3(VAR_1, VAR_2);
 if (VAR_3->iv_htcaps & VAR_0)
  FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
}
