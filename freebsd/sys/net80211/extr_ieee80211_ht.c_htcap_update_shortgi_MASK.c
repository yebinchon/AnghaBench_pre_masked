
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_flags_ht; } ;
struct ieee80211_node {int ni_flags; int ni_htcap; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __inline void
FUNC_0(struct ieee80211_node *VAR_6)
{
 struct ieee80211vap *VAR_7 = VAR_6->ni_vap;

 VAR_6->ni_flags &= ~(VAR_4|VAR_5);
 if ((VAR_6->ni_htcap & VAR_2) &&
     (VAR_7->iv_flags_ht & VAR_0))
  VAR_6->ni_flags |= VAR_4;
 if ((VAR_6->ni_htcap & VAR_3) &&
     (VAR_7->iv_flags_ht & VAR_1))
  VAR_6->ni_flags |= VAR_5;
}
