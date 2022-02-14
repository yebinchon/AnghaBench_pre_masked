
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int obss_scan_int; int ht_sec_chan; scalar_t__ sched_obss_scan; } ;
struct TYPE_3__ {int num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {int drv_flags; TYPE_2__ sme; struct wpa_bss* current_bss; TYPE_1__ hw; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {scalar_t__ mode; } ;
struct wpa_bss {int freq; } ;
struct hostapd_hw_modes {scalar_t__ mode; int ht_capab; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int,int ,int ,struct wpa_supplicant*,int *) ;
 int VAR_9 ;
 int* FUNC_3 (struct wpa_bss*,int ) ;
 int FUNC_4 (int ,char*,int) ;

void FUNC_5(struct wpa_supplicant *VAR_10, int VAR_11)
{
 const u8 *VAR_12;
 struct wpa_bss *VAR_13 = VAR_10->current_bss;
 struct wpa_ssid *VAR_14 = VAR_10->current_ssid;
 struct hostapd_hw_modes *VAR_15 = ((void*)0);
 int VAR_16;

 FUNC_1(VAR_9, VAR_10, ((void*)0));
 VAR_10->sme.sched_obss_scan = 0;
 VAR_10->sme.ht_sec_chan = VAR_2;
 if (!VAR_11)
  return;





 if (!((VAR_10->drv_flags & VAR_8) ||
       (VAR_10->drv_flags & VAR_7)) ||
     VAR_14 == ((void*)0) || VAR_14->mode != VAR_6)
  return;

 if (!VAR_10->hw.modes)
  return;


 for (VAR_16 = 0; VAR_16 < VAR_10->hw.num_modes; VAR_16++) {
  VAR_15 = &VAR_10->hw.modes[VAR_16];
  if (VAR_15->mode == VAR_0)
   break;
 }


 if (VAR_16 == VAR_10->hw.num_modes || !VAR_15 ||
     !(VAR_15->ht_capab & VAR_1))
  return;

 if (VAR_13 == ((void*)0) || VAR_13->freq < 2400 || VAR_13->freq > 2500)
  return;


 VAR_12 = FUNC_3(VAR_10->current_bss, VAR_4);
 if (!VAR_12 || VAR_12[1] < 2 ||
     !(FUNC_0(VAR_12 + 2) & VAR_1))
  return;

 VAR_12 = FUNC_3(VAR_10->current_bss,
       VAR_5);
 if (!VAR_12 || VAR_12[1] < 14)
  return;

 VAR_10->sme.obss_scan_int = FUNC_0(VAR_12 + 6);
 if (VAR_10->sme.obss_scan_int < 10) {
  FUNC_4(VAR_3, "SME: Invalid OBSS Scan Interval %u "
      "replaced with the minimum 10 sec",
      VAR_10->sme.obss_scan_int);
  VAR_10->sme.obss_scan_int = 10;
 }
 FUNC_4(VAR_3, "SME: OBSS Scan Interval %u sec",
     VAR_10->sme.obss_scan_int);
 FUNC_2(VAR_10->sme.obss_scan_int, 0,
          VAR_9, VAR_10, ((void*)0));
}
