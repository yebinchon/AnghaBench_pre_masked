
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ieee80211_channel {int ic_flags; int ic_freq; } ;


 int VAR_0 ;
 struct ieee80211_channel* FUNC_0 (struct ieee80211com*,int ,int) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_1(struct ieee80211com *VAR_1, struct ieee80211_channel *VAR_2, int VAR_3)
{

 return (FUNC_0(VAR_1, VAR_2->ic_freq,
     (VAR_2->ic_flags & ~VAR_0) | VAR_3));
}
