
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_roaming; TYPE_1__* iv_bss; } ;
struct ieee80211_node {int dummy; } ;
struct TYPE_2__ {int ni_macaddr; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct ieee80211_node*,int ,int) ;


 int FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (struct ieee80211vap*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211vap *VAR_2, struct ieee80211_node *VAR_3, int VAR_4)
{
 switch (VAR_4) {
 case 129:
 case 128:
 case 134:
 case 130:
 case 131:
 case 133:
 case 132:
  FUNC_0(VAR_3, VAR_0, 1);
  break;
 default:
  FUNC_2(VAR_2, VAR_2->iv_bss->ni_macaddr, VAR_4);
  if (VAR_2->iv_roaming == VAR_1)
   FUNC_1(VAR_2);
  break;
 }
}
