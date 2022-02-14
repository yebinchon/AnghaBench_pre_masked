
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_flags_ht; int iv_flags; } ;
struct ieee80211_channel {int dummy; } ;
typedef int MWL_HAL_APMODE ;


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
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel*) ;

__attribute__((used)) static MWL_HAL_APMODE
FUNC_5(const struct ieee80211vap *VAR_10, struct ieee80211_channel *VAR_11)
{
 MWL_HAL_APMODE VAR_12;

 if (FUNC_4(VAR_11)) {
  if (VAR_10->iv_flags_ht & VAR_8)
   VAR_12 = VAR_7;
  else if (FUNC_0(VAR_11))
   VAR_12 = VAR_1;
  else if (VAR_10->iv_flags & VAR_9)
   VAR_12 = VAR_5;
  else
   VAR_12 = VAR_3;
 } else if (FUNC_2(VAR_11)) {
  if (VAR_10->iv_flags & VAR_9)
   VAR_12 = VAR_4;
  else
   VAR_12 = VAR_6;
 } else if (FUNC_3(VAR_11))
  VAR_12 = VAR_2;
 else if (FUNC_1(VAR_11))
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_6;
 return VAR_12;
}
