
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stainforeq {int space; } ;
struct ieee80211_node {scalar_t__ ni_associd; TYPE_1__* ni_vap; } ;
struct TYPE_2__ {scalar_t__ iv_opmode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_node*,size_t*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, struct ieee80211_node *VAR_2)
{
 struct stainforeq *VAR_3 = VAR_1;
 size_t VAR_4;

 if (VAR_2->ni_vap->iv_opmode == VAR_0 &&
     VAR_2->ni_associd == 0)
  return;
 VAR_3->space += FUNC_0(VAR_2, &VAR_4);
}
