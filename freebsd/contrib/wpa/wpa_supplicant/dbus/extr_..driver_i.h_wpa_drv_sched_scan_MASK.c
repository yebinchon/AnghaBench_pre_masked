
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct wpa_driver_scan_params {int dummy; } ;
struct TYPE_2__ {int (* sched_scan ) (int ,struct wpa_driver_scan_params*) ;} ;


 int FUNC_0 (int ,struct wpa_driver_scan_params*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
         struct wpa_driver_scan_params *VAR_1)
{
 if (VAR_0->driver->sched_scan)
  return VAR_0->driver->sched_scan(VAR_0->drv_priv, VAR_1);
 return -1;
}
