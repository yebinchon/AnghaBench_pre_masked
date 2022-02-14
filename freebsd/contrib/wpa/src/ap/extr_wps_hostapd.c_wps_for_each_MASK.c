
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_for_each_data {int (* func ) (struct hostapd_data*,int ) ;int ctx; struct hostapd_data* calling_hapd; } ;
struct hostapd_iface {size_t num_bss; struct hostapd_data** bss; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ wps_independent; } ;


 int FUNC_0 (struct hostapd_data*,int ) ;

__attribute__((used)) static int FUNC_1(struct hostapd_iface *VAR_0, void *VAR_1)
{
 struct wps_for_each_data *VAR_2 = VAR_1;
 size_t VAR_3;

 if (VAR_0 == ((void*)0))
  return 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_bss; VAR_3++) {
  struct hostapd_data *VAR_4 = VAR_0->bss[VAR_3];
  int VAR_5;

  if (VAR_4 != VAR_2->calling_hapd &&
      (VAR_4->conf->wps_independent ||
       VAR_2->calling_hapd->conf->wps_independent))
   continue;

  VAR_5 = VAR_2->func(VAR_4, VAR_2->ctx);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
