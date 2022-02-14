
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transmit_sa {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* disable_transmit_sa ) (int ,struct transmit_sa*) ;} ;


 int FUNC_0 (int ,struct transmit_sa*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct transmit_sa *VAR_1)
{
 struct hostapd_data *VAR_2 = VAR_0;

 if (!VAR_2->driver->disable_transmit_sa)
  return -1;
 return VAR_2->driver->disable_transmit_sa(VAR_2->drv_priv, VAR_1);
}
