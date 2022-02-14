
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wpa_driver_scan_params {scalar_t__ duration; } ;
struct TYPE_2__ {struct wpa_driver_scan_params scan_params; } ;
struct wpa_supplicant {int drv_rrm_flags; scalar_t__ scanning; int beacon_rep_scan; int current_bss; TYPE_1__ beacon_rep_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, void *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_2;
 struct wpa_driver_scan_params *VAR_5 =
  &VAR_4->beacon_rep_data.scan_params;
 u16 VAR_6 = VAR_5->duration;

 if (!VAR_4->current_bss)
  return;

 if (!(VAR_4->drv_rrm_flags & VAR_1) &&
     VAR_5->duration) {
  FUNC_1(VAR_0,
      "RRM: Cannot set scan duration due to missing driver support");
  VAR_5->duration = 0;
 }
 FUNC_0(&VAR_4->beacon_rep_scan);
 if (VAR_4->scanning || FUNC_3(VAR_4) ||
     FUNC_2(VAR_4, VAR_5))
  FUNC_4(VAR_4);
 VAR_5->duration = VAR_6;
}
