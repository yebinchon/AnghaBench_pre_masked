
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int const* req_ies; int req_ies_len; int const* resp_ies; int resp_ies_len; int const* beacon_ies; int beacon_ies_len; scalar_t__ freq; int resp_frame_len; int resp_frame; } ;
union wpa_event_data {TYPE_3__ assoc_info; } ;
typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_6__ {scalar_t__ auth_alg; int ft_used; int mobility_domain; } ;
struct wpa_supplicant {scalar_t__ hw_capab; int ieee80211ac; int connection_set; int connection_ht; int connection_vht; int connection_he; scalar_t__ auth_alg; int drv_flags; scalar_t__ key_mgmt; int ap_ies_from_associnfo; scalar_t__ assoc_freq; int wpa; TYPE_2__ sme; TYPE_1__* current_ssid; TYPE_4__* dpp_pfs; } ;
struct ieee802_11_elems {int owe_dh_len; int owe_dh; scalar_t__ he_capabilities; scalar_t__ vht_capabilities; scalar_t__ ht_capabilities; } ;
struct TYPE_8__ {int * secret; } ;
struct TYPE_5__ {scalar_t__ key_mgmt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int const*,int,int ) ;
 scalar_t__ FUNC_3 (int const*,int,struct ieee802_11_elems*,int ) ;
 struct wpabuf* FUNC_4 (int const*,int,int ) ;
 int FUNC_5 (struct wpa_supplicant*,int const*,int) ;
 int FUNC_6 (struct wpa_supplicant*,int const*,int) ;
 scalar_t__ FUNC_7 (int const*,char*,int) ;
 int FUNC_8 (int ,int const*,int const) ;
 scalar_t__ FUNC_9 (int ,int*,int const*,int) ;
 int FUNC_10 (struct wpa_supplicant*,int const*,int) ;
 int FUNC_11 (struct wpa_supplicant*,int ,char*,...) ;
 scalar_t__ FUNC_12 (struct wpa_supplicant*,int*) ;
 int FUNC_13 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,int const*,int,int*) ;
 int FUNC_16 (int ,char*,int const*,int) ;
 int FUNC_17 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_18 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_19 (int ,int const*,int) ;
 int FUNC_20 (int ,int const*,int) ;
 scalar_t__ FUNC_21 (int ,int const*,int) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int ,int const*,int) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (struct wpa_supplicant*,int ) ;
 int FUNC_26 (struct wpa_supplicant*) ;
 int FUNC_27 (int ,int const*,int) ;
 int FUNC_28 (struct wpabuf*) ;
 scalar_t__ FUNC_29 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_30(struct wpa_supplicant *VAR_20,
       union wpa_event_data *VAR_21)
{
 int VAR_22, VAR_23, VAR_24 = 0, VAR_25, VAR_26;
 const u8 *VAR_27;




 FUNC_11(VAR_20, VAR_3, "Association info event");
 if (VAR_21->assoc_info.req_ies)
  FUNC_16(VAR_3, "req_ies", VAR_21->assoc_info.req_ies,
       VAR_21->assoc_info.req_ies_len);
 if (VAR_21->assoc_info.resp_ies) {
  FUNC_16(VAR_3, "resp_ies", VAR_21->assoc_info.resp_ies,
       VAR_21->assoc_info.resp_ies_len);
  if (VAR_20->hw_capab == VAR_0 &&
      FUNC_2(VAR_21->assoc_info.resp_ies,
      VAR_21->assoc_info.resp_ies_len, VAR_9))
   VAR_20->ieee80211ac = 1;

  FUNC_6(VAR_20, VAR_21->assoc_info.resp_ies,
         VAR_21->assoc_info.resp_ies_len);
 }
 if (VAR_21->assoc_info.beacon_ies)
  FUNC_16(VAR_3, "beacon_ies",
       VAR_21->assoc_info.beacon_ies,
       VAR_21->assoc_info.beacon_ies_len);
 if (VAR_21->assoc_info.freq)
  FUNC_11(VAR_20, VAR_3, "freq=%u MHz",
   VAR_21->assoc_info.freq);

