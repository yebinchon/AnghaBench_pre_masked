
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint16_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 unsigned long VAR_4 ;
 int FUNC_4 (struct ath_hal*,int ,int ,unsigned long) ;
 unsigned long FUNC_5 (struct ath_hal*,struct ieee80211_channel const*) ;

void
FUNC_6(struct ath_hal *VAR_5, const struct ieee80211_channel *VAR_6)
{


 uint16_t VAR_7 = FUNC_5(VAR_5, VAR_6);
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13 = 0x64000000;

 if (FUNC_3(VAR_6))
  VAR_13 *= 2;


 if (FUNC_1(VAR_6)) {
  VAR_13 = VAR_13 >> 1;
 } else if (FUNC_2(VAR_6)) {
  VAR_13 = VAR_13 >> 2;
 }





 VAR_8 = VAR_13 / VAR_7;





 for (VAR_9 = 31; VAR_9 > 0; VAR_9--)
  if ((VAR_8 >> VAR_9) & 0x1)
   break;

 FUNC_0(VAR_9);
 VAR_9 = 14 - (VAR_9 - 24);





 VAR_10 = VAR_8 + (1 << (24 - VAR_9 - 1));
 VAR_12 = VAR_10 >> (24 - VAR_9);
 VAR_11 = VAR_9 - 16;

 FUNC_4(VAR_5, VAR_0,
  VAR_2, VAR_12);
 FUNC_4(VAR_5, VAR_0,
  VAR_1, VAR_11);


}
