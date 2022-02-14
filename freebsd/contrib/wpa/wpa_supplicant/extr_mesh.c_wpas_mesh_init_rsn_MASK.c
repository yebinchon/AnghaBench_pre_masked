
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpa_supplicant {int mesh_rsn; TYPE_1__* conf; struct wpa_ssid* current_ssid; struct hostapd_iface* ifmsh; } ;
struct wpa_ssid {char* sae_password; char* passphrase; int key_mgmt; int proto; } ;
struct hostapd_iface {int mconf; struct hostapd_data** bss; } ;
struct hostapd_data {TYPE_3__* conf; } ;
typedef int default_groups ;
struct TYPE_5__ {int wpa_passphrase; } ;
struct TYPE_6__ {TYPE_2__ ssid; int sae_groups; int wpa_key_mgmt; int wpa; } ;
struct TYPE_4__ {scalar_t__* sae_groups; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,size_t) ;
 int FUNC_1 (struct wpa_supplicant*,int ) ;
 int FUNC_2 (int*,int) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct hostapd_data*,struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_6(struct wpa_supplicant *VAR_1)
{
 struct hostapd_iface *VAR_2 = VAR_1->ifmsh;
 struct wpa_ssid *VAR_3 = VAR_1->current_ssid;
 struct hostapd_data *VAR_4 = VAR_2->bss[0];
 static int VAR_5[] = { 19, 20, 21, 25, 26, -1 };
 const char *VAR_6;
 size_t VAR_7;

 VAR_6 = VAR_3->sae_password;
 if (!VAR_6)
  VAR_6 = VAR_3->passphrase;
 if (!VAR_6) {
  FUNC_4(VAR_0,
      "mesh: Passphrase for SAE not configured");
  return -1;
 }

 VAR_4->conf->wpa = VAR_3->proto;
 VAR_4->conf->wpa_key_mgmt = VAR_3->key_mgmt;

 if (VAR_1->conf->sae_groups && VAR_1->conf->sae_groups[0] > 0) {
  FUNC_5(VAR_4, VAR_1);
 } else {
  VAR_4->conf->sae_groups = FUNC_2(VAR_5,
        sizeof(VAR_5));
  if (!VAR_4->conf->sae_groups)
   return -1;
 }

 VAR_7 = FUNC_3(VAR_6);
 VAR_4->conf->ssid.wpa_passphrase = FUNC_0(VAR_6, VAR_7);

 VAR_1->mesh_rsn = FUNC_1(VAR_1, VAR_2->mconf);
 return !VAR_1->mesh_rsn ? -1 : 0;
}
