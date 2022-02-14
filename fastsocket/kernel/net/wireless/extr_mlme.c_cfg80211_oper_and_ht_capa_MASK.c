
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_ht_cap {int dummy; } ;


 int FUNC_0 (struct ieee80211_ht_cap*,int ,int) ;

void FUNC_1(struct ieee80211_ht_cap *VAR_0,
          const struct ieee80211_ht_cap *VAR_1)
{
 int VAR_2;
 u8 *VAR_3, *VAR_4;
 if (!VAR_1) {
  FUNC_0(VAR_0, 0, sizeof(*VAR_0));
  return;
 }

 VAR_3 = (u8*)(VAR_0);
 VAR_4 = (u8*)(VAR_1);
 for (VAR_2 = 0; VAR_2<sizeof(*VAR_0); VAR_2++)
  VAR_3[VAR_2] &= VAR_4[VAR_2];
}
