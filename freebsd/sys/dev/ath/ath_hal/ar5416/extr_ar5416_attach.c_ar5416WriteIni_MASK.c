
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {TYPE_1__* ah_rfHal; int ah_ini_common; int ah_ini_modes; } ;
struct TYPE_5__ {int ah_ini_addac; } ;
struct TYPE_4__ {int (* writeRegs ) (struct ath_hal*,int,int,int) ;} ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_6 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_7 (struct ieee80211_channel const*) ;
 int FUNC_8 (struct ath_hal*,int ,int) ;
 int FUNC_9 (struct ath_hal*,struct ieee80211_channel const*) ;
 int FUNC_10 (struct ath_hal*,int *,int,int) ;
 int FUNC_11 (struct ath_hal*,int,int,int) ;

__attribute__((used)) static void
FUNC_12(struct ath_hal *VAR_3, const struct ieee80211_channel *VAR_4)
{
 u_int VAR_5, VAR_6;
 int VAR_7 = 0;



 if (FUNC_5(VAR_4)) {
  VAR_6 = 2;
  if (FUNC_6(VAR_4))
   VAR_5 = 3;
  else if (FUNC_4(VAR_4))
   VAR_5 = 5;
  else
   VAR_5 = 4;
 } else {
  VAR_6 = 1;
  if (FUNC_6(VAR_4) ||
      FUNC_7(VAR_4))
   VAR_5 = 2;
  else
   VAR_5 = 1;
 }


 FUNC_8(VAR_3, FUNC_2(0), 0x00000007);




 FUNC_8(VAR_3, VAR_0, VAR_1);


 if (FUNC_3(VAR_3))
  FUNC_9(VAR_3, VAR_4);

 VAR_7 = FUNC_10(VAR_3, &FUNC_1(VAR_3)->ah_ini_addac, 1,
     VAR_7);
 FUNC_8(VAR_3, VAR_0, VAR_2);

 VAR_7 = FUNC_10(VAR_3, &FUNC_0(VAR_3)->ah_ini_modes,
     VAR_5, VAR_7);
 VAR_7 = FUNC_10(VAR_3, &FUNC_0(VAR_3)->ah_ini_common,
     1, VAR_7);


 FUNC_0(VAR_3)->ah_rfHal->writeRegs(VAR_3, VAR_5, VAR_6, VAR_7);
}
