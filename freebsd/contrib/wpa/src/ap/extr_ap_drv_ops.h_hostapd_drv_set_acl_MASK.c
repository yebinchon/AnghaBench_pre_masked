
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct hostapd_acl_params {int dummy; } ;
struct TYPE_2__ {int (* set_acl ) (int ,struct hostapd_acl_params*) ;} ;


 int FUNC_0 (int ,struct hostapd_acl_params*) ;

__attribute__((used)) static inline int FUNC_1(struct hostapd_data *VAR_0,
          struct hostapd_acl_params *VAR_1)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->set_acl == ((void*)0))
  return 0;
 return VAR_0->driver->set_acl(VAR_0->drv_priv, VAR_1);
}
