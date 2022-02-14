
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hostapd_data {int own_addr; int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* sta_assoc ) (int ,int ,int const*,int,int ,int const*,size_t) ;} ;


 int FUNC_0 (int ,int ,int const*,int,int ,int const*,size_t) ;

int FUNC_1(struct hostapd_data *VAR_0, const u8 *VAR_1,
        int VAR_2, u16 VAR_3, const u8 *VAR_4, size_t VAR_5)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->sta_assoc == ((void*)0))
  return 0;
 return VAR_0->driver->sta_assoc(VAR_0->drv_priv, VAR_0->own_addr, VAR_1,
           VAR_2, VAR_3, VAR_4, VAR_5);
}
