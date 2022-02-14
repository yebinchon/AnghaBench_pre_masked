
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int ah_ini_common; int ah_ini_modes; } ;
struct TYPE_3__ {int ah_ini_txgain; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ieee80211_channel const*) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 int FUNC_7 (struct ath_hal*,int *,int,int) ;

__attribute__((used)) static void
FUNC_8(struct ath_hal *VAR_2, const struct ieee80211_channel *VAR_3)
{
 u_int VAR_4, VAR_5;
 int VAR_6 = 0;



 VAR_5 = 2;
 if (FUNC_5(VAR_3))
  VAR_4 = 3;
 else if (FUNC_4(VAR_3))
  VAR_4 = 5;
 else
  VAR_4 = 4;


 FUNC_6(VAR_2, FUNC_2(0), 0x00000007);
 FUNC_6(VAR_2, VAR_0, VAR_1);
 VAR_6 = FUNC_7(VAR_2, &FUNC_0(VAR_2)->ah_ini_modes,
     VAR_4, VAR_6);
 if (FUNC_3(VAR_2)) {
  VAR_6 = FUNC_7(VAR_2, &FUNC_1(VAR_2)->ah_ini_txgain,
      VAR_4, VAR_6);
 }
 VAR_6 = FUNC_7(VAR_2, &FUNC_0(VAR_2)->ah_ini_common,
     1, VAR_6);
}
