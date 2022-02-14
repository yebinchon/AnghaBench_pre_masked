
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_parse_attr {int network_key_shareable; int mac_addr; int encr_type; int network_key_len; int network_key; int network_key_idx; int auth_type; int ssid_len; int ssid; int network_idx; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,int const*,size_t) ;
 scalar_t__ FUNC_2 (struct wpabuf*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;

__attribute__((used)) static int FUNC_11(const u8 *VAR_1, size_t VAR_2)
{
 struct wps_parse_attr VAR_3;
 struct wpabuf VAR_4;

 if (VAR_1 == ((void*)0))
  return -1;
 FUNC_1(&VAR_4, VAR_1, VAR_2);
 if (FUNC_2(&VAR_4, &VAR_3) < 0) {
  FUNC_0(VAR_0, "WPS-STRICT: Failed to parse Credential");
  return -1;
 }

 if (FUNC_6(VAR_3.network_idx, 1) ||
     FUNC_10(VAR_3.ssid, VAR_3.ssid_len, 1) ||
     FUNC_3(VAR_3.auth_type, 1) ||
     FUNC_4(VAR_3.encr_type, 1) ||
     FUNC_8(VAR_3.network_key_idx, 0) ||
     FUNC_7(VAR_3.network_key, VAR_3.network_key_len,
         VAR_3.encr_type, 1) ||
     FUNC_5(VAR_3.mac_addr, 1) ||
     FUNC_9(VAR_3.network_key_shareable, 0))
 {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid Credential");
  return -1;
 }


 return 0;
}
