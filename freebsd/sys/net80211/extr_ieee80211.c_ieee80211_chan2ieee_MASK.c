
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ieee80211_channel {int ic_ieee; } ;


 int VAR_0 ;
 struct ieee80211_channel const* VAR_1 ;
 int FUNC_0 (struct ieee80211com*,char*) ;

int
FUNC_1(struct ieee80211com *VAR_2, const struct ieee80211_channel *VAR_3)
{
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_2, "invalid channel (NULL)\n");
  return 0;
 }
 return (VAR_3 == VAR_1 ? VAR_0 : VAR_3->ic_ieee);
}
