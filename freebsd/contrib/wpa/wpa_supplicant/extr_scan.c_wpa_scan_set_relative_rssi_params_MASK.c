
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ relative_rssi_set; scalar_t__ relative_adjust_rssi; int relative_adjust_band; int relative_rssi; } ;
struct wpa_supplicant {scalar_t__ wpa_state; int drv_flags; TYPE_1__ srp; } ;
struct wpa_driver_scan_params {int relative_rssi_set; scalar_t__ relative_adjust_rssi; int relative_adjust_band; int relative_rssi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct wpa_supplicant *VAR_2,
      struct wpa_driver_scan_params *VAR_3)
{
 if (VAR_2->wpa_state != VAR_0 ||
     !(VAR_2->drv_flags & VAR_1) ||
     VAR_2->srp.relative_rssi_set == 0)
  return;

 VAR_3->relative_rssi_set = 1;
 VAR_3->relative_rssi = VAR_2->srp.relative_rssi;

 if (VAR_2->srp.relative_adjust_rssi == 0)
  return;

 VAR_3->relative_adjust_band = VAR_2->srp.relative_adjust_band;
 VAR_3->relative_adjust_rssi = VAR_2->srp.relative_adjust_rssi;
}
