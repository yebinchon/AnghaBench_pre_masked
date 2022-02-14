
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_parse_attr {int * version2; int num_cred; int cred_len; int cred; int key_wrap_auth; int encr_settings_len; int encr_settings; int authenticator; int public_key_len; int public_key; int dev_password_id; int uuid_r; int enrollee_nonce; int registrar_nonce; } ;
struct wps_data {scalar_t__ state; scalar_t__ peer_pubkey_hash_set; int peer_dev; int config_error; int * dev_password; TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_2__ {int ap_setup_locked; scalar_t__ ap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct wpabuf*) ;
 struct wpabuf* FUNC_2 (struct wps_data*,int ,int ) ;
 scalar_t__ FUNC_3 (struct wpabuf*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_4 (struct wps_data*,int ,struct wpabuf const*) ;
 scalar_t__ FUNC_5 (struct wps_data*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct wps_data*,int ) ;
 scalar_t__ FUNC_7 (int *,struct wps_parse_attr*) ;
 scalar_t__ FUNC_8 (struct wps_data*,int ) ;
 scalar_t__ FUNC_9 (struct wps_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_10 (struct wps_data*,int ,int ) ;
 scalar_t__ FUNC_11 (struct wps_data*,int ) ;
 scalar_t__ FUNC_12 (struct wps_data*,int ) ;

__attribute__((used)) static enum wps_process_res FUNC_13(struct wps_data *VAR_7,
        const struct wpabuf *VAR_8,
        struct wps_parse_attr *VAR_9)
{
 FUNC_0(VAR_0, "WPS: Received M2");

 if (VAR_7->state != VAR_1) {
  FUNC_0(VAR_0, "WPS: Unexpected state (%d) for "
      "receiving M2", VAR_7->state);
  VAR_7->state = VAR_3;
  return VAR_5;
 }

 if (FUNC_11(VAR_7, VAR_9->registrar_nonce) ||
     FUNC_8(VAR_7, VAR_9->enrollee_nonce) ||
     FUNC_12(VAR_7, VAR_9->uuid_r) ||
     FUNC_6(VAR_7, VAR_9->dev_password_id)) {
  VAR_7->state = VAR_3;
  return VAR_5;
 }







 if (VAR_7->wps->ap &&
     ((VAR_7->wps->ap_setup_locked && VAR_7->wps->ap_setup_locked != 2) ||
      VAR_7->dev_password == ((void*)0))) {
  FUNC_0(VAR_0, "WPS: AP Setup is locked - refuse "
      "registration of a new Registrar");
  VAR_7->config_error = VAR_4;
  VAR_7->state = VAR_3;
  return VAR_5;
 }

 if (FUNC_10(VAR_7, VAR_9->public_key, VAR_9->public_key_len) ||
     FUNC_4(VAR_7, VAR_9->authenticator, VAR_8) ||
     FUNC_7(&VAR_7->peer_dev, VAR_9)) {
  VAR_7->state = VAR_3;
  return VAR_5;
 }
 VAR_7->state = VAR_2;
 return VAR_5;
}
