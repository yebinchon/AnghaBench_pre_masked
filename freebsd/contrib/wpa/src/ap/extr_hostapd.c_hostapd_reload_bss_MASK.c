
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const u8 ;
struct hostapd_ssid {int ssid_len; int ssid; scalar_t__ ssid_set; TYPE_3__* wpa_psk; scalar_t__ wpa_passphrase; scalar_t__ wpa_passphrase_set; int wpa_psk_set; } ;
struct hostapd_data {TYPE_2__* conf; int * wpa_auth; int radius; TYPE_1__* iconf; int started; } ;
struct TYPE_6__ {int next; } ;
struct TYPE_5__ {scalar_t__ wmm_enabled; int iface; struct hostapd_ssid ssid; scalar_t__ wpa; scalar_t__ osen; scalar_t__ ieee802_1x; int radius; } ;
struct TYPE_4__ {scalar_t__ ieee80211n; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (struct hostapd_data*) ;
 int FUNC_2 (struct hostapd_data*,int ,int) ;
 scalar_t__ FUNC_3 (struct hostapd_data*,int const*,size_t) ;
 int FUNC_4 (struct hostapd_data*,int ) ;
 scalar_t__ FUNC_5 (struct hostapd_data*,int ,int ) ;
 int FUNC_6 (int ,struct hostapd_data*) ;
 int FUNC_7 (struct hostapd_data*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct hostapd_data*) ;
 int FUNC_10 (struct hostapd_data*) ;
 int FUNC_11 (int ,int ) ;
 int const* FUNC_12 (int *,size_t*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,...) ;

__attribute__((used)) static void FUNC_16(struct hostapd_data *VAR_2)
{
 struct hostapd_ssid *VAR_3;

 if (!VAR_2->started)
  return;

 if (VAR_2->conf->wmm_enabled < 0)
  VAR_2->conf->wmm_enabled = VAR_2->iconf->ieee80211n;


 FUNC_11(VAR_2->radius, VAR_2->conf->radius);


 VAR_3 = &VAR_2->conf->ssid;
 if (!VAR_3->wpa_psk_set && VAR_3->wpa_psk && !VAR_3->wpa_psk->next &&
     VAR_3->wpa_passphrase_set && VAR_3->wpa_passphrase) {




  FUNC_0(&VAR_2->conf->ssid.wpa_psk);
 }
 if (FUNC_8(VAR_2->conf)) {
  FUNC_15(VAR_1, "Failed to re-configure WPA PSK "
      "after reloading configuration");
 }

 if (VAR_2->conf->ieee802_1x || VAR_2->conf->wpa)
  FUNC_2(VAR_2, VAR_2->conf->iface, 1);
 else
  FUNC_2(VAR_2, VAR_2->conf->iface, 0);

 if ((VAR_2->conf->wpa || VAR_2->conf->osen) && VAR_2->wpa_auth == ((void*)0)) {
  FUNC_7(VAR_2);
  if (VAR_2->wpa_auth)
   FUNC_14(VAR_2->wpa_auth);
 } else if (VAR_2->conf->wpa) {
  const u8 *VAR_4;
  size_t VAR_5;
  FUNC_1(VAR_2);
  VAR_4 = FUNC_12(VAR_2->wpa_auth, &VAR_5);
  if (FUNC_3(VAR_2, VAR_4, VAR_5))
   FUNC_15(VAR_1, "Failed to configure WPA IE for "
       "the kernel driver.");
 } else if (VAR_2->wpa_auth) {
  FUNC_13(VAR_2->wpa_auth);
  VAR_2->wpa_auth = ((void*)0);
  FUNC_4(VAR_2, 0);
  FUNC_6(VAR_2->conf->iface, VAR_2);
  FUNC_3(VAR_2, (u8 *) "", 0);
 }

 FUNC_10(VAR_2);
 FUNC_9(VAR_2);

 if (VAR_2->conf->ssid.ssid_set &&
     FUNC_5(VAR_2, VAR_2->conf->ssid.ssid,
        VAR_2->conf->ssid.ssid_len)) {
  FUNC_15(VAR_1, "Could not set SSID for kernel driver");

 }
 FUNC_15(VAR_0, "Reconfigured interface %s", VAR_2->conf->iface);
}
