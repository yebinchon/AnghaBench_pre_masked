
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
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath_hal*,scalar_t__) ;
 int FUNC_3 (struct ath_hal*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct ath_hal*,struct ieee80211_channel const*) ;

__attribute__((used)) static HAL_BOOL
FUNC_5(struct ath_hal *VAR_17, const struct ieee80211_channel *VAR_18)
{
 int VAR_19;
 uint32_t VAR_20;
 uint32_t VAR_21, VAR_22 = 0, VAR_23 = 0;
 uint32_t VAR_24, VAR_25;
 uint32_t VAR_26 = 0;
 uint32_t VAR_27 = 0;
 uint32_t VAR_28 = 0;
 uint32_t VAR_29;
 HAL_BOOL VAR_30 = VAR_1;

 if (!(FUNC_4(VAR_17, VAR_18)))
  return VAR_0;

 VAR_20 = FUNC_1(FUNC_2(VAR_17, VAR_15),
   VAR_16);

 for (VAR_19 = 0; VAR_19 < (VAR_20+1); VAR_19++) {
  VAR_21 = (FUNC_2(VAR_17, (VAR_14+(VAR_19<<2))) &
      VAR_12) >> VAR_13;
  if (!(VAR_22 & (1 << VAR_21))) {
   VAR_22 |= (1 << VAR_21);
   VAR_23++;
  }
 }

 for (VAR_19 = 0; VAR_19 < VAR_23; VAR_19++) {
  VAR_24 = (FUNC_2(VAR_17, (VAR_11 + (VAR_19 << 2)))
         & VAR_7) >> VAR_8;
  VAR_25 = (FUNC_2(VAR_17, (VAR_11 + (VAR_19 << 2)))
         & VAR_9) >> VAR_10;
  if (VAR_24 == 0)
   VAR_26++;

  if (VAR_25 == 0)
   VAR_27++;
 }
 VAR_28 = VAR_26 + VAR_27;
 if (VAR_28 > VAR_2) {
  VAR_29 = FUNC_2(VAR_17, VAR_3);
  if (FUNC_0(VAR_17)) {
   FUNC_3(VAR_17, VAR_3,
      (VAR_29 & VAR_4) |
      VAR_6);
  } else {
   FUNC_3(VAR_17, VAR_3,
      (VAR_29 & VAR_4) |
      VAR_5);
  }
  VAR_30 = FUNC_4(VAR_17, VAR_18);
  FUNC_3(VAR_17, VAR_3, VAR_29);
 }
 return VAR_30;
}
