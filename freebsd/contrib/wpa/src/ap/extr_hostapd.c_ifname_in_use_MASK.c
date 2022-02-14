
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; struct hostapd_data** bss; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct hapd_interfaces {size_t count; struct hostapd_iface** iface; } ;
struct TYPE_2__ {int iface; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(struct hapd_interfaces *VAR_0, const char *VAR_1)
{
 size_t VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  struct hostapd_iface *VAR_4 = VAR_0->iface[VAR_2];
  for (VAR_3 = 0; VAR_3 < VAR_4->num_bss; VAR_3++) {
   struct hostapd_data *VAR_5 = VAR_4->bss[VAR_3];
   if (FUNC_0(VAR_1, VAR_5->conf->iface) == 0)
    return 1;
  }
 }

 return 0;
}
