
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct external_auth {int dummy; } ;
struct TYPE_2__ {int (* send_external_auth_status ) (int ,struct external_auth*) ;} ;


 int FUNC_0 (int ,struct external_auth*) ;

__attribute__((used)) static inline int
FUNC_1(struct hostapd_data *VAR_0,
          struct external_auth *VAR_1)
{
 if (!VAR_0->driver || !VAR_0->drv_priv ||
     !VAR_0->driver->send_external_auth_status)
  return -1;
 return VAR_0->driver->send_external_auth_status(VAR_0->drv_priv, VAR_1);
}
