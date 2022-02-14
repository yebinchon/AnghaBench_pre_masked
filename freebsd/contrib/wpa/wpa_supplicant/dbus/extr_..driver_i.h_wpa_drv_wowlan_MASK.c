
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct wowlan_triggers {int dummy; } ;
struct TYPE_2__ {int (* set_wowlan ) (int ,struct wowlan_triggers const*) ;} ;


 int FUNC_0 (int ,struct wowlan_triggers const*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
     const struct wowlan_triggers *VAR_1)
{
 if (!VAR_0->driver->set_wowlan)
  return -1;
 return VAR_0->driver->set_wowlan(VAR_0->drv_priv, VAR_1);
}
