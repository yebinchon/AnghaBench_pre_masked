
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {TYPE_2__* ap_iface; } ;
struct TYPE_4__ {TYPE_1__** bss; } ;
struct TYPE_3__ {int * p2p_group; } ;


 int FUNC_0 (struct wpa_supplicant*) ;

void FUNC_1(struct wpa_supplicant *VAR_0)
{
 if (VAR_0->ap_iface->bss)
  VAR_0->ap_iface->bss[0]->p2p_group = ((void*)0);
 FUNC_0(VAR_0);
}
