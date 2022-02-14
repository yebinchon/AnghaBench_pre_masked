
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ HAL_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;

HAL_BOOL
FUNC_7(struct ath_hal *VAR_5, const struct ieee80211_channel *VAR_6,
    HAL_BOOL VAR_7)
{
 uint32_t VAR_8;
 HAL_BOOL VAR_9 = VAR_0;
 HAL_BOOL VAR_10 = VAR_0;

 if (VAR_6)
  VAR_9 = FUNC_3(VAR_6);

 if (VAR_6)
  VAR_10 = FUNC_4(VAR_6);


 FUNC_2(VAR_7 == VAR_0);

 if (VAR_7 == VAR_1)
  return VAR_0;


 VAR_8 = FUNC_5(VAR_5, VAR_2);
 VAR_8 &= ~VAR_3;
 FUNC_6(VAR_5, VAR_2, VAR_8);
 if ((! FUNC_1(VAR_5)) && (! FUNC_0(VAR_5)))
  return VAR_1;


 if (VAR_9)
  if (VAR_10)
   FUNC_6(VAR_5, VAR_4, 0x268);
  else
   FUNC_6(VAR_5, VAR_4, 0x134);
 else
  if (VAR_10)
   FUNC_6(VAR_5, VAR_4, 0x370);
  else
   FUNC_6(VAR_5, VAR_4, 0x1b8);

 return VAR_1;
}
