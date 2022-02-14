
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_scanparams {int meshid; } ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_frame {int dummy; } ;


 int FUNC_0 (struct ieee80211_node*,int ) ;

void
FUNC_1(struct ieee80211_node *VAR_0,
 const struct ieee80211_frame *VAR_1,
 const struct ieee80211_scanparams *VAR_2)
{
 FUNC_0(VAR_0, VAR_2->meshid);
}
