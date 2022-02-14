
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {scalar_t__ ht_extprotspacing; } ;
typedef int HAL_HT_MACMODE ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int FUNC_6 (struct ath_hal*,int ) ;
 TYPE_1__* VAR_18 ;

__attribute__((used)) static void
FUNC_7(struct ath_hal *VAR_19, const struct ieee80211_channel *VAR_20)
{
 uint32_t VAR_21;
 uint32_t VAR_22 = 0;
 HAL_HT_MACMODE VAR_23;

 if (FUNC_0(VAR_19))
  VAR_22 = (FUNC_3(VAR_19, VAR_14) & VAR_9);


 VAR_21 = VAR_10 | VAR_11
  | VAR_12 | VAR_13 | VAR_22;


 if (FUNC_1(VAR_20)) {
  VAR_21 |= VAR_6;


  if (FUNC_2(VAR_20))
   VAR_21 |= VAR_8;





  VAR_23 = VAR_17;
 } else
  VAR_23 = VAR_16;
 FUNC_5(VAR_19, VAR_14, VAR_21);


 FUNC_6(VAR_19, VAR_23);



 FUNC_5(VAR_19, VAR_4, 25 << VAR_5) ;


 FUNC_4(VAR_19, VAR_2, VAR_3);
 FUNC_5(VAR_19, VAR_0, 0xF << VAR_1);
}
