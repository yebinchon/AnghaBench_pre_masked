
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ last_scan_res_used; int blacklist_cleared; int countermeasures; scalar_t__ blacklist; TYPE_1__* conf; struct wpa_ssid* next_ssid; int * last_scan_res; } ;
struct wpa_ssid {scalar_t__ priority; int ext_psk; int passphrase; int psk_set; scalar_t__ mem_only_psk; struct wpa_ssid* next; } ;
struct wpa_bss {int dummy; } ;
struct TYPE_2__ {int num_prio; struct wpa_ssid** pssid; struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;
 char* FUNC_2 (int ,int *,char const**) ;
 struct wpa_bss* FUNC_3 (struct wpa_supplicant*,struct wpa_ssid*,struct wpa_ssid**,int) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpa_ssid*,int ,int *) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpa_ssid*,char const*,char const*) ;

struct wpa_bss * FUNC_6(struct wpa_supplicant *VAR_2,
          struct wpa_ssid **VAR_3)
{
 struct wpa_bss *VAR_4 = ((void*)0);
 int VAR_5;
 struct wpa_ssid *VAR_6 = ((void*)0);
 struct wpa_ssid *VAR_7;

 if (VAR_2->last_scan_res == ((void*)0) ||
     VAR_2->last_scan_res_used == 0)
  return ((void*)0);

 if (VAR_2->next_ssid) {

  for (VAR_7 = VAR_2->conf->ssid; VAR_7; VAR_7 = VAR_7->next) {
   if (VAR_7 == VAR_2->next_ssid)
    break;
  }
  VAR_6 = VAR_7;
  VAR_2->next_ssid = ((void*)0);
 }

 while (VAR_4 == ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_2->conf->num_prio; VAR_5++) {
   if (VAR_6 && VAR_6->priority ==
       VAR_2->conf->pssid[VAR_5]->priority) {
    VAR_4 = FUNC_3(
     VAR_2, VAR_6, VAR_3, 1);
    if (VAR_4)
     break;
   }
   VAR_4 = FUNC_3(
    VAR_2, VAR_2->conf->pssid[VAR_5],
    VAR_3, 0);
   if (VAR_4)
    break;
  }

  if (VAR_4 == ((void*)0) && VAR_2->blacklist &&
      !VAR_2->countermeasures) {
   FUNC_1(VAR_2, VAR_0, "No APs found - clear "
    "blacklist and try again");
   FUNC_0(VAR_2);
   VAR_2->blacklist_cleared++;
  } else if (VAR_4 == ((void*)0))
   break;
 }

 VAR_7 = *VAR_3;
 if (VAR_4 && VAR_7 && VAR_7->mem_only_psk && !VAR_7->psk_set &&
     !VAR_7->passphrase && !VAR_7->ext_psk) {
  const char *VAR_8, *VAR_9 = ((void*)0);

  FUNC_1(VAR_2, VAR_0,
   "PSK/passphrase not yet available for the selected network");

  FUNC_4(VAR_2, VAR_7,
         VAR_1, ((void*)0));

  VAR_8 = FUNC_2(
   VAR_1, ((void*)0), &VAR_9);
  if (VAR_8 == ((void*)0))
   return ((void*)0);

  FUNC_5(VAR_2, VAR_7, VAR_8, VAR_9);

  VAR_4 = ((void*)0);
 }

 return VAR_4;
}
