
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int (* iv_set_tim ) (struct ieee80211_node*,int ) ;} ;
struct TYPE_2__ {scalar_t__ psq_len; } ;
struct ieee80211_node {scalar_t__ ni_associd; int ni_flags; TYPE_1__ ni_psq; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_node*) ;
 scalar_t__ FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct ieee80211_node*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_node *VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_1->ni_vap;




 if (FUNC_1(VAR_1) != 0 &&
     VAR_1->ni_psq.psq_len == 0 && VAR_2->iv_set_tim != ((void*)0))
  VAR_2->iv_set_tim(VAR_1, 0);




 if (VAR_1->ni_associd != 0 && (VAR_1->ni_flags & VAR_0))
  FUNC_0(VAR_1);
}
