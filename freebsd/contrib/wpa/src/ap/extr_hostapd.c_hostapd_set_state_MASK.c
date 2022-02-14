
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {int state; TYPE_2__* conf; } ;
typedef enum hostapd_iface_state { ____Placeholder_hostapd_iface_state } hostapd_iface_state ;
struct TYPE_4__ {TYPE_1__** bss; } ;
struct TYPE_3__ {char* iface; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int ,int ) ;

void FUNC_2(struct hostapd_iface *VAR_1, enum hostapd_iface_state VAR_2)
{
 FUNC_1(VAR_0, "%s: interface state %s->%s",
     VAR_1->conf ? VAR_1->conf->bss[0]->iface : "N/A",
     FUNC_0(VAR_1->state), FUNC_0(VAR_2));
 VAR_1->state = VAR_2;
}
