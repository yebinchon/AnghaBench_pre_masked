
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_6 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_7 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_8 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_9 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_10 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_11 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_12 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_13 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_14 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_15 (struct ieee80211_channel const*) ;
 int FUNC_16 (char*,char*,size_t) ;

__attribute__((used)) static const char *
FUNC_17(const struct ieee80211_channel *VAR_0, int VAR_1,
 char VAR_2[], size_t VAR_3)
{
 VAR_2[0] = '\0';
 if (FUNC_3(VAR_0))
  FUNC_16(VAR_2, " FHSS", VAR_3);
 if (FUNC_0(VAR_0))
  FUNC_16(VAR_2, " 11a", VAR_3);
 else if (FUNC_1(VAR_0))
  FUNC_16(VAR_2, " 11g", VAR_3);
 else if (FUNC_2(VAR_0))
  FUNC_16(VAR_2, " 11b", VAR_3);
 if (FUNC_4(VAR_0))
  FUNC_16(VAR_2, "/10MHz", VAR_3);
 if (FUNC_9(VAR_0))
  FUNC_16(VAR_2, "/5MHz", VAR_3);
 if (FUNC_10(VAR_0))
  FUNC_16(VAR_2, " Turbo", VAR_3);
 if (VAR_1) {

  if (FUNC_15(VAR_0) &&
      FUNC_7(VAR_0))
   FUNC_16(VAR_2, " vht/80-", VAR_3);
  else if (FUNC_15(VAR_0) &&
      FUNC_8(VAR_0))
   FUNC_16(VAR_2, " vht/80+", VAR_3);
  else if (FUNC_15(VAR_0))
   FUNC_16(VAR_2, " vht/80", VAR_3);
  else if (FUNC_13(VAR_0))
   FUNC_16(VAR_2, " vht/40-", VAR_3);
  else if (FUNC_14(VAR_0))
   FUNC_16(VAR_2, " vht/40+", VAR_3);
  else if (FUNC_12(VAR_0))
   FUNC_16(VAR_2, " vht/20", VAR_3);
  else if (FUNC_6(VAR_0))
   FUNC_16(VAR_2, " ht/20", VAR_3);
  else if (FUNC_7(VAR_0))
   FUNC_16(VAR_2, " ht/40-", VAR_3);
  else if (FUNC_8(VAR_0))
   FUNC_16(VAR_2, " ht/40+", VAR_3);
 } else {
  if (FUNC_11(VAR_0))
   FUNC_16(VAR_2, " vht", VAR_3);
  else if (FUNC_5(VAR_0))
   FUNC_16(VAR_2, " ht", VAR_3);
 }
 return VAR_2;
}
