
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ dbus_new_path; struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;


 scalar_t__ FUNC_0 (scalar_t__,char const*) ;

__attribute__((used)) static struct wpa_supplicant * FUNC_1(
 struct wpa_global *VAR_0, const char *VAR_1)
{
 struct wpa_supplicant *VAR_2;

 for (VAR_2 = VAR_0->ifaces; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->dbus_new_path &&
      FUNC_0(VAR_2->dbus_new_path, VAR_1) == 0)
   return VAR_2;
 }
 return ((void*)0);
}
