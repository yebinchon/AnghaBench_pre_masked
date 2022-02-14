
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int p2p_group; struct wpa_supplicant* next; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpa_supplicant* ifaces; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wpa_supplicant*) ;

__attribute__((used)) static struct wpa_supplicant *
FUNC_2(struct wpa_supplicant *VAR_0)
{
 struct wpa_supplicant *VAR_1 = ((void*)0);

 if (!VAR_0)
  return ((void*)0);

 for (VAR_0 = VAR_0->global->ifaces; VAR_0; VAR_0 = VAR_0->next) {
  if (!FUNC_1(VAR_0))
   continue;


  if (FUNC_0(VAR_0->p2p_group))
   return VAR_0;
  VAR_1 = VAR_0;
 }


 return VAR_1;
}
