
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; int * bss; TYPE_2__* conf; } ;
struct TYPE_4__ {TYPE_1__** bss; } ;
struct TYPE_3__ {int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,...) ;

int FUNC_5(struct hostapd_iface *VAR_2)
{
 size_t VAR_3;

 FUNC_4(VAR_0, "Reload interface %s",
     VAR_2->conf->bss[0]->iface);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_bss; VAR_3++)
  FUNC_3(VAR_2->conf->bss[VAR_3], 1);
 if (FUNC_1(VAR_2->conf, 1) < 0) {
  FUNC_4(VAR_1, "Updated configuration is invalid");
  return -1;
 }
 FUNC_0(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_bss; VAR_3++)
  FUNC_2(VAR_2->bss[VAR_3]);

 return 0;
}
