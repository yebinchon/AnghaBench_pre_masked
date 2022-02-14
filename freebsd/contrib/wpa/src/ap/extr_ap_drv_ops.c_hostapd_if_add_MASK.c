
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
typedef enum wpa_driver_if_type { ____Placeholder_wpa_driver_if_type } wpa_driver_if_type ;
struct TYPE_2__ {int (* if_add ) (int ,int,char const*,int const*,void*,void**,char*,int *,char const*,int,int) ;} ;


 int FUNC_0 (int ,int,char const*,int const*,void*,void**,char*,int *,char const*,int,int) ;

int FUNC_1(struct hostapd_data *VAR_0, enum wpa_driver_if_type VAR_1,
     const char *VAR_2, const u8 *VAR_3, void *VAR_4,
     void **VAR_5, char *VAR_6, u8 *VAR_7,
     const char *VAR_8, int VAR_9)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->if_add == ((void*)0))
  return -1;
 return VAR_0->driver->if_add(VAR_0->drv_priv, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_8, VAR_9, 1);
}
