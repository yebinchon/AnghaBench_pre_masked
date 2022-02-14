
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {scalar_t__ wps_run; int after_wps; int known_wps_freq; int wps_freq; int reassociate; scalar_t__ blacklist_cleared; scalar_t__ wps_success; scalar_t__ normal_scans; scalar_t__ scan_runs; scalar_t__ disconnected; } ;
struct wpa_ssid {int dummy; } ;
struct wpa_bss {int freq; } ;


 struct wpa_bss* FUNC_0 (struct wpa_supplicant*,int const*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_0,
        struct wpa_ssid *VAR_1, const u8 *VAR_2,
        int VAR_3)
{
 struct wpa_bss *VAR_4;

 VAR_0->wps_run++;
 if (VAR_0->wps_run == 0)
  VAR_0->wps_run++;
 VAR_0->after_wps = 0;
 VAR_0->known_wps_freq = 0;
 if (VAR_3) {
  VAR_0->after_wps = 5;
  VAR_0->wps_freq = VAR_3;
 } else if (VAR_2) {
  VAR_4 = FUNC_0(VAR_0, VAR_2);
  if (VAR_4 && VAR_4->freq > 0) {
   VAR_0->known_wps_freq = 1;
   VAR_0->wps_freq = VAR_4->freq;
  }
 }

 FUNC_3(VAR_0, VAR_1);

 VAR_0->disconnected = 0;
 VAR_0->reassociate = 1;
 VAR_0->scan_runs = 0;
 VAR_0->normal_scans = 0;
 VAR_0->wps_success = 0;
 VAR_0->blacklist_cleared = 0;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0, 0, 0);
}
