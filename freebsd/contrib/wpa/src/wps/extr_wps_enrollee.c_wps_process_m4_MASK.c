
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int r_snonce1; int key_wrap_auth; int * version2; int encr_settings_len; int encr_settings; int r_hash2; int r_hash1; int authenticator; int enrollee_nonce; } ;
struct wps_data {scalar_t__ state; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct wpabuf*) ;
 struct wpabuf* FUNC_2 (struct wps_data*,int ,int ) ;
 scalar_t__ FUNC_3 (struct wpabuf*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_4 (struct wps_data*,int ,struct wpabuf const*) ;
 scalar_t__ FUNC_5 (struct wps_data*,int ) ;
 scalar_t__ FUNC_6 (struct wps_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_7 (struct wps_data*,int ) ;
 scalar_t__ FUNC_8 (struct wps_data*,int ) ;
 scalar_t__ FUNC_9 (struct wps_data*,int ) ;
 scalar_t__ FUNC_10 (struct wpabuf*,int ) ;

__attribute__((used)) static enum wps_process_res FUNC_11(struct wps_data *VAR_5,
        const struct wpabuf *VAR_6,
        struct wps_parse_attr *VAR_7)
{
 struct wpabuf *VAR_8;
 struct wps_parse_attr VAR_9;

 FUNC_0(VAR_0, "WPS: Received M4");

 if (VAR_5->state != VAR_1) {
  FUNC_0(VAR_0, "WPS: Unexpected state (%d) for "
      "receiving M4", VAR_5->state);
  VAR_5->state = VAR_3;
  return VAR_4;
 }

 if (FUNC_5(VAR_5, VAR_7->enrollee_nonce) ||
     FUNC_4(VAR_5, VAR_7->authenticator, VAR_6) ||
     FUNC_7(VAR_5, VAR_7->r_hash1) ||
     FUNC_8(VAR_5, VAR_7->r_hash2)) {
  VAR_5->state = VAR_3;
  return VAR_4;
 }

 VAR_8 = FUNC_2(VAR_5, VAR_7->encr_settings,
           VAR_7->encr_settings_len);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS: Failed to decrypted Encrypted "
      "Settings attribute");
  VAR_5->state = VAR_3;
  return VAR_4;
 }

 if (FUNC_10(VAR_8, VAR_7->version2 != ((void*)0)) < 0) {
  FUNC_1(VAR_8);
  VAR_5->state = VAR_3;
  return VAR_4;
 }

 FUNC_0(VAR_0, "WPS: Processing decrypted Encrypted Settings "
     "attribute");
 if (FUNC_3(VAR_8, &VAR_9) < 0 ||
     FUNC_6(VAR_5, VAR_8, VAR_9.key_wrap_auth) ||
     FUNC_9(VAR_5, VAR_9.r_snonce1)) {
  FUNC_1(VAR_8);
  VAR_5->state = VAR_3;
  return VAR_4;
 }
 FUNC_1(VAR_8);

 VAR_5->state = VAR_2;
 return VAR_4;
}
