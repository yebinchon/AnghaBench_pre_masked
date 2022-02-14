
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int * drv_priv; TYPE_1__* driver; } ;
typedef enum wpa_driver_if_type { ____Placeholder_wpa_driver_if_type } wpa_driver_if_type ;
struct TYPE_2__ {int (* if_remove ) (int *,int,char const*) ;} ;


 int FUNC_0 (int *,int,char const*) ;

int FUNC_1(struct hostapd_data *VAR_0, enum wpa_driver_if_type VAR_1,
        const char *VAR_2)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->drv_priv == ((void*)0) ||
     VAR_0->driver->if_remove == ((void*)0))
  return -1;
 return VAR_0->driver->if_remove(VAR_0->drv_priv, VAR_1, VAR_2);
}
