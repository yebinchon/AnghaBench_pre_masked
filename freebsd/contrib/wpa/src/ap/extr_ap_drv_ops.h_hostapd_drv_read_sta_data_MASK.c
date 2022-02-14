
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct hostap_sta_driver_data {int dummy; } ;
struct TYPE_2__ {int (* read_sta_data ) (int ,struct hostap_sta_driver_data*,int const*) ;} ;


 int FUNC_0 (int ,struct hostap_sta_driver_data*,int const*) ;

__attribute__((used)) static inline int FUNC_1(
 struct hostapd_data *VAR_0, struct hostap_sta_driver_data *VAR_1,
 const u8 *VAR_2)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->read_sta_data == ((void*)0))
  return -1;
 return VAR_0->driver->read_sta_data(VAR_0->drv_priv, VAR_1, VAR_2);
}
