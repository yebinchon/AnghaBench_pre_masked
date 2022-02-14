
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int * ic_channels; int * ic_curchan; } ;



__attribute__((used)) static void
FUNC_0(struct ieee80211vap *VAR_0)
{
 struct ieee80211com *VAR_1 = VAR_0->iv_ic;

 VAR_1->ic_curchan = &VAR_1->ic_channels[0];
}
