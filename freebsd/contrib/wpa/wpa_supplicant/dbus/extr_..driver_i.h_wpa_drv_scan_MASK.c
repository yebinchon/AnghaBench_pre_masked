
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ test_failure; int drv_priv; TYPE_1__* driver; } ;
struct wpa_driver_scan_params {int dummy; } ;
struct TYPE_2__ {int (* scan2 ) (int ,struct wpa_driver_scan_params*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct wpa_driver_scan_params*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_2,
          struct wpa_driver_scan_params *VAR_3)
{




 if (VAR_2->driver->scan2)
  return VAR_2->driver->scan2(VAR_2->drv_priv, VAR_3);
 return -1;
}
