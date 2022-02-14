
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int sched_scanning; } ;
struct wpa_driver_scan_params {int dummy; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 int FUNC_1 (struct wpa_supplicant*,int) ;

__attribute__((used)) static int
FUNC_2(struct wpa_supplicant *VAR_0,
    struct wpa_driver_scan_params *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, 1);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_0, 0);
 else
  VAR_0->sched_scanning = 1;

 return VAR_2;
}
