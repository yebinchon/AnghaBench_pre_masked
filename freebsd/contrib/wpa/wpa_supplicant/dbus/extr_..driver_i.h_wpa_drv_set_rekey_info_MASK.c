
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_rekey_info ) (int ,int const*,size_t,int const*,size_t,int const*) ;} ;


 int FUNC_0 (int ,int const*,size_t,int const*,size_t,int const*) ;

__attribute__((used)) static inline void FUNC_1(struct wpa_supplicant *VAR_0,
       const u8 *VAR_1, size_t VAR_2,
       const u8 *VAR_3, size_t VAR_4,
       const u8 *VAR_5)
{
 if (!VAR_0->driver->set_rekey_info)
  return;
 VAR_0->driver->set_rekey_info(VAR_0->drv_priv, VAR_1, VAR_2,
          VAR_3, VAR_4, VAR_5);
}
