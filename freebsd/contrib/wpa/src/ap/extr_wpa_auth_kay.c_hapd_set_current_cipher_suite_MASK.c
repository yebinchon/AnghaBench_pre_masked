
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_current_cipher_suite ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, u64 VAR_1)
{
 struct hostapd_data *VAR_2 = VAR_0;

 if (!VAR_2->driver->set_current_cipher_suite)
  return -1;
 return VAR_2->driver->set_current_cipher_suite(VAR_2->drv_priv, VAR_1);
}
