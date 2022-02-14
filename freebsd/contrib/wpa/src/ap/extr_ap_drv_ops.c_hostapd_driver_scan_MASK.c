
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_driver_scan_params {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* scan2 ) (int ,struct wpa_driver_scan_params*) ;} ;


 int FUNC_0 (int ,struct wpa_driver_scan_params*) ;

int FUNC_1(struct hostapd_data *VAR_0,
   struct wpa_driver_scan_params *VAR_1)
{
 if (VAR_0->driver && VAR_0->driver->scan2)
  return VAR_0->driver->scan2(VAR_0->drv_priv, VAR_1);
 return -1;
}
