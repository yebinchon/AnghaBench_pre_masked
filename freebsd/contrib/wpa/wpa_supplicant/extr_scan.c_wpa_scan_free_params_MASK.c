
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_driver_scan_params {size_t num_ssids; scalar_t__ bssid; scalar_t__ mac_addr; struct wpa_driver_scan_params* sched_scan_plans; struct wpa_driver_scan_params* filter_ssids; struct wpa_driver_scan_params* freqs; scalar_t__ extra_ies; TYPE_1__* ssids; } ;
typedef struct wpa_driver_scan_params u8 ;
struct TYPE_2__ {scalar_t__ ssid; } ;


 int FUNC_0 (struct wpa_driver_scan_params*) ;

void FUNC_1(struct wpa_driver_scan_params *VAR_0)
{
 size_t VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ssids; VAR_1++)
  FUNC_0((u8 *) VAR_0->ssids[VAR_1].ssid);
 FUNC_0((u8 *) VAR_0->extra_ies);
 FUNC_0(VAR_0->freqs);
 FUNC_0(VAR_0->filter_ssids);
 FUNC_0(VAR_0->sched_scan_plans);





 FUNC_0((u8 *) VAR_0->mac_addr);

 FUNC_0((u8 *) VAR_0->bssid);

 FUNC_0(VAR_0);
}
