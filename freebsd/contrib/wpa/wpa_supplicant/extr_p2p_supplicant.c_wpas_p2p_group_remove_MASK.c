
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ p2p_group_interface; char const* ifname; struct wpa_supplicant* next; TYPE_1__* current_ssid; struct wpa_global* global; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;
struct TYPE_2__ {scalar_t__ p2p_group; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_supplicant*) ;

int FUNC_2(struct wpa_supplicant *VAR_1, const char *VAR_2)
{
 struct wpa_global *VAR_3 = VAR_1->global;
 struct wpa_supplicant *VAR_4 = VAR_1;

 if (FUNC_0(VAR_2, "*") == 0) {
  struct wpa_supplicant *VAR_5;
  VAR_1 = VAR_3->ifaces;
  while (VAR_1) {
   VAR_5 = VAR_1;
   VAR_1 = VAR_1->next;
   if (VAR_5->p2p_group_interface !=
       VAR_0 ||
       (VAR_5->current_ssid &&
        VAR_5->current_ssid->p2p_group))
    FUNC_1(VAR_5, VAR_4);
  }
  return 0;
 }

 for (VAR_1 = VAR_3->ifaces; VAR_1; VAR_1 = VAR_1->next) {
  if (FUNC_0(VAR_1->ifname, VAR_2) == 0)
   break;
 }

 return FUNC_1(VAR_1, VAR_4);
}
