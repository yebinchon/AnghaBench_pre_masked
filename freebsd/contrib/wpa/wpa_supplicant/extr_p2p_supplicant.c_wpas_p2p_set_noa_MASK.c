
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* ap_iface; } ;
struct TYPE_2__ {int * bss; } ;


 int FUNC_0 (int ,int ,int,int) ;

int FUNC_1(struct wpa_supplicant *VAR_0, u8 VAR_1, int VAR_2,
       int VAR_3)
{
 if (!VAR_0->ap_iface)
  return -1;
 return FUNC_0(VAR_0->ap_iface->bss[0], VAR_1, VAR_2,
       VAR_3);
}
