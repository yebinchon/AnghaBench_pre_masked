
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sta_info {int flags; scalar_t__ auth_alg; TYPE_3__* eapol_sm; int addr; int wpa_sm; } ;
struct rsn_pmksa_cache_entry {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_8__ {void* reAuthenticate; scalar_t__ eap; void* authFail; void* authSuccess; void* be_auth_state; void* auth_pae_state; TYPE_2__* eap_if; void* keyRun; void* portValid; int flags; } ;
struct TYPE_7__ {void* eapKeyAvailable; void* portEnabled; } ;
struct TYPE_6__ {scalar_t__ wps_state; int ieee802_1x; int osen; scalar_t__ wpa; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct hostapd_data*,int ,int ,int ,char*) ;
 TYPE_3__* FUNC_4 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_5 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_6 (struct hostapd_data*,struct rsn_pmksa_cache_entry*,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 struct rsn_pmksa_cache_entry* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;

void FUNC_12(struct hostapd_data *VAR_18, struct sta_info *VAR_19)
{
 struct rsn_pmksa_cache_entry *VAR_20;
 int VAR_21 = 1;
 int VAR_22 = 0;
 int VAR_23;
 if (!VAR_22 && !VAR_18->conf->ieee802_1x && !VAR_18->conf->osen) {
  FUNC_11(VAR_7, "IEEE 802.1X: Ignore STA - "
      "802.1X not enabled or forced for WPS");




  FUNC_5(VAR_18, VAR_19);
  return;
 }

 VAR_23 = FUNC_9(VAR_19->wpa_sm);
 if (VAR_23 != -1 &&
     (FUNC_10(VAR_23) || VAR_23 == VAR_17 ||
      VAR_23 == VAR_16)) {
  FUNC_11(VAR_7, "IEEE 802.1X: Ignore STA - using PSK");




  FUNC_5(VAR_18, VAR_19);
  return;
 }

 if (VAR_19->eapol_sm == ((void*)0)) {
  FUNC_3(VAR_18, VAR_19->addr, VAR_6,
          VAR_4, "start authentication");
  VAR_19->eapol_sm = FUNC_4(VAR_18, VAR_19);
  if (VAR_19->eapol_sm == ((void*)0)) {
   FUNC_3(VAR_18, VAR_19->addr,
           VAR_6,
           VAR_5,
           "failed to allocate state machine");
   return;
  }
  VAR_21 = 0;
 }
 VAR_19->eapol_sm->eap_if->portEnabled = VAR_8;
 VAR_20 = FUNC_8(VAR_19->wpa_sm);
 if (VAR_20) {
  FUNC_3(VAR_18, VAR_19->addr, VAR_6,
          VAR_4,
          "PMK from PMKSA cache - skip IEEE 802.1X/EAP");


  VAR_19->eapol_sm->keyRun = VAR_8;
  VAR_19->eapol_sm->eap_if->eapKeyAvailable = VAR_8;
  VAR_19->eapol_sm->auth_pae_state = VAR_0;
  VAR_19->eapol_sm->be_auth_state = VAR_1;
  VAR_19->eapol_sm->authSuccess = VAR_8;
  VAR_19->eapol_sm->authFail = VAR_3;
  if (VAR_19->eapol_sm->eap)
   FUNC_1(VAR_19->eapol_sm->eap);
  FUNC_6(VAR_18, VAR_20, VAR_19->eapol_sm);
  FUNC_0(VAR_18, VAR_19);
 } else {
  if (VAR_21) {





   VAR_19->eapol_sm->reAuthenticate = VAR_8;
  }
  FUNC_2(VAR_19->eapol_sm);
 }
}
