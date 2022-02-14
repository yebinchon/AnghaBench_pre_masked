
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {scalar_t__ ap_wpa_ie_len; scalar_t__ proto; int key_mgmt; scalar_t__ rsn_enabled; int * ap_rsn_ie; int ap_rsn_ie_len; int * ap_wpa_ie; TYPE_1__* ctx; } ;
struct wpa_eapol_ie_parse {scalar_t__ wpa_ie_len; int rsn_ie_len; int * rsn_ie; int * wpa_ie; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int *,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (struct wpa_sm*,char*,unsigned char const*,int *,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_6 (struct wpa_sm*) ;
 scalar_t__ FUNC_7 (struct wpa_sm*,unsigned char const*,struct wpa_eapol_ie_parse*) ;

__attribute__((used)) static int FUNC_8(struct wpa_sm *VAR_3,
          const unsigned char *VAR_4,
          struct wpa_eapol_ie_parse *VAR_5)
{
 if (VAR_3->ap_wpa_ie == ((void*)0) && VAR_3->ap_rsn_ie == ((void*)0)) {
  FUNC_2(VAR_3->ctx->msg_ctx, VAR_0,
   "WPA: No WPA/RSN IE for this AP known. "
   "Trying to get from scan results");
  if (FUNC_6(VAR_3) < 0) {
   FUNC_4(VAR_3->ctx->msg_ctx, VAR_1,
    "WPA: Could not find AP from "
    "the scan results");
  } else {
   FUNC_4(VAR_3->ctx->msg_ctx, VAR_0,
    "WPA: Found the current AP from "
    "updated scan results");
  }
 }

 if (VAR_5->wpa_ie == ((void*)0) && VAR_5->rsn_ie == ((void*)0) &&
     (VAR_3->ap_wpa_ie || VAR_3->ap_rsn_ie)) {
  FUNC_5(VAR_3, "IE in 3/4 msg does not match "
           "with IE in Beacon/ProbeResp (no IE?)",
           VAR_4, VAR_5->wpa_ie, VAR_5->wpa_ie_len,
           VAR_5->rsn_ie, VAR_5->rsn_ie_len);
  return -1;
 }

 if ((VAR_5->wpa_ie && VAR_3->ap_wpa_ie &&
      (VAR_5->wpa_ie_len != VAR_3->ap_wpa_ie_len ||
       FUNC_0(VAR_5->wpa_ie, VAR_3->ap_wpa_ie, VAR_5->wpa_ie_len) != 0)) ||
     (VAR_5->rsn_ie && VAR_3->ap_rsn_ie &&
      FUNC_1(FUNC_3(VAR_3->key_mgmt),
    VAR_3->ap_rsn_ie, VAR_3->ap_rsn_ie_len,
    VAR_5->rsn_ie, VAR_5->rsn_ie_len))) {
  FUNC_5(VAR_3, "IE in 3/4 msg does not match "
           "with IE in Beacon/ProbeResp",
           VAR_4, VAR_5->wpa_ie, VAR_5->wpa_ie_len,
           VAR_5->rsn_ie, VAR_5->rsn_ie_len);
  return -1;
 }

 if (VAR_3->proto == VAR_2 &&
     VAR_5->rsn_ie && VAR_3->ap_rsn_ie == ((void*)0) && VAR_3->rsn_enabled) {
  FUNC_5(VAR_3, "Possible downgrade attack "
           "detected - RSN was enabled and RSN IE "
           "was in msg 3/4, but not in "
           "Beacon/ProbeResp",
           VAR_4, VAR_5->wpa_ie, VAR_5->wpa_ie_len,
           VAR_5->rsn_ie, VAR_5->rsn_ie_len);
  return -1;
 }







 return 0;
}
