
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_priv_interface {scalar_t__ wpas_registered; int * drv_global_priv; TYPE_1__* driver; int * drv_priv; } ;
struct sockaddr_un {int dummy; } ;
struct TYPE_2__ {int (* global_deinit ) (int *) ;int (* deinit ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct wpa_priv_interface *VAR_0,
        struct sockaddr_un *VAR_1)
{
 if (VAR_0->drv_priv) {
  if (VAR_0->driver->deinit)
   VAR_0->driver->deinit(VAR_0->drv_priv);
  VAR_0->drv_priv = ((void*)0);
  if (VAR_0->drv_global_priv) {
   VAR_0->driver->global_deinit(VAR_0->drv_global_priv);
   VAR_0->drv_global_priv = ((void*)0);
  }
  VAR_0->wpas_registered = 0;
 }
}
