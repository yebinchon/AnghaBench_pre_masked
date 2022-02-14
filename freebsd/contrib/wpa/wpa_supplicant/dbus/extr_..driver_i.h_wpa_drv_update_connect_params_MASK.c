
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct wpa_driver_associate_params {int dummy; } ;
typedef enum wpa_drv_update_connect_params_mask { ____Placeholder_wpa_drv_update_connect_params_mask } wpa_drv_update_connect_params_mask ;
struct TYPE_2__ {int (* update_connect_params ) (int ,struct wpa_driver_associate_params*,int) ;} ;


 int FUNC_0 (int ,struct wpa_driver_associate_params*,int) ;

__attribute__((used)) static inline int FUNC_1(
 struct wpa_supplicant *VAR_0,
 struct wpa_driver_associate_params *VAR_1,
 enum wpa_drv_update_connect_params_mask VAR_2)
{
 if (!VAR_0->driver->update_connect_params)
  return -1;
 return VAR_0->driver->update_connect_params(VAR_0->drv_priv, VAR_1,
          VAR_2);
}