 VAR_20->connection_set = 0;
 if (VAR_21->assoc_info.req_ies && VAR_21->assoc_info.resp_ies) {
  struct ieee802_11_elems VAR_28, VAR_29;

  if (FUNC_3(VAR_21->assoc_info.req_ies,
        VAR_21->assoc_info.req_ies_len,
        &VAR_28, 0) != VAR_5 &&
      FUNC_3(VAR_21->assoc_info.resp_ies,
        VAR_21->assoc_info.resp_ies_len,
        &VAR_29, 0) != VAR_5) {
   VAR_20->connection_set = 1;
   VAR_20->connection_ht = VAR_28.ht_capabilities &&
    VAR_29.ht_capabilities;
   VAR_20->connection_vht = VAR_28.vht_capabilities &&
    VAR_29.vht_capabilities;
   VAR_20->connection_he = VAR_28.he_capabilities &&
    VAR_29.he_capabilities;
  }
 }

 VAR_27 = VAR_21->assoc_info.req_ies;
 VAR_22 = VAR_21->assoc_info.req_ies_len;


 while (VAR_27 && VAR_22 >= 2) {
  VAR_23 = VAR_27[1] + 2;
  if (VAR_23 > VAR_22) {
   FUNC_16(VAR_3, "Truncated IE in assoc_info",
        VAR_27, VAR_22);
   break;
  }
  if ((VAR_27[0] == VAR_8 && VAR_27[1] >= 6 &&
       (FUNC_7(&VAR_27[2], "\x00\x50\xF2\x01\x01\x00", 6) == 0)) ||
      (VAR_27[0] == VAR_8 && VAR_27[1] >= 4 &&
       (FUNC_7(&VAR_27[2], "\x50\x6F\x9A\x12", 4) == 0)) ||
      (VAR_27[0] == VAR_7 && VAR_27[1] >= 2)) {
   if (FUNC_21(VAR_20->wpa, VAR_27, VAR_23))
    break;
   VAR_24 = 1;
   FUNC_13(VAR_20);
   break;
  }
  VAR_22 -= VAR_23;
  VAR_27 += VAR_23;
 }
 if (!VAR_24 && VAR_21->assoc_info.req_ies)
  FUNC_21(VAR_20->wpa, ((void*)0), 0);
 VAR_27 = VAR_21->assoc_info.beacon_ies;
 VAR_22 = VAR_21->assoc_info.beacon_ies_len;



 VAR_25 = VAR_26 = 0;
 while (VAR_27 && VAR_22 >= 2) {
  VAR_23 = VAR_27[1] + 2;
  if (VAR_23 > VAR_22) {
   FUNC_16(VAR_3, "Truncated IE in beacon_ies",
        VAR_27, VAR_22);
   break;
  }
  if (!VAR_25 &&
      VAR_27[0] == VAR_8 && VAR_27[1] >= 6 &&
      FUNC_7(&VAR_27[2], "\x00\x50\xF2\x01\x01\x00", 6) == 0) {
   VAR_25 = 1;
   FUNC_20(VAR_20->wpa, VAR_27, VAR_23);
  }

  if (!VAR_26 &&
      VAR_27[0] == VAR_7 && VAR_27[1] >= 2) {
   VAR_26 = 1;
   FUNC_19(VAR_20->wpa, VAR_27, VAR_23);
  }

  VAR_22 -= VAR_23;
  VAR_27 += VAR_23;
 }

 if (!VAR_25 && VAR_21->assoc_info.beacon_ies)
  FUNC_20(VAR_20->wpa, ((void*)0), 0);
 if (!VAR_26 && VAR_21->assoc_info.beacon_ies)
  FUNC_19(VAR_20->wpa, ((void*)0), 0);
 if (VAR_25 || VAR_26)
  VAR_20->ap_ies_from_associnfo = 1;

 if (VAR_20->assoc_freq && VAR_21->assoc_info.freq &&
     VAR_20->assoc_freq != VAR_21->assoc_info.freq) {
  FUNC_18(VAR_3, "Operating frequency changed from "
      "%u to %u MHz",
      VAR_20->assoc_freq, VAR_21->assoc_info.freq);
  FUNC_26(VAR_20);
 }

 VAR_20->assoc_freq = VAR_21->assoc_info.freq;

 return 0;
}
