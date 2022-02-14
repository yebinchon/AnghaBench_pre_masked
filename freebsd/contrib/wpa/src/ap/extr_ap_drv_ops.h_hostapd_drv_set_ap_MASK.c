
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_driver_ap_params {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_ap ) (int ,struct wpa_driver_ap_params*) ;} ;


 int FUNC_0 (int ,struct wpa_driver_ap_params*) ;

__attribute__((used)) static inline int FUNC_1(struct hostapd_data *VAR_0,
         struct wpa_driver_ap_params *VAR_1)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->set_ap == ((void*)0))
  return 0;
 return VAR_0->driver->set_ap(VAR_0->drv_priv, VAR_1);
}
