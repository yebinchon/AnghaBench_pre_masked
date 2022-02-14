
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int dummy; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;


 int FUNC_0 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_node *VAR_0, void *VAR_1,
    int VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_0->ni_vap;

 FUNC_0(VAR_3);
}
