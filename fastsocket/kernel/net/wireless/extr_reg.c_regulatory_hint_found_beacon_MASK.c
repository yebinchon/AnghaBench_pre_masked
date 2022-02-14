
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct reg_beacon {int list; int chan; } ;
struct ieee80211_channel {int flags; scalar_t__ band; int center_freq; scalar_t__ beacon_found; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct reg_beacon* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct ieee80211_channel*,int) ;
 int FUNC_6 (struct ieee80211_channel*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wiphy*) ;

int FUNC_11(struct wiphy *VAR_6,
     struct ieee80211_channel *VAR_7,
     gfp_t VAR_8)
{
 struct reg_beacon *VAR_9;
 bool VAR_10;

 if (VAR_7->beacon_found ||
     VAR_7->flags & VAR_2 ||
     (VAR_7->band == VAR_1 &&
      !FUNC_1(VAR_7->center_freq)))
  return 0;

 FUNC_8(&VAR_4);
 VAR_10 = FUNC_6(VAR_7);
 FUNC_9(&VAR_4);

 if (VAR_10)
  return 0;

 VAR_9 = FUNC_3(sizeof(struct reg_beacon), VAR_8);
 if (!VAR_9)
  return -VAR_0;

 FUNC_0("Found new beacon on frequency: %d MHz (Ch %d) on %s\n",
        VAR_7->center_freq,
        FUNC_2(VAR_7->center_freq),
        FUNC_10(VAR_6));

 FUNC_5(&VAR_9->chan, VAR_7,
        sizeof(struct ieee80211_channel));





 FUNC_8(&VAR_4);
 FUNC_4(&VAR_9->list, &VAR_3);
 FUNC_9(&VAR_4);

 FUNC_7(&VAR_5);

 return 0;
}
