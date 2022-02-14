
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int bridge_ifname; int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_4addr_mode ) (int ,int ,int) ;} ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0, int VAR_1)
{
 if (!VAR_0->driver->set_4addr_mode)
  return -1;
 return VAR_0->driver->set_4addr_mode(VAR_0->drv_priv,
          VAR_0->bridge_ifname, VAR_1);
}
