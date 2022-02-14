
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_tx_rate {int idx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_tx_rate *VAR_1,
        u8 VAR_2[VAR_0])
{
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = VAR_1->idx / 8;
 VAR_6 = VAR_1->idx % 8;


 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return 0;


 for (VAR_3 = VAR_5; VAR_3 >= 0; VAR_3--) {
  for (VAR_4 = VAR_6; VAR_4 >= 0; VAR_4--)
   if (VAR_2[VAR_3] & FUNC_0(VAR_4)) {
    VAR_1->idx = VAR_3 * 8 + VAR_4;
    return 1;
   }
  VAR_6 = 7;
 }


 VAR_5 = (VAR_1->idx + 1) / 8;
 VAR_6 = (VAR_1->idx + 1) % 8;

 for (VAR_3 = VAR_5; VAR_3 < VAR_0; VAR_3++) {
  for (VAR_4 = VAR_6; VAR_4 < 8; VAR_4++)
   if (VAR_2[VAR_3] & FUNC_0(VAR_4)) {
    VAR_1->idx = VAR_3 * 8 + VAR_4;
    return 1;
   }
  VAR_6 = 0;
 }
 return 0;
}
