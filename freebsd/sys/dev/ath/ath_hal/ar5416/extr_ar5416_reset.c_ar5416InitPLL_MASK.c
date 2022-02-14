
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
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int VAR_8 ;
 int FUNC_5 (int,int ) ;

void
FUNC_6(struct ath_hal *VAR_9, const struct ieee80211_channel *VAR_10)
{
 uint32_t VAR_11 = VAR_5 | VAR_4;
 if (VAR_10 != VAR_0) {
  if (FUNC_1(VAR_10))
   VAR_11 |= FUNC_5(0x1, VAR_1);
  else if (FUNC_2(VAR_10))
   VAR_11 |= FUNC_5(0x2, VAR_1);

  if (FUNC_0(VAR_10))
   VAR_11 |= FUNC_5(0xa, VAR_3);
  else
   VAR_11 |= FUNC_5(0xb, VAR_3);
 } else
  VAR_11 |= FUNC_5(0xb, VAR_3);

 FUNC_4(VAR_9, VAR_2, VAR_11);





 FUNC_3(VAR_8);

 FUNC_4(VAR_9, VAR_6, VAR_7);
}
