
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
typedef enum macsec_cap { ____Placeholder_macsec_cap } macsec_cap ;
struct TYPE_2__ {int (* macsec_get_capability ) (int ,int*) ;} ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, enum macsec_cap *VAR_1)
{
 struct hostapd_data *VAR_2 = VAR_0;

 if (!VAR_2->driver->macsec_get_capability)
  return -1;
 return VAR_2->driver->macsec_get_capability(VAR_2->drv_priv, VAR_1);
}
