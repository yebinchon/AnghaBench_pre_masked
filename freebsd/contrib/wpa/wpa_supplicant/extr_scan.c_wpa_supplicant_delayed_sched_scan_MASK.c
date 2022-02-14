
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int sched_scan_supported; } ;


 int FUNC_0 (int,int,int ,struct wpa_supplicant*,int *) ;
 int VAR_0 ;

int FUNC_1(struct wpa_supplicant *VAR_1,
          int VAR_2, int VAR_3)
{
 if (!VAR_1->sched_scan_supported)
  return -1;

 FUNC_0(VAR_2, VAR_3,
          VAR_0,
          VAR_1, ((void*)0));

 return 0;
}
