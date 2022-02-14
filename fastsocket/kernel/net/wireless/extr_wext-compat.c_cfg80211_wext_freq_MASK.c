
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct iw_freq {scalar_t__ e; int m; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

int FUNC_1(struct wiphy *VAR_3, struct iw_freq *VAR_4)
{




 if (VAR_4->e == 0) {
  enum ieee80211_band VAR_5 = VAR_1;
  if (VAR_4->m < 0)
   return 0;
  if (VAR_4->m > 14)
   VAR_5 = VAR_2;
  return FUNC_0(VAR_4->m, VAR_5);
 } else {
  int VAR_6, VAR_7 = 1000000;
  for (VAR_6 = 0; VAR_6 < VAR_4->e; VAR_6++)
   VAR_7 /= 10;
  if (VAR_7 <= 0)
   return -VAR_0;
  return VAR_4->m / VAR_7;
 }
}
