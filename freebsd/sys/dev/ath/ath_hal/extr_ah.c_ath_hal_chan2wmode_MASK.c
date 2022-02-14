
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int WIRELESS_MODE ;


 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static WIRELESS_MODE
FUNC_4(struct ath_hal *VAR_5, const struct ieee80211_channel *VAR_6)
{
 if (FUNC_1(VAR_6))
  return VAR_2;
 if (FUNC_2(VAR_6))
  return VAR_3;
 if (FUNC_0(VAR_6))
  return VAR_0;
 if (FUNC_3(VAR_6))
  return VAR_4;
 return VAR_1;
}
