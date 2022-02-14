
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int ifname; struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;

struct wpa_supplicant * FUNC_1(struct wpa_global *VAR_0,
       const char *VAR_1)
{
 struct wpa_supplicant *VAR_2;

 for (VAR_2 = VAR_0->ifaces; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0(VAR_2->ifname, VAR_1) == 0)
   return VAR_2;
 }
 return ((void*)0);
}
