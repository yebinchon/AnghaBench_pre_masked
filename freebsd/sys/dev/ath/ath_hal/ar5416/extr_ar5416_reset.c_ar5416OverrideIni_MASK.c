
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (struct ath_hal*) ;
 scalar_t__ FUNC_6 (struct ath_hal*) ;
 int FUNC_7 (struct ath_hal*,int) ;
 int FUNC_8 (struct ath_hal*,int ,int) ;
 int FUNC_9 (struct ath_hal*,int,int) ;
 int FUNC_10 (struct ath_hal*,struct ieee80211_channel const*,int ) ;

__attribute__((used)) static void
FUNC_11(struct ath_hal *VAR_8, const struct ieee80211_channel *VAR_9)
{
 uint32_t VAR_10;






 FUNC_8(VAR_8, VAR_3, (VAR_2 | VAR_1));

 if (FUNC_5(VAR_8)) {
  VAR_10 = FUNC_7(VAR_8, VAR_4);
  VAR_10 &= (~VAR_5);
  if (!FUNC_1(VAR_8))
   VAR_10 &= ~VAR_6;

  if (FUNC_3(VAR_8))
   VAR_10 = VAR_10 & (~VAR_7);

  FUNC_9(VAR_8, VAR_4, VAR_10);
 }





 if (FUNC_2(VAR_8) || FUNC_6(VAR_8))
  (void) FUNC_10(VAR_8, VAR_9, VAR_0);

        if (!FUNC_0(VAR_8) || FUNC_4(VAR_8))
  return;





 FUNC_9(VAR_8, 0x9800 + (651 << 2), 0x11);
}
