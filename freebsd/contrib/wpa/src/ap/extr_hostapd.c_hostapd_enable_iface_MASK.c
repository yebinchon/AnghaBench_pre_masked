
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; TYPE_2__** bss; TYPE_1__* interfaces; TYPE_4__* conf; } ;
struct TYPE_8__ {TYPE_3__** bss; } ;
struct TYPE_7__ {int iface; } ;
struct TYPE_6__ {int * drv_priv; int driver; } ;
struct TYPE_5__ {scalar_t__ (* driver_init ) (struct hostapd_iface*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ,int *,struct hostapd_iface*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (struct hostapd_iface*) ;
 scalar_t__ FUNC_4 (struct hostapd_iface*) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct hostapd_iface *VAR_3)
{
 size_t VAR_4;

 if (VAR_3->bss[0]->drv_priv != ((void*)0)) {
  FUNC_5(VAR_1, "Interface %s already enabled",
      VAR_3->conf->bss[0]->iface);
  return -1;
 }

 FUNC_5(VAR_0, "Enable interface %s",
     VAR_3->conf->bss[0]->iface);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_bss; VAR_4++)
  FUNC_2(VAR_3->conf->bss[VAR_4], 1);
 if (FUNC_0(VAR_3->conf, 1) < 0) {
  FUNC_5(VAR_2, "Invalid configuration - cannot enable");
  return -1;
 }

 if (VAR_3->interfaces == ((void*)0) ||
     VAR_3->interfaces->driver_init == ((void*)0) ||
     VAR_3->interfaces->driver_init(VAR_3))
  return -1;

 if (FUNC_3(VAR_3)) {
  FUNC_1(VAR_3->bss[0]->driver,
          VAR_3->bss[0]->drv_priv,
          VAR_3);
  return -1;
 }

 return 0;
}
