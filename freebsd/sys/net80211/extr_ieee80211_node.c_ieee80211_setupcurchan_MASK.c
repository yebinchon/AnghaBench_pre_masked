
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_htcaps; scalar_t__ ic_vhtcaps; struct ieee80211_channel* ic_curchan; int ic_rt; int ic_curmode; struct ieee80211_channel* ic_bsschan; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211_channel*) ;
 int FUNC_3 (struct ieee80211_channel*) ;
 struct ieee80211_channel* FUNC_4 (struct ieee80211com*,struct ieee80211_channel*,int) ;
 int FUNC_5 (struct ieee80211_channel*) ;
 struct ieee80211_channel* FUNC_6 (struct ieee80211com*,struct ieee80211_channel*,int) ;
 int FUNC_7 (struct ieee80211_channel*) ;

void
FUNC_8(struct ieee80211com *VAR_1, struct ieee80211_channel *VAR_2)
{
 if (VAR_1->ic_htcaps & VAR_0) {
  int VAR_3 = FUNC_0(VAR_1);







  if (VAR_3 > FUNC_5(VAR_2))
   VAR_2 = FUNC_4(VAR_1, VAR_2, VAR_3);
 }






 if (VAR_1->ic_vhtcaps != 0) {
  int VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 > FUNC_7(VAR_2))
   VAR_2 = FUNC_6(VAR_1, VAR_2, VAR_4);
 }

 VAR_1->ic_bsschan = VAR_1->ic_curchan = VAR_2;
 VAR_1->ic_curmode = FUNC_2(VAR_1->ic_curchan);
 VAR_1->ic_rt = FUNC_3(VAR_1->ic_curchan);
}
