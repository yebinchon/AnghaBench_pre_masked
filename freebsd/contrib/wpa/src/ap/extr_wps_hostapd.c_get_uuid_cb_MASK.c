
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_iface {size_t num_bss; struct hostapd_data** bss; } ;
struct hostapd_data {TYPE_2__* wps; TYPE_1__* conf; } ;
struct TYPE_4__ {int * uuid; } ;
struct TYPE_3__ {int wps_independent; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct hostapd_iface *VAR_0, void *VAR_1)
{
 const u8 **VAR_2 = VAR_1;
 size_t VAR_3;

 if (VAR_0 == ((void*)0))
  return 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_bss; VAR_3++) {
  struct hostapd_data *VAR_4 = VAR_0->bss[VAR_3];
  if (VAR_4->wps && !VAR_4->conf->wps_independent &&
      !FUNC_0(VAR_4->wps->uuid)) {
   *VAR_2 = VAR_4->wps->uuid;
   return 1;
  }
 }

 return 0;
}
