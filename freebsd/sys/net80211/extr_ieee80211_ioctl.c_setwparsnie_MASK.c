
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int* iv_wpa_ie; int* iv_rsn_ie; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct ieee80211vap *VAR_2, uint8_t *VAR_3, int VAR_4)
{

 if (VAR_4 == 0 || 2+VAR_3[1] > VAR_4)
  return;
 if (VAR_3[0] == VAR_1)
  VAR_2->iv_wpa_ie = VAR_3;
 else if (VAR_3[0] == VAR_0)
  VAR_2->iv_rsn_ie = VAR_3;
}
