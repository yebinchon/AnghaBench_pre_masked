
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; TYPE_2__* interfaces; struct hostapd_data** bss; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_4__ {scalar_t__ (* ctrl_iface_init ) (struct hostapd_data*) ;} ;
struct TYPE_3__ {int iface; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct hostapd_iface *VAR_1)
{
 size_t VAR_2;

 if (!VAR_1->interfaces || !VAR_1->interfaces->ctrl_iface_init)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_bss; VAR_2++) {
  struct hostapd_data *VAR_3 = VAR_1->bss[VAR_2];
  if (VAR_1->interfaces->ctrl_iface_init(VAR_3)) {
   FUNC_1(VAR_0,
       "Failed to setup control interface for %s",
       VAR_3->conf->iface);
   return -1;
  }
 }

 return 0;
}
