
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_results {int dummy; } ;
struct wpa_driver_nl80211_data {int dummy; } ;
struct i802_bss {struct wpa_driver_nl80211_data* drv; } ;


 struct wpa_scan_results* FUNC_0 (struct wpa_driver_nl80211_data*) ;
 int FUNC_1 (struct wpa_driver_nl80211_data*,struct wpa_scan_results*) ;

struct wpa_scan_results * FUNC_2(void *VAR_0)
{
 struct i802_bss *VAR_1 = VAR_0;
 struct wpa_driver_nl80211_data *VAR_2 = VAR_1->drv;
 struct wpa_scan_results *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  FUNC_1(VAR_2, VAR_3);
 return VAR_3;
}
