
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_vht_capabilities {int dummy; } ;
struct hostapd_data {TYPE_1__* iface; } ;
struct TYPE_2__ {int current_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (struct hostapd_data*,int *,int ) ;
 int * FUNC_2 (struct hostapd_data*,int *) ;

u8 * FUNC_3(struct hostapd_data *VAR_4, u8 *VAR_5)
{
 u8 *VAR_6 = VAR_5;

 if (!VAR_4->iface->current_mode)
  return VAR_5;

 *VAR_6++ = VAR_3;
 *VAR_6++ = (5 +
    2 + sizeof(struct ieee80211_vht_capabilities) +
    2 + sizeof(struct ieee80211_vht_operation));

 FUNC_0(VAR_6, (VAR_0 << 8) | VAR_2);
 VAR_6 += 4;
 *VAR_6++ = VAR_1;
 VAR_6 = FUNC_1(VAR_4, VAR_6, 0);
 VAR_6 = FUNC_2(VAR_4, VAR_6);

 return VAR_6;
}
