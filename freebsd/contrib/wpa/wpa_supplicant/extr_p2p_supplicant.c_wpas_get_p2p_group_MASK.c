
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {struct wpa_ssid* current_ssid; TYPE_2__* conf; struct wpa_supplicant* next; TYPE_1__* global; } ;
struct wpa_ssid {scalar_t__ disabled; size_t ssid_len; scalar_t__ mode; int ssid; int p2p_group; struct wpa_ssid* next; } ;
struct TYPE_4__ {struct wpa_ssid* ssid; } ;
struct TYPE_3__ {struct wpa_supplicant* ifaces; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ,size_t) ;

__attribute__((used)) static struct wpa_supplicant * FUNC_1(struct wpa_supplicant *VAR_1,
        const u8 *VAR_2,
        size_t VAR_3, int *VAR_4)
{
 struct wpa_ssid *VAR_5;

 for (VAR_1 = VAR_1->global->ifaces; VAR_1; VAR_1 = VAR_1->next) {
  for (VAR_5 = VAR_1->conf->ssid; VAR_5; VAR_5 = VAR_5->next) {
   if (VAR_5->disabled != 0 || !VAR_5->p2p_group ||
       VAR_5->ssid_len != VAR_3 ||
       FUNC_0(VAR_2, VAR_5->ssid, VAR_3) != 0)
    continue;
   if (VAR_5->mode == VAR_0 &&
       VAR_5 != VAR_1->current_ssid)
    continue;
   if (VAR_4)
    *VAR_4 = VAR_5->mode == VAR_0;
   return VAR_1;
  }
 }

 return ((void*)0);
}
