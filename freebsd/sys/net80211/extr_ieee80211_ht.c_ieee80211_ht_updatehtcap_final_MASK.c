
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_flags_ht; TYPE_1__* iv_bss; } ;
struct ieee80211_node {int ni_htcap; struct ieee80211vap* ni_vap; } ;
struct TYPE_2__ {int ni_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_node*,int,int) ;
 int FUNC_3 (struct ieee80211_node*,int) ;

void
FUNC_4(struct ieee80211_node *VAR_6)
{
 struct ieee80211vap *VAR_7 = VAR_6->ni_vap;
 int VAR_8;
 int VAR_9;



 VAR_8 = (VAR_7->iv_flags_ht & VAR_3) ?
     VAR_0 : 0;
 if ((VAR_6->ni_htcap & VAR_5) &&
     (VAR_7->iv_flags_ht & VAR_4)) {
  if (FUNC_1(VAR_7->iv_bss->ni_chan))
   VAR_8 = VAR_2;
  else if (FUNC_0(VAR_7->iv_bss->ni_chan))
   VAR_8 = VAR_1;
 }





 VAR_9 = FUNC_3(VAR_6, VAR_8);

 (void) FUNC_2(VAR_6, VAR_8, VAR_9);
}
