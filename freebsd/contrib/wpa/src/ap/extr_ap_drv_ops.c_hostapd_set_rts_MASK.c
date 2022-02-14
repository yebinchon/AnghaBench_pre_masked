
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_rts ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

int FUNC_1(struct hostapd_data *VAR_0, int VAR_1)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->set_rts == ((void*)0))
  return 0;
 return VAR_0->driver->set_rts(VAR_0->drv_priv, VAR_1);
}
