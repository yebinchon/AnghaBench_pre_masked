
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int key_wrap_auth; int num_cred; int cred_len; int cred; int mac_addr; int network_key_idx; int encr_type; int auth_type; int ssid_len; int ssid; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;

int FUNC_9(const struct wpabuf *VAR_1, int VAR_2, int VAR_3)
{
 struct wps_parse_attr VAR_4;

 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS-STRICT: No TLVs in M8 encrypted "
      "settings");
  return -1;
 }
 if (FUNC_1(VAR_1, &VAR_4) < 0) {
  FUNC_0(VAR_0, "WPS-STRICT: Failed to parse attributes "
      "in M8 encrypted settings");
  return -1;
 }

 if (FUNC_8(VAR_4.ssid, VAR_4.ssid_len, VAR_2) ||
     FUNC_2(VAR_4.auth_type, VAR_2) ||
     FUNC_4(VAR_4.encr_type, VAR_2) ||
     FUNC_7(VAR_4.network_key_idx, 0) ||
     FUNC_6(VAR_4.mac_addr, VAR_2) ||
     FUNC_3(VAR_4.cred, VAR_4.cred_len, VAR_4.num_cred,
        !VAR_2) ||
     FUNC_5(VAR_4.key_wrap_auth, 1)) {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid M8 encrypted "
      "settings");




  return -1;

 }

 return 0;
}
