
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_results {size_t num; int * res; } ;
struct wpa_driver_nl80211_data {int first_bss; } ;
struct nl_msg {int dummy; } ;
struct nl80211_noise_info {int dummy; } ;
struct nl80211_bss_info_arg {struct wpa_scan_results* res; struct wpa_driver_nl80211_data* drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nl_msg* FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct wpa_driver_nl80211_data*,struct nl80211_noise_info*) ;
 int FUNC_2 (int ,struct nl80211_noise_info*) ;
 struct wpa_scan_results* FUNC_3 (int) ;
 int FUNC_4 (struct wpa_driver_nl80211_data*,struct nl_msg*,int ,struct nl80211_bss_info_arg*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct wpa_scan_results*) ;

__attribute__((used)) static struct wpa_scan_results *
FUNC_8(struct wpa_driver_nl80211_data *VAR_4)
{
 struct nl_msg *VAR_5;
 struct wpa_scan_results *VAR_6;
 int VAR_7;
 struct nl80211_bss_info_arg VAR_8;

 VAR_6 = FUNC_3(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 if (!(VAR_5 = FUNC_0(VAR_4->first_bss, VAR_2,
        VAR_1))) {
  FUNC_7(VAR_6);
  return ((void*)0);
 }

 VAR_8.drv = VAR_4;
 VAR_8.res = VAR_6;
 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_3, &VAR_8);
 if (VAR_7 == 0) {
  struct nl80211_noise_info VAR_9;

  FUNC_6(VAR_0, "nl80211: Received scan results (%lu "
      "BSSes)", (unsigned long) VAR_6->num);
  if (FUNC_1(VAR_4, &VAR_9) == 0) {
   size_t VAR_10;

   for (VAR_10 = 0; VAR_10 < VAR_6->num; ++VAR_10)
    FUNC_2(VAR_6->res[VAR_10],
             &VAR_9);
  }
  return VAR_6;
 }
 FUNC_6(VAR_0, "nl80211: Scan result fetch failed: ret=%d "
     "(%s)", VAR_7, FUNC_5(-VAR_7));
 FUNC_7(VAR_6);
 return ((void*)0);
}
