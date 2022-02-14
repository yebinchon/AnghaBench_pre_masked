
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;


 int FUNC_0 (int ) ;
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
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_6 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_7 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_8 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_9 (struct ieee80211_channel const*) ;

int
FUNC_10(struct ath_hal *VAR_10, const struct ieee80211_channel *VAR_11)
{



 if (!VAR_11)
  return VAR_6;

 if (FUNC_9(VAR_11))
  return VAR_9;


 if (FUNC_2(VAR_11) && FUNC_6(VAR_11))
  return VAR_3;
 if (FUNC_2(VAR_11) && FUNC_8(VAR_11))
  return VAR_5;
 if (FUNC_2(VAR_11) && FUNC_7(VAR_11))
  return VAR_4;
 if (FUNC_3(VAR_11))
  return VAR_0;


 if (FUNC_1(VAR_11) && FUNC_6(VAR_11))
  return VAR_6;
 if (FUNC_1(VAR_11) && FUNC_8(VAR_11))
  return VAR_8;
 if (FUNC_1(VAR_11) && FUNC_7(VAR_11))
  return VAR_7;





 if (FUNC_5(VAR_11))
  return VAR_2;
 if (FUNC_4(VAR_11))
  return VAR_1;

 FUNC_0(0);
 return VAR_6;
}
