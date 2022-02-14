
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_driver_scan_params {int* freqs; } ;
struct hostapd_iface {int * bss; TYPE_2__* conf; scalar_t__ acs_num_completed_scans; int scan_cb; TYPE_1__* current_mode; } ;
struct hostapd_channel_data {int flag; int freq; } ;
typedef int params ;
struct TYPE_4__ {int acs_num_scans; } ;
struct TYPE_3__ {int num_channels; struct hostapd_channel_data* channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct wpa_driver_scan_params*) ;
 int FUNC_2 (struct hostapd_iface*,struct hostapd_channel_data*) ;
 int* FUNC_3 (int,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct wpa_driver_scan_params*,int ,int) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(struct hostapd_iface *VAR_4)
{
 struct wpa_driver_scan_params VAR_5;
 struct hostapd_channel_data *VAR_6;
 int VAR_7, *VAR_8;

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.freqs = FUNC_3(VAR_4->current_mode->num_channels + 1,
     sizeof(VAR_5.freqs[0]));
 if (VAR_5.freqs == ((void*)0))
  return -1;

 VAR_8 = VAR_5.freqs;
 for (VAR_7 = 0; VAR_7 < VAR_4->current_mode->num_channels; VAR_7++) {
  VAR_6 = &VAR_4->current_mode->channels[VAR_7];
  if (VAR_6->flag & VAR_0)
   continue;

  if (!FUNC_2(VAR_4, VAR_6))
   continue;

  *VAR_8++ = VAR_6->freq;
 }
 *VAR_8 = 0;

 VAR_4->scan_cb = VAR_3;

 FUNC_6(VAR_1, "ACS: Scanning %d / %d",
     VAR_4->acs_num_completed_scans + 1,
     VAR_4->conf->acs_num_scans);

 if (FUNC_1(VAR_4->bss[0], &VAR_5) < 0) {
  FUNC_6(VAR_2, "ACS: Failed to request initial scan");
  FUNC_0(VAR_4);
  FUNC_4(VAR_5.freqs);
  return -1;
 }

 FUNC_4(VAR_5.freqs);
 return 0;
}
