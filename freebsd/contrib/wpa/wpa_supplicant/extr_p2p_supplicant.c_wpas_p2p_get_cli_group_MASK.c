
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {struct wpa_supplicant* next; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpa_supplicant* ifaces; } ;


 scalar_t__ FUNC_0 (struct wpa_supplicant*) ;

__attribute__((used)) static struct wpa_supplicant *
FUNC_1(struct wpa_supplicant *VAR_0)
{
 for (VAR_0 = VAR_0->global->ifaces; VAR_0; VAR_0 = VAR_0->next) {
  if (FUNC_0(VAR_0))
   return VAR_0;
 }

 return ((void*)0);
}
