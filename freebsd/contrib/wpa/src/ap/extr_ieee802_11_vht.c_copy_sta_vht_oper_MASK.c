
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_info {int * vht_operation; } ;
struct ieee80211_vht_operation {int dummy; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int) ;
 int * FUNC_2 (int) ;

u16 FUNC_3(struct hostapd_data *VAR_2, struct sta_info *VAR_3,
        const u8 *VAR_4)
{
 if (!VAR_4) {
  FUNC_0(VAR_3->vht_operation);
  VAR_3->vht_operation = ((void*)0);
  return VAR_0;
 }

 if (!VAR_3->vht_operation) {
  VAR_3->vht_operation =
   FUNC_2(sizeof(struct ieee80211_vht_operation));
  if (!VAR_3->vht_operation)
   return VAR_1;
 }

 FUNC_1(VAR_3->vht_operation, VAR_4,
    sizeof(struct ieee80211_vht_operation));

 return VAR_0;
}
