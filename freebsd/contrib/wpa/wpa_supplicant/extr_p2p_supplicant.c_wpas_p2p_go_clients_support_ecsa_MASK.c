
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* ap_iface; } ;
struct TYPE_2__ {int * bss; } ;


 int FUNC_0 (int ,int ,int*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_1)
{
 int VAR_2 = 1;

 FUNC_0(VAR_1->ap_iface->bss[0], VAR_0,
   &VAR_2);

 return VAR_2;
}
