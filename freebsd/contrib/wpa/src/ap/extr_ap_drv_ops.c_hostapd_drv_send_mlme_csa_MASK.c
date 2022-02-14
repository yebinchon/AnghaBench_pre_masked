
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* send_mlme ) (int ,void const*,size_t,int,int ,int const*,size_t) ;} ;


 int FUNC_0 (int ,void const*,size_t,int,int ,int const*,size_t) ;

int FUNC_1(struct hostapd_data *VAR_0,
         const void *VAR_1, size_t VAR_2, int VAR_3,
         const u16 *VAR_4, size_t VAR_5)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->send_mlme == ((void*)0))
  return 0;
 return VAR_0->driver->send_mlme(VAR_0->drv_priv, VAR_1, VAR_2, VAR_3, 0,
           VAR_4, VAR_5);
}
