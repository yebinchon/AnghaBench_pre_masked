
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
 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;
 int VAR_3 ;

void
FUNC_3(struct ath_hal *VAR_4, const struct ieee80211_channel *VAR_5)
{

 uint32_t VAR_6;




 if (VAR_5 && FUNC_0(VAR_5))
  VAR_6 = 0x1450;
 else
  VAR_6 = 0x1458;

 FUNC_2(VAR_4, VAR_0, VAR_6);
 FUNC_1(VAR_3);
 FUNC_2(VAR_4, VAR_1, VAR_2);
}
