
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* remain_on_channel ) (int ,unsigned int,unsigned int) ;} ;


 int FUNC_0 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
         unsigned int VAR_1,
         unsigned int VAR_2)
{
 if (VAR_0->driver->remain_on_channel)
  return VAR_0->driver->remain_on_channel(VAR_0->drv_priv, VAR_1,
       VAR_2);
 return -1;
}
