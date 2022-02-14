
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int * drv_priv; TYPE_1__* driver; } ;
struct csa_settings {int dummy; } ;
struct TYPE_2__ {int (* switch_channel ) (int *,struct csa_settings*) ;} ;


 int FUNC_0 (int *,struct csa_settings*) ;

__attribute__((used)) static inline int FUNC_1(struct hostapd_data *VAR_0,
          struct csa_settings *VAR_1)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->switch_channel == ((void*)0) ||
     VAR_0->drv_priv == ((void*)0))
  return -1;

 return VAR_0->driver->switch_channel(VAR_0->drv_priv, VAR_1);
}
