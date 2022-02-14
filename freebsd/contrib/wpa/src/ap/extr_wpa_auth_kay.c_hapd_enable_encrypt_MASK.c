
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* enable_encrypt ) (int ,int ) ;} ;
typedef int Boolean ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, Boolean VAR_1)
{
 struct hostapd_data *VAR_2 = VAR_0;

 if (!VAR_2->driver->enable_encrypt)
  return -1;
 return VAR_2->driver->enable_encrypt(VAR_2->drv_priv, VAR_1);
}
