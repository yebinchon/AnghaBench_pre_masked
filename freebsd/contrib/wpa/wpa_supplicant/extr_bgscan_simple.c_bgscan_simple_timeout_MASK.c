
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int dummy; } ;
struct wpa_driver_scan_params {int num_ssids; int freqs; TYPE_1__* ssids; } ;
struct bgscan_simple_data {scalar_t__ scan_interval; scalar_t__ short_interval; scalar_t__ short_scan_count; scalar_t__ max_short_scans; scalar_t__ long_interval; int last_bgscan; TYPE_2__* ssid; struct wpa_supplicant* wpa_s; } ;
typedef int params ;
struct TYPE_4__ {int scan_freq; int ssid_len; int ssid; } ;
struct TYPE_3__ {int ssid_len; int ssid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,void (*) (void*,void*),struct bgscan_simple_data*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wpa_driver_scan_params*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, void *VAR_2)
{
 struct bgscan_simple_data *VAR_3 = VAR_1;
 struct wpa_supplicant *VAR_4 = VAR_3->wpa_s;
 struct wpa_driver_scan_params VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.num_ssids = 1;
 VAR_5.ssids[0].ssid = VAR_3->ssid->ssid;
 VAR_5.ssids[0].ssid_len = VAR_3->ssid->ssid_len;
 VAR_5.freqs = VAR_3->ssid->scan_freq;







 FUNC_3(VAR_0, "bgscan simple: Request a background scan");
 if (FUNC_4(VAR_4, &VAR_5)) {
  FUNC_3(VAR_0, "bgscan simple: Failed to trigger scan");
  FUNC_0(VAR_3->scan_interval, 0,
           FUNC_5, VAR_3, ((void*)0));
 } else {
  if (VAR_3->scan_interval == VAR_3->short_interval) {
   VAR_3->short_scan_count++;
   if (VAR_3->short_scan_count >= VAR_3->max_short_scans) {
    VAR_3->scan_interval = VAR_3->long_interval;
    FUNC_3(VAR_0, "bgscan simple: Backing "
        "off to long scan interval");
   }
  } else if (VAR_3->short_scan_count > 0) {






   VAR_3->short_scan_count--;
  }
  FUNC_1(&VAR_3->last_bgscan);
 }
}
