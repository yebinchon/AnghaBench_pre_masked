
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct wps_parse_attr {size_t public_key_len; int multi_ap_ext; int * public_key; int os_version; int config_error; int dev_password_id; int assoc_state; int rf_bands; int wps_state; int config_methods; int conn_type_flags; int encr_type_flags; int auth_type_flags; int enrollee_nonce; int mac_addr; int uuid_e; } ;
struct wps_nfc_pw_token {int pubkey_hash; int list; scalar_t__ peer_pk_hash_known; } ;
struct TYPE_10__ {scalar_t__ model_name; scalar_t__ manufacturer; } ;
struct wps_data {scalar_t__ state; int dev_pw_id; int pbc; int use_psk_key; TYPE_3__ peer_dev; int uuid_e; int mac_addr_e; TYPE_7__* wps; int config_error; struct wps_nfc_pw_token* nfc_pw_token; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_11__ {int ap_nfc_dev_pw_id; TYPE_1__* registrar; scalar_t__ ap_nfc_dev_pw; } ;
struct TYPE_9__ {int force_pbc_overlap; int nfc_pw_tokens; int pbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (int,int const**,size_t*,int *) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (TYPE_7__*,int ,int ,int ,int ) ;
 struct wps_nfc_pw_token* FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_7__*) ;
 scalar_t__ FUNC_9 (struct wps_data*,int ) ;
 scalar_t__ FUNC_10 (struct wps_data*,int ) ;
 scalar_t__ FUNC_11 (struct wps_data*,int ) ;
 scalar_t__ FUNC_12 (struct wps_data*,int ) ;
 scalar_t__ FUNC_13 (struct wps_data*,int ) ;
 scalar_t__ FUNC_14 (struct wps_data*,int ) ;
 scalar_t__ FUNC_15 (TYPE_3__*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_16 (struct wps_data*,int ) ;
 scalar_t__ FUNC_17 (struct wps_data*,int ) ;
 scalar_t__ FUNC_18 (struct wps_data*,int ) ;
 scalar_t__ FUNC_19 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_20 (struct wps_data*,int *,size_t) ;
 scalar_t__ FUNC_21 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_22 (struct wps_data*,int ) ;
 int FUNC_23 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_24 (struct wps_data*,int ) ;
 int FUNC_25 (TYPE_1__*,int ,int ) ;
 int FUNC_26 (struct wps_data*) ;
 scalar_t__ FUNC_27 (TYPE_1__*,int ,int ) ;
 int FUNC_28 (struct wps_data*) ;

__attribute__((used)) static enum wps_process_res FUNC_29(struct wps_data *VAR_20,
        struct wps_parse_attr *VAR_21)
{
 FUNC_5(VAR_7, "WPS: Received M1");

 if (VAR_20->state != VAR_9) {
  FUNC_5(VAR_7, "WPS: Unexpected state (%d) for "
      "receiving M1", VAR_20->state);
  return VAR_16;
 }

 if (FUNC_22(VAR_20, VAR_21->uuid_e) ||
     FUNC_18(VAR_20, VAR_21->mac_addr) ||
     FUNC_17(VAR_20, VAR_21->enrollee_nonce) ||
     FUNC_20(VAR_20, VAR_21->public_key, VAR_21->public_key_len) ||
     FUNC_10(VAR_20, VAR_21->auth_type_flags) ||
     FUNC_16(VAR_20, VAR_21->encr_type_flags) ||
     FUNC_13(VAR_20, VAR_21->conn_type_flags) ||
     FUNC_12(VAR_20, VAR_21->config_methods) ||
     FUNC_24(VAR_20, VAR_21->wps_state) ||
     FUNC_15(&VAR_20->peer_dev, VAR_21) ||
     FUNC_21(&VAR_20->peer_dev, VAR_21->rf_bands) ||
     FUNC_9(VAR_20, VAR_21->assoc_state) ||
     FUNC_14(VAR_20, VAR_21->dev_password_id) ||
     FUNC_11(VAR_20, VAR_21->config_error) ||
     FUNC_19(&VAR_20->peer_dev, VAR_21->os_version))
  return VAR_16;

 if (VAR_20->dev_pw_id < 0x10 &&
     VAR_20->dev_pw_id != VAR_0 &&
     VAR_20->dev_pw_id != VAR_3 &&
     VAR_20->dev_pw_id != VAR_6 &&
     VAR_20->dev_pw_id != VAR_1 &&
     VAR_20->dev_pw_id != VAR_5 &&



     (VAR_20->dev_pw_id != VAR_4 ||
      !VAR_20->wps->registrar->pbc)) {
  FUNC_5(VAR_7, "WPS: Unsupported Device Password ID %d",
      VAR_20->dev_pw_id);
  VAR_20->state = VAR_11;
  return VAR_14;
 }
 if (VAR_20->dev_pw_id == VAR_4) {
  if ((VAR_20->wps->registrar->force_pbc_overlap ||
       FUNC_27(VAR_20->wps->registrar,
            VAR_20->mac_addr_e, VAR_20->uuid_e) ||
       !FUNC_26(VAR_20)) &&
      !FUNC_28(VAR_20)) {
   FUNC_5(VAR_7, "WPS: PBC overlap - deny PBC "
       "negotiation");
   VAR_20->state = VAR_11;
   VAR_20->config_error = VAR_12;
   FUNC_8(VAR_20->wps);
   FUNC_6(VAR_20->wps, VAR_18,
           VAR_12,
           VAR_15, VAR_20->mac_addr_e);
   VAR_20->wps->registrar->force_pbc_overlap = 1;
   return VAR_14;
  }
  FUNC_25(VAR_20->wps->registrar,
           VAR_20->mac_addr_e, VAR_20->uuid_e);
  VAR_20->pbc = 1;
 }
 FUNC_23(&VAR_20->peer_dev, VAR_21->multi_ap_ext);

 VAR_20->state = VAR_10;
 return VAR_14;
}
