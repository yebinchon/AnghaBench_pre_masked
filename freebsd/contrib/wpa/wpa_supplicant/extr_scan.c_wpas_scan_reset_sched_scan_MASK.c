
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int * prev_sched_ssid; scalar_t__ sched_scan_timed_out; scalar_t__ sched_scanning; scalar_t__ normal_scans; } ;


 int FUNC_0 (struct wpa_supplicant*) ;

void FUNC_1(struct wpa_supplicant *VAR_0)
{
 VAR_0->normal_scans = 0;
 if (VAR_0->sched_scanning) {
  VAR_0->sched_scan_timed_out = 0;
  VAR_0->prev_sched_ssid = ((void*)0);
  FUNC_0(VAR_0);
 }
}
