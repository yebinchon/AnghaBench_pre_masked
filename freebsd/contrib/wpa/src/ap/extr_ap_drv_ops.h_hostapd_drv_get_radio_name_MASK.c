
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int * drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {char const* (* get_radio_name ) (int *) ;} ;


 char const* FUNC_0 (int *) ;

__attribute__((used)) static inline const char * FUNC_1(struct hostapd_data *VAR_0)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->drv_priv == ((void*)0) ||
     VAR_0->driver->get_radio_name == ((void*)0))
  return ((void*)0);
 return VAR_0->driver->get_radio_name(VAR_0->drv_priv);
}
