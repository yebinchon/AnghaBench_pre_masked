
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* disable_fils ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
           int VAR_1)
{
 if (!VAR_0->driver->disable_fils)
  return -1;
 return VAR_0->driver->disable_fils(VAR_0->drv_priv, VAR_1);
}
