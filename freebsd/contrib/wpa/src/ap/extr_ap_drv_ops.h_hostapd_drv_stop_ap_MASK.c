
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* stop_ap ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct hostapd_data *VAR_0)
{
 if (!VAR_0->driver || !VAR_0->driver->stop_ap || !VAR_0->drv_priv)
  return 0;
 return VAR_0->driver->stop_ap(VAR_0->drv_priv);
}
