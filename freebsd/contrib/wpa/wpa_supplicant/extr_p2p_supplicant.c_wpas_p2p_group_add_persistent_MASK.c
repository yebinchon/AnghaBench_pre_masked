
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int p2p_first_connection_timeout; scalar_t__ p2p_fallback_to_go_neg; TYPE_1__* global; int p2pdev; } ;
struct wpa_ssid {int disabled; int ssid_len; scalar_t__ mode; int * ssid; int passphrase; int * psk; scalar_t__ psk_set; int bssid; } ;
struct wpa_bss {int freq; int last_update; } ;
struct p2p_go_neg_results {int role_go; int ssid_len; int persistent_group; int freq_list; int ssid; int passphrase; int psk; scalar_t__ psk_set; } ;
struct p2p_channels {int dummy; } ;
struct os_reltime {int dummy; } ;
struct TYPE_2__ {int * add_psk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,struct p2p_channels const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct os_reltime*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct os_reltime*,int *,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct p2p_channels const*,int ,int ) ;
 struct wpa_bss* FUNC_10 (struct wpa_supplicant*,int ) ;
 int FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (struct wpa_supplicant*,int *,int,int*) ;
 struct wpa_supplicant* FUNC_13 (struct wpa_supplicant*,int,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_14 (struct wpa_supplicant*,struct p2p_go_neg_results*,int,int,int,int,int,int,struct p2p_channels const*) ;
 int FUNC_15 (struct wpa_supplicant*,int) ;
 int FUNC_16 (struct wpa_supplicant*) ;
 int FUNC_17 (struct wpa_supplicant*,struct wpa_ssid*,int,int,int) ;
 int FUNC_18 (struct wpa_supplicant*,struct p2p_go_neg_results*,int ) ;

int FUNC_19(struct wpa_supplicant *VAR_7,
      struct wpa_ssid *VAR_8, int VAR_9,
      int VAR_10, int VAR_11,
      int VAR_12, int VAR_13,
      int VAR_14, int VAR_15, int VAR_16,
      const struct p2p_channels *VAR_17,
      int VAR_18, int VAR_19)
{
 struct p2p_go_neg_results VAR_20;
 int VAR_21 = 0, VAR_22;

 if (VAR_8->disabled != 2 || VAR_8->ssid == ((void*)0))
  return -1;

 if (FUNC_12(VAR_7, VAR_8->ssid, VAR_8->ssid_len, &VAR_21) &&
     VAR_21 == (VAR_8->mode == VAR_5)) {
  FUNC_11(VAR_0, "P2P: Requested persistent group is "
      "already running");
  if (VAR_21 == 0 &&
      FUNC_0(VAR_6,
      VAR_7->p2pdev, ((void*)0))) {
   FUNC_11(VAR_0,
       "P2P: Reschedule group formation timeout since peer is still trying to invite us");
   FUNC_1(VAR_3, 0,
            VAR_6,
            VAR_7->p2pdev, ((void*)0));
  }
  return 0;
 }

 FUNC_3(VAR_7->global->add_psk);
 VAR_7->global->add_psk = ((void*)0);


 FUNC_16(VAR_7);

 VAR_7->p2p_fallback_to_go_neg = 0;

 if (VAR_8->mode == VAR_5) {
  if (VAR_10 > 0) {
   VAR_22 = FUNC_15(VAR_7, VAR_10);
   if (VAR_22 < 0)
    return -1;
  } else {
   VAR_22 = FUNC_15(VAR_7, VAR_11);
   if (VAR_22 < 0 ||
       (VAR_22 > 0 && !FUNC_2(VAR_7, VAR_17, VAR_22)))
    VAR_22 = 0;
  }
 } else if (VAR_8->mode == VAR_4) {
  VAR_22 = VAR_11;
  if (VAR_22 <= 0 || !FUNC_2(VAR_7, VAR_17, VAR_22)) {
   struct os_reltime VAR_23;
   struct wpa_bss *VAR_24 =
    FUNC_10(VAR_7, VAR_8->bssid);

   FUNC_4(&VAR_23);
   if (VAR_24 &&
       !FUNC_6(&VAR_23, &VAR_24->last_update, 5) &&
       FUNC_2(VAR_7, VAR_17, VAR_24->freq))
    VAR_22 = VAR_24->freq;
   else
    VAR_22 = 0;
  }

  return FUNC_17(VAR_7, VAR_8, VAR_9, VAR_22,
          VAR_19);
 } else {
  return -1;
 }

 if (FUNC_14(VAR_7, &VAR_20, VAR_22, VAR_12,
        VAR_13, VAR_14, VAR_15, VAR_16, VAR_17))
  return -1;

 VAR_20.role_go = 1;
 VAR_20.psk_set = VAR_8->psk_set;
 if (VAR_20.psk_set)
  FUNC_5(VAR_20.psk, VAR_8->psk, sizeof(VAR_20.psk));
 if (VAR_8->passphrase) {
  if (FUNC_8(VAR_8->passphrase) >= sizeof(VAR_20.passphrase)) {
   FUNC_11(VAR_1, "P2P: Invalid passphrase in "
       "persistent group");
   return -1;
  }
  FUNC_7(VAR_20.passphrase, VAR_8->passphrase,
      sizeof(VAR_20.passphrase));
 }
 FUNC_5(VAR_20.ssid, VAR_8->ssid, VAR_8->ssid_len);
 VAR_20.ssid_len = VAR_8->ssid_len;
 VAR_20.persistent_group = 1;

 VAR_7 = FUNC_13(VAR_7, VAR_9, 1);
 if (VAR_7 == ((void*)0))
  return -1;

 FUNC_9(VAR_17, VAR_20.freq_list, VAR_2);

 VAR_7->p2p_first_connection_timeout = VAR_18;
 FUNC_18(VAR_7, &VAR_20, 0);

 return 0;
}
