
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* send_mlme ) (int ,void const*,size_t,int,int ,int *,int ) ;} ;


 int FUNC_0 (int ,void const*,size_t,int,int ,int *,int ) ;

int FUNC_1(struct hostapd_data *VAR_0,
     const void *VAR_1, size_t VAR_2, int VAR_3)
{
 if (!VAR_0->driver || !VAR_0->driver->send_mlme || !VAR_0->drv_priv)
  return 0;
 return VAR_0->driver->send_mlme(VAR_0->drv_priv, VAR_1, VAR_2, VAR_3, 0,
           ((void*)0), 0);
}
