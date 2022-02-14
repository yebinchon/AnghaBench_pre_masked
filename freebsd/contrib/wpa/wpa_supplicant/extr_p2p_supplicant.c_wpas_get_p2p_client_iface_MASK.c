
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int go_dev_addr; struct wpa_ssid* current_ssid; struct wpa_supplicant* next; TYPE_1__* global; } ;
struct wpa_ssid {scalar_t__ mode; int p2p_group; } ;
struct TYPE_2__ {struct wpa_supplicant* ifaces; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;

struct wpa_supplicant * FUNC_1(struct wpa_supplicant *VAR_2,
        const u8 *VAR_3)
{
 for (VAR_2 = VAR_2->global->ifaces; VAR_2; VAR_2 = VAR_2->next) {
  struct wpa_ssid *VAR_4 = VAR_2->current_ssid;
  if (VAR_4 && (VAR_4->mode != VAR_1 || !VAR_4->p2p_group))
   continue;
  if (FUNC_0(VAR_2->go_dev_addr, VAR_3, VAR_0) == 0)
   return VAR_2;
 }

 return ((void*)0);
}
