
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct wpa_driver_capa {int dummy; } ;
struct TYPE_2__ {int (* get_capa ) (int ,struct wpa_driver_capa*) ;} ;


 int FUNC_0 (int ,struct wpa_driver_capa*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
       struct wpa_driver_capa *VAR_1)
{
 if (VAR_0->driver->get_capa) {
  return VAR_0->driver->get_capa(VAR_0->drv_priv, VAR_1);
 }
 return -1;
}
