
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_qos_map ) (int ,int const*,int ) ;} ;


 int FUNC_0 (int ,int const*,int ) ;

int FUNC_1(struct hostapd_data *VAR_0,
       const u8 *VAR_1, u8 VAR_2)
{
 if (!VAR_0->driver || !VAR_0->driver->set_qos_map || !VAR_0->drv_priv)
  return 0;
 return VAR_0->driver->set_qos_map(VAR_0->drv_priv, VAR_1,
      VAR_2);
}
