
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_radius_acl_expire ) (int ,int const*) ;} ;


 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static inline int FUNC_1(struct hostapd_data *VAR_0,
          const u8 *VAR_1)
{
 if (VAR_0->driver == ((void*)0) ||
     VAR_0->driver->set_radius_acl_expire == ((void*)0))
  return 0;
 return VAR_0->driver->set_radius_acl_expire(VAR_0->drv_priv, VAR_1);
}
