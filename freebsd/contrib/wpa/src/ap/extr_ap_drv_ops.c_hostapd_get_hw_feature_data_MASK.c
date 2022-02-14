
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hostapd_hw_modes {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {struct hostapd_hw_modes* (* get_hw_feature_data ) (int ,int *,int *,int *) ;} ;


 struct hostapd_hw_modes* FUNC_0 (int ,int *,int *,int *) ;

struct hostapd_hw_modes *
FUNC_1(struct hostapd_data *VAR_0, u16 *VAR_1,
       u16 *VAR_2, u8 *VAR_3)
{
 if (VAR_0->driver == ((void*)0) ||
     VAR_0->driver->get_hw_feature_data == ((void*)0))
  return ((void*)0);
 return VAR_0->driver->get_hw_feature_data(VAR_0->drv_priv, VAR_1,
       VAR_2, VAR_3);
}
