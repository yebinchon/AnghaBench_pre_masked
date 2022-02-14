
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int bssid; int drv_priv; TYPE_1__* driver; } ;
struct hostap_sta_driver_data {int dummy; } ;
struct TYPE_2__ {int (* read_sta_data ) (int ,struct hostap_sta_driver_data*,int ) ;} ;


 int FUNC_0 (int ,struct hostap_sta_driver_data*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
          struct hostap_sta_driver_data *VAR_1)
{
 if (VAR_0->driver->read_sta_data)
  return VAR_0->driver->read_sta_data(VAR_0->drv_priv, VAR_1,
          VAR_0->bssid);
 return -1;
}
