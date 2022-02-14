
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_priv_interface {scalar_t__ fd; struct wpa_priv_interface* sock_name; struct wpa_priv_interface* driver_name; struct wpa_priv_interface* ifname; scalar_t__* l2; scalar_t__ drv_global_priv; TYPE_1__* driver; scalar_t__ drv_priv; } ;
struct TYPE_2__ {int (* global_deinit ) (scalar_t__) ;int (* deinit ) (scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wpa_priv_interface*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct wpa_priv_interface*) ;

__attribute__((used)) static void FUNC_7(struct wpa_priv_interface *VAR_1)
{
 int VAR_2;

 if (VAR_1->drv_priv) {
  if (VAR_1->driver->deinit)
   VAR_1->driver->deinit(VAR_1->drv_priv);
  if (VAR_1->drv_global_priv)
   VAR_1->driver->global_deinit(VAR_1->drv_global_priv);
 }

 if (VAR_1->fd >= 0) {
  FUNC_1(VAR_1->fd);
  FUNC_0(VAR_1->fd);
  FUNC_6(VAR_1->sock_name);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->l2[VAR_2])
   FUNC_2(VAR_1->l2[VAR_2]);
 }

 FUNC_3(VAR_1->ifname);
 FUNC_3(VAR_1->driver_name);
 FUNC_3(VAR_1->sock_name);
 FUNC_3(VAR_1);
}
