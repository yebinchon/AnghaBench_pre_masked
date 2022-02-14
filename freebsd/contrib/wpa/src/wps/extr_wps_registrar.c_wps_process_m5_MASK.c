
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_parse_attr {int e_snonce1; int key_wrap_auth; int * version2; int encr_settings_len; int encr_settings; int authenticator; int registrar_nonce; } ;
struct wps_data {scalar_t__ state; int config_error; TYPE_2__* wps; scalar_t__ pbc; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_4__ {TYPE_1__* registrar; } ;
struct TYPE_3__ {scalar_t__ force_pbc_overlap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct wpabuf*) ;
 struct wpabuf* FUNC_2 (struct wps_data*,int ,int ) ;
 scalar_t__ FUNC_3 (struct wpabuf*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_4 (struct wps_data*,int ,struct wpabuf const*) ;
 scalar_t__ FUNC_5 (struct wps_data*,int ) ;
 scalar_t__ FUNC_6 (struct wps_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_7 (struct wps_data*,int ) ;
 int FUNC_8 (struct wps_data*) ;
 scalar_t__ FUNC_9 (struct wpabuf*,int ) ;

__attribute__((used)) static enum wps_process_res FUNC_10(struct wps_data *VAR_6,
        const struct wpabuf *VAR_7,
        struct wps_parse_attr *VAR_8)
{
 struct wpabuf *VAR_9;
 struct wps_parse_attr VAR_10;

 FUNC_0(VAR_0, "WPS: Received M5");

 if (VAR_6->state != VAR_1) {
  FUNC_0(VAR_0, "WPS: Unexpected state (%d) for "
      "receiving M5", VAR_6->state);
  VAR_6->state = VAR_3;
  return VAR_5;
 }

 if (VAR_6->pbc && VAR_6->wps->registrar->force_pbc_overlap &&
     !FUNC_8(VAR_6)) {
  FUNC_0(VAR_0, "WPS: Reject negotiation due to PBC "
      "session overlap");
  VAR_6->state = VAR_3;
  VAR_6->config_error = VAR_4;
  return VAR_5;
 }

 if (FUNC_7(VAR_6, VAR_8->registrar_nonce) ||
     FUNC_4(VAR_6, VAR_8->authenticator, VAR_7)) {
  VAR_6->state = VAR_3;
  return VAR_5;
 }

 VAR_9 = FUNC_2(VAR_6, VAR_8->encr_settings,
           VAR_8->encr_settings_len);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS: Failed to decrypted Encrypted "
      "Settings attribute");
  VAR_6->state = VAR_3;
  return VAR_5;
 }

 if (FUNC_9(VAR_9, VAR_8->version2 != ((void*)0)) < 0) {
  FUNC_1(VAR_9);
  VAR_6->state = VAR_3;
  return VAR_5;
 }

 FUNC_0(VAR_0, "WPS: Processing decrypted Encrypted Settings "
     "attribute");
 if (FUNC_3(VAR_9, &VAR_10) < 0 ||
     FUNC_6(VAR_6, VAR_9, VAR_10.key_wrap_auth) ||
     FUNC_5(VAR_6, VAR_10.e_snonce1)) {
  FUNC_1(VAR_9);
  VAR_6->state = VAR_3;
  return VAR_5;
 }
 FUNC_1(VAR_9);

 VAR_6->state = VAR_2;
 return VAR_5;
}
