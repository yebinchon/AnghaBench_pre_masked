
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct wpa_supplicant {scalar_t__ key_mgmt; int drv_flags; int eapol; scalar_t__ current_bss; TYPE_1__* conf; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {scalar_t__ mode; int eapol_flags; scalar_t__ mka_psk_set; int eap; int eap_workaround; } ;
struct eapol_config {int accept_802_1x_keys; int eap_disabled; int wps; int external_sim; int workaround; int fast_reauth; int required_keys; } ;
typedef int eapol_conf ;
struct TYPE_2__ {int external_sim; int fast_reauth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int *,struct eapol_config*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_6 (struct eapol_config*,int ,int) ;
 struct wpabuf* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct wpabuf*) ;
 scalar_t__ FUNC_10 (struct wpabuf*) ;

void FUNC_11(struct wpa_supplicant *VAR_17)
{
}
