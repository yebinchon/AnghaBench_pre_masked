
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpa_driver_ops {int dummy; } ;
struct hostapd_iface {int driver_ap_teardown; int drv_flags; size_t num_bss; struct hostapd_data** bss; TYPE_2__* conf; } ;
struct hostapd_data {TYPE_3__* conf; int * drv_priv; struct wpa_driver_ops* driver; int msg_ctx; } ;
struct TYPE_6__ {int iface; } ;
struct TYPE_5__ {TYPE_1__** bss; } ;
struct TYPE_4__ {int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_data*) ;
 int FUNC_2 (struct hostapd_iface*) ;
 int FUNC_3 (struct wpa_driver_ops const*,void*,struct hostapd_iface*) ;
 int FUNC_4 (struct hostapd_data*) ;
 int FUNC_5 (struct hostapd_iface*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;

int FUNC_8(struct hostapd_iface *VAR_5)
{
 size_t VAR_6;
 const struct wpa_driver_ops *VAR_7;
 void *VAR_8;

 if (VAR_5 == ((void*)0))
  return -1;

 if (VAR_5->bss[0]->drv_priv == ((void*)0)) {
  FUNC_7(VAR_3, "Interface %s already disabled",
      VAR_5->conf->bss[0]->iface);
  return -1;
 }

 FUNC_6(VAR_5->bss[0]->msg_ctx, VAR_3, VAR_0);
 VAR_7 = VAR_5->bss[0]->driver;
 VAR_8 = VAR_5->bss[0]->drv_priv;

 VAR_5->driver_ap_teardown =
  !!(VAR_5->drv_flags &
     VAR_4);







 for (VAR_6 = 0; VAR_6 < VAR_5->num_bss; VAR_6++) {
  struct hostapd_data *VAR_9 = VAR_5->bss[VAR_6];
  FUNC_0(VAR_9);
  FUNC_4(VAR_9);
 }

 FUNC_3(VAR_7, VAR_8, VAR_5);




 FUNC_2(VAR_5);

 FUNC_7(VAR_2, "Interface %s disabled",
     VAR_5->bss[0]->conf->iface);
 FUNC_5(VAR_5, VAR_1);
 return 0;
}
