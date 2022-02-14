
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* suspend ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct wpa_supplicant *VAR_0)
{
 if (VAR_0->driver->suspend)
  VAR_0->driver->suspend(VAR_0->drv_priv);
}
