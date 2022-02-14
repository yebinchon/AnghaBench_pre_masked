
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_priv_interface {int wpas_registered; int * drv_priv; TYPE_1__* driver; int drv_addr_len; int drv_addr; int ifname; int driver_name; int * drv_global_priv; int ctx; int ** l2; } ;
struct sockaddr_un {int dummy; } ;
typedef int socklen_t ;
struct TYPE_2__ {scalar_t__ (* set_param ) (int *,int *) ;int * (* init ) (struct wpa_priv_interface*,int ) ;int * (* init2 ) (struct wpa_priv_interface*,int ,int *) ;int * (* global_init ) (int ) ;int (* global_deinit ) (int *) ;int (* deinit ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sockaddr_un*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (struct wpa_priv_interface*,int ,int *) ;
 int * FUNC_6 (struct wpa_priv_interface*,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static void FUNC_9(struct wpa_priv_interface *VAR_4,
      struct sockaddr_un *VAR_5, socklen_t VAR_6)
{
 int VAR_7;

 if (VAR_4->drv_priv) {
  FUNC_8(VAR_0, "Cleaning up forgotten driver instance");
  if (VAR_4->driver->deinit)
   VAR_4->driver->deinit(VAR_4->drv_priv);
  VAR_4->drv_priv = ((void*)0);
  if (VAR_4->drv_global_priv) {
   VAR_4->driver->global_deinit(VAR_4->drv_global_priv);
   VAR_4->drv_global_priv = ((void*)0);
  }
  VAR_4->wpas_registered = 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_4->l2[VAR_7]) {
   FUNC_8(VAR_0,
       "Cleaning up forgotten l2_packet instance");
   FUNC_0(VAR_4->l2[VAR_7]);
   VAR_4->l2[VAR_7] = ((void*)0);
  }
 }

 if (VAR_4->driver->init2) {
  if (VAR_4->driver->global_init) {
   VAR_4->drv_global_priv =
    VAR_4->driver->global_init(VAR_4->ctx);
   if (!VAR_4->drv_global_priv) {
    FUNC_8(VAR_2,
        "Failed to initialize driver global context");
    return;
   }
  } else {
   VAR_4->drv_global_priv = ((void*)0);
  }
  VAR_4->drv_priv = VAR_4->driver->init2(VAR_4, VAR_4->ifname,
             VAR_4->drv_global_priv);
 } else if (VAR_4->driver->init) {
  VAR_4->drv_priv = VAR_4->driver->init(VAR_4, VAR_4->ifname);
 } else {
  return;
 }
 if (VAR_4->drv_priv == ((void*)0)) {
  FUNC_8(VAR_0, "Failed to initialize driver wrapper");
  return;
 }

 FUNC_8(VAR_0, "Driver wrapper '%s' initialized for interface "
     "'%s'", VAR_4->driver_name, VAR_4->ifname);

 FUNC_1(&VAR_4->drv_addr, VAR_5, VAR_6);
 VAR_4->drv_addr_len = VAR_6;
 VAR_4->wpas_registered = 1;

 if (VAR_4->driver->set_param &&
     VAR_4->driver->set_param(VAR_4->drv_priv, ((void*)0)) < 0) {
  FUNC_8(VAR_1, "Driver interface rejected param");
 }
}
