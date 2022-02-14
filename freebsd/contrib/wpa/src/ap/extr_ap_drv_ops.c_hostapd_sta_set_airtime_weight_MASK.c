
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* sta_set_airtime_weight ) (int ,int const*,unsigned int) ;} ;


 int FUNC_0 (int ,int const*,unsigned int) ;

int FUNC_1(struct hostapd_data *VAR_0, const u8 *VAR_1,
       unsigned int VAR_2)
{
 if (!VAR_0->driver || !VAR_0->driver->sta_set_airtime_weight)
  return 0;
 return VAR_0->driver->sta_set_airtime_weight(VAR_0->drv_priv, VAR_1,
          VAR_2);
}
