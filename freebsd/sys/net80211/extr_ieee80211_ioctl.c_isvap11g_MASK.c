
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_node* iv_bss; } ;
struct ieee80211_node {scalar_t__ ni_chan; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const struct ieee80211vap *VAR_1)
{
 const struct ieee80211_node *VAR_2 = VAR_1->iv_bss;
 return VAR_2->ni_chan != VAR_0 &&
     FUNC_0(VAR_2->ni_chan);
}
