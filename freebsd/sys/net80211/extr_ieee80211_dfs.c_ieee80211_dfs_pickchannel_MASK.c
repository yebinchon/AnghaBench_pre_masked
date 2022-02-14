
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v ;
typedef int uint16_t ;
struct ieee80211com {int ic_nchans; struct ieee80211_channel* ic_channels; TYPE_1__* ic_curchan; } ;
struct ieee80211_channel {int ic_flags; } ;
struct TYPE_2__ {int ic_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct ieee80211com*,char*) ;
 struct ieee80211_channel* FUNC_3 (struct ieee80211com*,int) ;

struct ieee80211_channel *
FUNC_4(struct ieee80211com *VAR_1)
{
 struct ieee80211_channel *VAR_2;
 int VAR_3, VAR_4;
 uint16_t VAR_5;




 VAR_4 = VAR_1->ic_curchan->ic_flags & VAR_0;




 VAR_2 = FUNC_3(VAR_1, VAR_4);
 if (VAR_2 != ((void*)0))
  return VAR_2;





 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5 %= VAR_1->ic_nchans;
 for (VAR_3 = VAR_5; VAR_3 < VAR_1->ic_nchans; VAR_3++) {
  VAR_2 = &VAR_1->ic_channels[VAR_3];
  if (!FUNC_0(VAR_2) &&
     (VAR_2->ic_flags & VAR_4) == VAR_4)
   return VAR_2;
 }
 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  VAR_2 = &VAR_1->ic_channels[VAR_3];
  if (!FUNC_0(VAR_2) &&
     (VAR_2->ic_flags & VAR_4) == VAR_4)
   return VAR_2;
 }
 FUNC_2(VAR_1, "HELP, no channel located to switch to!\n");
 return ((void*)0);
}
