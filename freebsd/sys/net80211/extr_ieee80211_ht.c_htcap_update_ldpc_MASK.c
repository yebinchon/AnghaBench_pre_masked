
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_flags_ht; } ;
struct ieee80211_node {int ni_htcap; int ni_flags; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline void
FUNC_0(struct ieee80211_node *VAR_3)
{
 struct ieee80211vap *VAR_4 = VAR_3->ni_vap;

 if ((VAR_3->ni_htcap & VAR_1) &&
     (VAR_4->iv_flags_ht & VAR_0))
  VAR_3->ni_flags |= VAR_2;
}
