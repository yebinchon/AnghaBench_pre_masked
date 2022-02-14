
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_7__ {int cols; int rows; } ;
struct TYPE_10__ {TYPE_1__ ah_ini_common; TYPE_1__ ah_ini_modes; } ;
struct TYPE_9__ {scalar_t__ ah_need_an_top2_fixup; } ;
struct TYPE_8__ {TYPE_1__ ah_ini_xmodes; TYPE_1__ ah_ini_txgain; TYPE_1__ ah_ini_rxgain; } ;
typedef TYPE_1__ HAL_INI_ARRAY ;


 TYPE_6__* FUNC_0 (struct ath_hal*) ;
 TYPE_5__* FUNC_1 (struct ath_hal*) ;
 TYPE_4__* FUNC_2 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__ const*,int,int) ;
 scalar_t__ FUNC_9 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_10 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_11 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_12 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_13 (struct ath_hal*,struct ieee80211_channel const*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct ath_hal*,int,int) ;
 int FUNC_16 (struct ath_hal*,TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_17(struct ath_hal *VAR_4, const struct ieee80211_channel *VAR_5)
{
 u_int VAR_6, VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 const HAL_INI_ARRAY *VAR_10;



 if (FUNC_10(VAR_5)) {
  VAR_7 = 2;
  if (FUNC_11(VAR_5))
   VAR_6 = 3;
  else if (FUNC_9(VAR_5))
   VAR_6 = 5;
  else
   VAR_6 = 4;
 } else {
  VAR_7 = 1;
  if (FUNC_11(VAR_5) ||
      FUNC_12(VAR_5))
   VAR_6 = 2;
  else
   VAR_6 = 1;
 }


 FUNC_15(VAR_4, FUNC_3(0), 0x00000007);
 FUNC_15(VAR_4, VAR_2, VAR_3);






 VAR_10 = &FUNC_0(VAR_4)->ah_ini_modes;




 FUNC_7(VAR_6 < VAR_10->cols);
 for (VAR_9 = 0; VAR_9 < VAR_10->rows; VAR_9++) {
  uint32_t VAR_11 = FUNC_8(VAR_10, VAR_9, 0);
  uint32_t VAR_12 = FUNC_8(VAR_10, VAR_9, VAR_6);

  if (VAR_11 == VAR_0 && FUNC_1(VAR_4)->ah_need_an_top2_fixup)
   VAR_12 &= ~VAR_1;

  FUNC_15(VAR_4, VAR_11, VAR_12);


  if (VAR_11 >= 0x7800 && VAR_11 < 0x7900)
   FUNC_14(100);

  FUNC_6(VAR_8);
 }

 if (FUNC_5(VAR_4)) {
  VAR_8 = FUNC_16(VAR_4, &FUNC_2(VAR_4)->ah_ini_rxgain,
      VAR_6, VAR_8);
  VAR_8 = FUNC_16(VAR_4, &FUNC_2(VAR_4)->ah_ini_txgain,
      VAR_6, VAR_8);
 }

 VAR_8 = FUNC_16(VAR_4, &FUNC_0(VAR_4)->ah_ini_common,
     1, VAR_8);

 if (FUNC_4(VAR_4) && FUNC_13(VAR_4, VAR_5)) {

  VAR_8 = FUNC_16(VAR_4, &FUNC_2(VAR_4)->ah_ini_xmodes,
      VAR_6, VAR_8);
 }
}
