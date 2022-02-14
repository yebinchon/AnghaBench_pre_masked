
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wps_parse_attr {int * request_type; } ;
struct TYPE_6__ {int mac_addr; } ;
struct wps_data {scalar_t__ dev_pw_id; int dev_password_len; scalar_t__ alt_dev_pw_id; int alt_dev_password_len; int peer_pubkey_hash_set; int multi_ap_backhaul_sta; int peer_pubkey_hash; int pbc_in_m1; int use_psk_key; int p2p_dev_addr; TYPE_3__ peer_dev; int * dev_password; int * new_ap_settings; int request_type; scalar_t__ registrar; int state; scalar_t__ pbc; int * alt_dev_password; int uuid_e; int mac_addr_e; int uuid_r; TYPE_2__* wps; } ;
struct wps_config {scalar_t__ dev_pw_id; int pin_len; int multi_ap_backhaul_sta; int peer_pubkey_hash; int pbc_in_m1; int use_psk_key; int p2p_dev_addr; int peer_addr; int * new_ap_settings; scalar_t__ assoc_wps_ie; scalar_t__ pbc; TYPE_2__* wps; scalar_t__ registrar; int * pin; } ;
struct TYPE_4__ {int mac_addr; } ;
struct TYPE_5__ {scalar_t__ ap_nfc_dev_pw_id; int ap_nfc_dev_pw; scalar_t__ ap; int uuid; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct wps_data*) ;
 int FUNC_2 (int ,int ,int ) ;
 void* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (char*) ;
 struct wps_data* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int ,char*,int *,int) ;
 int FUNC_8 (int ,char*,...) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__,struct wps_parse_attr*) ;

struct wps_data * FUNC_12(const struct wps_config *VAR_8)
{
 struct wps_data *VAR_9 = FUNC_5(sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return ((void*)0);
 VAR_9->wps = VAR_8->wps;
 VAR_9->registrar = VAR_8->registrar;
 if (VAR_8->registrar) {
  FUNC_2(VAR_9->uuid_r, VAR_8->wps->uuid, VAR_7);
 } else {
  FUNC_2(VAR_9->mac_addr_e, VAR_8->wps->dev.mac_addr, VAR_2);
  FUNC_2(VAR_9->uuid_e, VAR_8->wps->uuid, VAR_7);
 }
 if (VAR_8->pin) {
  VAR_9->dev_pw_id = VAR_8->dev_pw_id;
  VAR_9->dev_password = FUNC_3(VAR_8->pin, VAR_8->pin_len);
  if (VAR_9->dev_password == ((void*)0)) {
   FUNC_1(VAR_9);
   return ((void*)0);
  }
  VAR_9->dev_password_len = VAR_8->pin_len;
  FUNC_7(VAR_3, "WPS: AP PIN dev_password",
    VAR_9->dev_password, VAR_9->dev_password_len);
 }
 VAR_9->pbc = VAR_8->pbc;
 if (VAR_8->pbc) {

  VAR_9->dev_pw_id = VAR_1;
  FUNC_0(VAR_9->dev_password, VAR_9->dev_password_len);
  VAR_9->dev_password = (u8 *) FUNC_4("00000000");
  if (VAR_9->dev_password == ((void*)0)) {
   FUNC_1(VAR_9);
   return ((void*)0);
  }
  VAR_9->dev_password_len = 8;
 }

 VAR_9->state = VAR_9->registrar ? VAR_4 : VAR_5;

 if (VAR_8->assoc_wps_ie) {
  struct wps_parse_attr VAR_10;
  FUNC_6(VAR_3, "WPS: WPS IE from (Re)AssocReq",
    VAR_8->assoc_wps_ie);
  if (FUNC_11(VAR_8->assoc_wps_ie, &VAR_10) < 0) {
   FUNC_8(VAR_3, "WPS: Failed to parse WPS IE "
       "from (Re)AssocReq");
  } else if (VAR_10.request_type == ((void*)0)) {
   FUNC_8(VAR_3, "WPS: No Request Type attribute "
       "in (Re)AssocReq WPS IE");
  } else {
   FUNC_8(VAR_3, "WPS: Request Type (from WPS IE "
       "in (Re)AssocReq WPS IE): %d",
       *VAR_10.request_type);
   VAR_9->request_type = *VAR_10.request_type;
  }
 }

 if (VAR_8->new_ap_settings) {
  VAR_9->new_ap_settings =
   FUNC_3(VAR_8->new_ap_settings,
      sizeof(*VAR_9->new_ap_settings));
  if (VAR_9->new_ap_settings == ((void*)0)) {
   FUNC_0(VAR_9->dev_password,
           VAR_9->dev_password_len);
   FUNC_1(VAR_9);
   return ((void*)0);
  }
 }

 if (VAR_8->peer_addr)
  FUNC_2(VAR_9->peer_dev.mac_addr, VAR_8->peer_addr, VAR_2);
 if (VAR_8->p2p_dev_addr)
  FUNC_2(VAR_9->p2p_dev_addr, VAR_8->p2p_dev_addr, VAR_2);

 VAR_9->use_psk_key = VAR_8->use_psk_key;
 VAR_9->pbc_in_m1 = VAR_8->pbc_in_m1;

 if (VAR_8->peer_pubkey_hash) {
  FUNC_2(VAR_9->peer_pubkey_hash, VAR_8->peer_pubkey_hash,
     VAR_6);
  VAR_9->peer_pubkey_hash_set = 1;
 }

 VAR_9->multi_ap_backhaul_sta = VAR_8->multi_ap_backhaul_sta;

 return VAR_9;
}
