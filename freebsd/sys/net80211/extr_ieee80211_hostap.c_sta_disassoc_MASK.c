
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node {scalar_t__ ni_associd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_node*,int ,int ) ;
 int FUNC_1 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, struct ieee80211_node *VAR_3)
{

 if (VAR_3->ni_associd != 0) {
  FUNC_0(VAR_3, VAR_0,
   VAR_1);
  FUNC_1(VAR_3);
 }
}
