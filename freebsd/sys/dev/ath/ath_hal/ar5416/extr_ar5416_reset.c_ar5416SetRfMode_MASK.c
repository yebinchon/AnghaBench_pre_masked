
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
 int FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ath_hal*,struct ieee80211_channel const*) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct ath_hal *VAR_7, const struct ieee80211_channel *VAR_8)
{
 uint32_t VAR_9;

 if (VAR_8 == VAR_0)
  return;


 VAR_9 = FUNC_3(VAR_8) ?
     VAR_2 : VAR_4;

 if (FUNC_1(VAR_7) && FUNC_4(VAR_7, VAR_8)) {

  VAR_9 |= VAR_2
         | VAR_3;
 } else if (!FUNC_0(VAR_7)) {
  VAR_9 |= FUNC_2(VAR_8) ?
   VAR_6 : VAR_5;
 }

 FUNC_5(VAR_7, VAR_1, VAR_9);
}
