
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_ap_wps_ie ) (int ,int *,int *,int *) ;} ;


 int FUNC_0 (int ,int *,int *,int *) ;

int FUNC_1(struct hostapd_data *VAR_0)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->set_ap_wps_ie == ((void*)0))
  return 0;

 return VAR_0->driver->set_ap_wps_ie(VAR_0->drv_priv, ((void*)0), ((void*)0), ((void*)0));
}
