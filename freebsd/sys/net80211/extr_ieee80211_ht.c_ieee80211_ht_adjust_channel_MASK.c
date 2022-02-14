
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ieee80211_channel {int ic_flags; int ic_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (struct ieee80211_channel*) ;
 struct ieee80211_channel* FUNC_3 (struct ieee80211com*,struct ieee80211_channel*,int ) ;
 struct ieee80211_channel* FUNC_4 (struct ieee80211com*,int ,int) ;

struct ieee80211_channel *
FUNC_5(struct ieee80211com *VAR_6,
 struct ieee80211_channel *VAR_7, int VAR_8)
{
 struct ieee80211_channel *VAR_9;

 if (VAR_8 & VAR_4) {

  if (VAR_8 & VAR_5) {
   if (!FUNC_2(VAR_7)) {

    VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_3);
    if (VAR_9 == ((void*)0))
     VAR_9 = FUNC_3(VAR_6, VAR_7,
      VAR_2);
    if (VAR_9 == ((void*)0))
     VAR_9 = FUNC_3(VAR_6, VAR_7,
      VAR_1);
    if (VAR_9 != ((void*)0))
     VAR_7 = VAR_9;
   }
  } else if (!FUNC_1(VAR_7)) {
   VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_1);
   if (VAR_9 != ((void*)0))
    VAR_7 = VAR_9;
  }
 } else if (FUNC_0(VAR_7)) {

  VAR_9 = FUNC_4(VAR_6, VAR_7->ic_freq,
      VAR_7->ic_flags &~ VAR_0);
  if (VAR_9 != ((void*)0))
   VAR_7 = VAR_9;
 }
 return VAR_7;
}
