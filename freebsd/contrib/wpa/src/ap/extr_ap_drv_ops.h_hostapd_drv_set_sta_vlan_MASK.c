
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_sta_vlan ) (int ,int const*,char const*,int) ;} ;


 int FUNC_0 (int ,int const*,char const*,int) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0,
        struct hostapd_data *VAR_1,
        const u8 *VAR_2, int VAR_3)
{
 if (VAR_1->driver == ((void*)0) || VAR_1->driver->set_sta_vlan == ((void*)0))
  return 0;
 return VAR_1->driver->set_sta_vlan(VAR_1->drv_priv, VAR_2, VAR_0,
       VAR_3);
}
