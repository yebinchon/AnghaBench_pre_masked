
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* macsec_deinit ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct hostapd_data *VAR_1 = VAR_0;

 if (!VAR_1->driver->macsec_deinit)
  return -1;
 return VAR_1->driver->macsec_deinit(VAR_1->drv_priv);
}
