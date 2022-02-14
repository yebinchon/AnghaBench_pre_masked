
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_supplicant {int own_addr; int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* sta_deauth ) (int ,int ,int const*,int ) ;} ;


 int FUNC_0 (int ,int ,int const*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
         const u8 *VAR_1, u16 VAR_2)
{
 if (VAR_0->driver->sta_deauth) {
  return VAR_0->driver->sta_deauth(VAR_0->drv_priv,
       VAR_0->own_addr, VAR_1,
       VAR_2);
 }
 return -1;
}
