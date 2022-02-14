
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;
struct TYPE_2__ {int (* set_key ) (char const*,int ,int,int const*,int,int,int const*,size_t,int const*,size_t) ;} ;


 int FUNC_0 (char const*,int ,int,int const*,int,int,int const*,size_t,int const*,size_t) ;

int FUNC_1(const char *VAR_0, struct hostapd_data *VAR_1,
   enum wpa_alg VAR_2, const u8 *VAR_3,
   int VAR_4, int VAR_5,
   const u8 *VAR_6, size_t VAR_7,
   const u8 *VAR_8, size_t VAR_9)
{
 if (VAR_1->driver == ((void*)0) || VAR_1->driver->set_key == ((void*)0))
  return 0;
 return VAR_1->driver->set_key(VAR_0, VAR_1->drv_priv, VAR_2, VAR_3,
         VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_9);
}
