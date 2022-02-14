
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct wpa_supplicant {size_t wnm_num_neighbor_report; struct wpa_bss* current_bss; struct neighbor_report* wnm_neighbor_report_elements; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int dummy; } ;
struct TYPE_3__ {scalar_t__ sec; } ;
struct wpa_scan_results {size_t num; TYPE_1__ fetch_time; struct wpa_scan_res** res; } ;
struct wpa_scan_res {size_t const* bssid; int age; } ;
struct wpa_bss {size_t const ssid_len; int ssid; } ;
struct neighbor_report {scalar_t__ preference; int bssid; scalar_t__ preference_present; } ;


 size_t const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpa_bss* FUNC_0 (struct wpa_supplicant*,int,int *) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_scan_results*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,size_t const*,size_t const) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpa_scan_res*) ;
 int FUNC_5 (struct wpa_scan_res*) ;
 int FUNC_6 (struct wpa_supplicant*,struct wpa_bss*,struct wpa_ssid*,int ) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpa_scan_res*,TYPE_1__*) ;
 int FUNC_8 (struct wpa_supplicant*,int ,char*) ;
 struct wpa_scan_results* FUNC_9 (struct wpa_supplicant*) ;
 size_t* FUNC_10 (struct wpa_scan_res*,int ) ;
 int FUNC_11 (struct wpa_scan_results*) ;

__attribute__((used)) static int FUNC_12(struct wpa_supplicant *VAR_4)
{
 struct wpa_scan_results *VAR_5;
 struct wpa_bss *VAR_6;
 struct wpa_ssid *VAR_7 = VAR_4->current_ssid;
 u8 VAR_8, VAR_9 = 0;
 size_t VAR_10;

 FUNC_8(VAR_4, VAR_1,
  "WNM: Fetch current scan results from the driver for checking transition candidates");
 VAR_5 = FUNC_9(VAR_4);
 if (!VAR_5) {
  FUNC_8(VAR_4, VAR_1, "WNM: Failed to get scan results");
  return 0;
 }

 if (VAR_5->fetch_time.sec == 0)
  FUNC_2(&VAR_5->fetch_time);

 FUNC_1(VAR_4, VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_4->wnm_num_neighbor_report; VAR_8++) {
  struct neighbor_report *VAR_11;

  VAR_11 = &VAR_4->wnm_neighbor_report_elements[VAR_8];
  if (VAR_11->preference_present && VAR_11->preference == 0)
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_5->num; VAR_10++) {
   struct wpa_scan_res *VAR_12;
   const u8 *VAR_13;

   VAR_12 = VAR_5->res[VAR_10];
   if (FUNC_3(VAR_11->bssid, VAR_12->bssid, VAR_0) != 0 ||
       VAR_12->age > VAR_3 * 1000)
    continue;
   VAR_6 = VAR_4->current_bss;
   VAR_13 = FUNC_10(VAR_12, VAR_2);
   if (VAR_6 && VAR_13 &&
       (VAR_6->ssid_len != VAR_13[1] ||
        FUNC_3(VAR_6->ssid, VAR_13 + 2,
           VAR_6->ssid_len) != 0))
    continue;


   VAR_9 = 1;
   FUNC_5(VAR_12);
   FUNC_4(VAR_4, VAR_12);
   FUNC_7(VAR_4, VAR_12,
      &VAR_5->fetch_time);
  }
 }

 FUNC_11(VAR_5);
 if (!VAR_9) {
  FUNC_8(VAR_4, VAR_1,
   "WNM: No transition candidate matches existing scan results");
  return 0;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_3, ((void*)0));
 if (!VAR_6) {
  FUNC_8(VAR_4, VAR_1,
   "WNM: Comparison of scan results against transition candidates did not find matches");
  return 0;
 }


 FUNC_6(VAR_4, VAR_6, VAR_7, 0);
 return 1;
}
