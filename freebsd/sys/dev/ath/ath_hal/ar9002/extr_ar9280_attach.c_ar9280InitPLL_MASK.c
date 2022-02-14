
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;


 struct ieee80211_channel const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ath_hal*,struct ieee80211_channel const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ath_hal*,int ,int) ;
 int VAR_7 ;
 int FUNC_8 (int,int ) ;

void
FUNC_9(struct ath_hal *VAR_8, const struct ieee80211_channel *VAR_9)
{
 uint32_t VAR_10 = FUNC_8(0x5, VAR_6);

 if (FUNC_1(VAR_8) &&
     VAR_9 != VAR_0 && FUNC_2(VAR_9)) {





  VAR_10 = FUNC_5(VAR_8, VAR_9) ? 0x142c : 0x2850;
  if (FUNC_3(VAR_9))
   VAR_10 |= FUNC_8(0x1, VAR_4);
  else if (FUNC_4(VAR_9))
   VAR_10 |= FUNC_8(0x2, VAR_4);
 } else if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_8(0x5, VAR_6);
  if (VAR_9 != VAR_0) {
   if (FUNC_3(VAR_9))
    VAR_10 |= FUNC_8(0x1, VAR_4);
   else if (FUNC_4(VAR_9))
    VAR_10 |= FUNC_8(0x2, VAR_4);
   if (FUNC_2(VAR_9))
    VAR_10 |= FUNC_8(0x28, VAR_5);
   else
    VAR_10 |= FUNC_8(0x2c, VAR_5);
  } else
   VAR_10 |= FUNC_8(0x2c, VAR_5);
 }

 FUNC_7(VAR_8, VAR_1, VAR_10);
 FUNC_6(VAR_7);
 FUNC_7(VAR_8, VAR_2, VAR_3);
}
