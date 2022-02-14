
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {TYPE_2__** bss; } ;
struct TYPE_4__ {TYPE_1__* conf; } ;
struct TYPE_3__ {int iface; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (int ,char*,int ) ;

int FUNC_2(struct hostapd_iface *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_0, "%s: Unable to setup interface.",
      VAR_1->bss[0]->conf->iface);
  return -1;
 }

 return 0;
}
