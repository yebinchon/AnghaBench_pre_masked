
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_regdomain {scalar_t__ ecm; } ;
struct ieee80211com {int ic_nchans; int ic_htcaps; struct ieee80211_regdomain ic_regdomain; struct ieee80211_channel* ic_channels; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ieee80211_channel*,int ,int*,int ,int,int const*,int) ;
 int FUNC_1 (struct ieee80211_channel*,int ,int*,int ,int,int const*,int) ;
 scalar_t__ FUNC_2 (int const*,int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct ieee80211com *VAR_11,
 const struct ieee80211_regdomain *VAR_12, const uint8_t VAR_13[])
{
 struct ieee80211_channel *VAR_14 = VAR_11->ic_channels;
 int *VAR_15 = &VAR_11->ic_nchans;
 int VAR_16;


 VAR_16 = !!(VAR_11->ic_htcaps & VAR_1);
 *VAR_15 = 0;
 if (FUNC_2(VAR_13, VAR_3) ||
     FUNC_2(VAR_13, VAR_4) ||
     FUNC_2(VAR_13, VAR_6)) {
  int VAR_17 = FUNC_3(VAR_7);
  if (!(VAR_12 != ((void*)0) && VAR_12->ecm))
   VAR_17 -= 3;

  FUNC_0(VAR_14, VAR_0,
      VAR_15, VAR_7, VAR_17, VAR_13, VAR_16);
 }
 if (FUNC_2(VAR_13, VAR_2) ||
     FUNC_2(VAR_13, VAR_5)) {
  FUNC_1(VAR_14, VAR_0,
      VAR_15, VAR_8, FUNC_3(VAR_8),
      VAR_13, VAR_16);
  FUNC_1(VAR_14, VAR_0,
      VAR_15, VAR_9, FUNC_3(VAR_9),
      VAR_13, VAR_16);
  FUNC_1(VAR_14, VAR_0,
      VAR_15, VAR_10, FUNC_3(VAR_10),
      VAR_13, VAR_16);
 }
 if (VAR_12 != ((void*)0))
  VAR_11->ic_regdomain = *VAR_12;

 return 0;
}
