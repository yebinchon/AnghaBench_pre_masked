
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {struct ieee80211_channel* ah_curchan; } ;


 struct ieee80211_channel const* VAR_0 ;
 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ath_hal*,struct ieee80211_channel const*) ;
 size_t VAR_3 ;
 size_t FUNC_5 (struct ath_hal*,struct ieee80211_channel const*) ;

u_int
FUNC_6(struct ath_hal *VAR_4, u_int VAR_5)
{
 const struct ieee80211_channel *VAR_6 = FUNC_0(VAR_4)->ah_curchan;
 u_int VAR_7;



 if (VAR_6 != VAR_0 && FUNC_4(VAR_4, VAR_6)) {
  VAR_7 = VAR_5 * VAR_1;
  if (FUNC_2(VAR_6))
   VAR_7 <<= 1;
 } else if (VAR_6 != VAR_0) {
  VAR_7 = VAR_5 * VAR_2[FUNC_5(VAR_4, VAR_6)];
  if (FUNC_2(VAR_6))
   VAR_7 <<= 1;
 } else
  VAR_7 = VAR_5 * VAR_2[VAR_3];


 if (VAR_6 != VAR_0 && FUNC_1(VAR_6))
  VAR_7 = VAR_7 / 2;
 else if (VAR_6 != VAR_0 && FUNC_3(VAR_6))
  VAR_7 = VAR_7 / 4;

 return VAR_7;
}
