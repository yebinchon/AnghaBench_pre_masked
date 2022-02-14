
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int (* ic_set_channel ) (struct ieee80211com*) ;struct ieee80211_channel* ic_curchan; int ic_rt; int ic_curmode; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct ieee80211com*) ;
 int FUNC_4 (struct ieee80211_channel*) ;
 int FUNC_5 (struct ieee80211_channel*) ;
 struct ieee80211_channel* FUNC_6 (struct ieee80211com*,struct ieee80211_channel*,int ) ;
 int FUNC_7 (struct ieee80211com*) ;
 struct ieee80211_channel* FUNC_8 (struct ieee80211com*,struct ieee80211_channel*,int ) ;
 int FUNC_9 (struct ieee80211com*) ;

void
FUNC_10(struct ieee80211com *VAR_0)
{
 struct ieee80211_channel *VAR_1;

 VAR_1 = FUNC_6(VAR_0, VAR_0->ic_curchan, FUNC_2(VAR_0));
 VAR_1 = FUNC_8(VAR_0, VAR_1, FUNC_3(VAR_0));

 if (VAR_1 != VAR_0->ic_curchan) {
  VAR_0->ic_curchan = VAR_1;
  VAR_0->ic_curmode = FUNC_4(VAR_0->ic_curchan);
  VAR_0->ic_rt = FUNC_5(VAR_0->ic_curchan);
  FUNC_1(VAR_0);
  VAR_0->ic_set_channel(VAR_0);
  FUNC_7(VAR_0);
  FUNC_0(VAR_0);
 }
}
