
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_nl80211_data {scalar_t__ ap_scan_as_station; int first_bss; scalar_t__ vendor_scan_cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct wpa_driver_nl80211_data*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (void*,int ,int *) ;

void FUNC_5(void *VAR_3, void *VAR_4)
{
 struct wpa_driver_nl80211_data *VAR_5 = VAR_3;

 FUNC_3(VAR_1, "nl80211: Scan timeout - try to abort it");





 if (!VAR_5->vendor_scan_cookie &&
     FUNC_0(VAR_5->first_bss) == 0)
  return;

 FUNC_3(VAR_1, "nl80211: Failed to abort scan");

 if (VAR_5->ap_scan_as_station != VAR_2) {
  FUNC_2(VAR_5->first_bss,
         VAR_5->ap_scan_as_station);
  VAR_5->ap_scan_as_station = VAR_2;
 }

 FUNC_3(VAR_1, "nl80211: Try to get scan results");
 FUNC_4(VAR_4, VAR_0, ((void*)0));
}
