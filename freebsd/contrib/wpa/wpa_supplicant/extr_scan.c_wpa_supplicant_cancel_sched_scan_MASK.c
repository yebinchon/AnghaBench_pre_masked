
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int sched_scan_stop_req; scalar_t__ sched_scanning; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct wpa_supplicant*) ;

void FUNC_3(struct wpa_supplicant *VAR_2)
{
 if (!VAR_2->sched_scanning)
  return;

 if (VAR_2->sched_scanning)
  VAR_2->sched_scan_stop_req = 1;

 FUNC_1(VAR_2, VAR_0, "Cancelling sched scan");
 FUNC_0(VAR_1, VAR_2, ((void*)0));
 FUNC_2(VAR_2);
}
