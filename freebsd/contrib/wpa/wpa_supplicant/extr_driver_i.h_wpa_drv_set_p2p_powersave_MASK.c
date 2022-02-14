
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_p2p_powersave ) (int ,int,int,int) ;} ;


 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
         int VAR_1, int VAR_2,
         int VAR_3)
{
 if (!VAR_0->driver->set_p2p_powersave)
  return -1;
 return VAR_0->driver->set_p2p_powersave(VAR_0->drv_priv, VAR_1,
      VAR_2, VAR_3);
}
