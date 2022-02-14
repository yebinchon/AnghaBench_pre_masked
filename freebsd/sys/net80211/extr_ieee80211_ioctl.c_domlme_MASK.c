
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlmeop {scalar_t__ op; int reason; struct ieee80211vap* vap; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_node {scalar_t__ ni_associd; int ni_macaddr; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_node*,int ,int ) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct ieee80211vap*,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, struct ieee80211_node *VAR_4)
{
 struct mlmeop *VAR_5 = VAR_3;
 struct ieee80211vap *VAR_6 = VAR_4->ni_vap;

 if (VAR_6 != VAR_5->vap)
  return;





 if (VAR_4->ni_associd == 0)
  return;
 FUNC_2(VAR_6, VAR_4->ni_macaddr, VAR_5->op, VAR_5->reason);
 if (VAR_5->op == VAR_2) {
  FUNC_0(VAR_4, VAR_0,
      VAR_5->reason);
 } else {
  FUNC_0(VAR_4, VAR_1,
      VAR_5->reason);
 }
 FUNC_1(VAR_4);
}
