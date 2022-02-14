
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* add_sta_node ) (int ,int const*,int ) ;} ;


 int FUNC_0 (int ,int const*,int ) ;

int FUNC_1(struct hostapd_data *VAR_0, const u8 *VAR_1,
    u16 VAR_2)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->add_sta_node == ((void*)0))
  return 0;
 return VAR_0->driver->add_sta_node(VAR_0->drv_priv, VAR_1, VAR_2);
}
