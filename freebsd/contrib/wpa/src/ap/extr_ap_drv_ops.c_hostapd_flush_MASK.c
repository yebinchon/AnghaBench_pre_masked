
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* flush ) (int ) ;} ;


 int FUNC_0 (int ) ;

int FUNC_1(struct hostapd_data *VAR_0)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->flush == ((void*)0))
  return 0;
 return VAR_0->driver->flush(VAR_0->drv_priv);
}
