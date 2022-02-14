
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int authenticator; int * version2; int settings_delay_time; int encr_settings_len; int encr_settings; int registrar_nonce; int msg_type; int version; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int *,int) ;

int FUNC_9(const struct wpabuf *VAR_1)
{
 struct wps_parse_attr VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS-STRICT: No TLVs in M7");
  return -1;
 }
 if (FUNC_1(VAR_1, &VAR_2) < 0) {
  FUNC_0(VAR_0, "WPS-STRICT: Failed to parse attributes "
      "in M7");
  return -1;
 }

 VAR_3 = VAR_2.version2 != ((void*)0);
 if (FUNC_7(VAR_2.version, 1) ||
     FUNC_4(VAR_2.msg_type, 1) ||
     FUNC_5(VAR_2.registrar_nonce, 1) ||
     FUNC_3(VAR_2.encr_settings,
           VAR_2.encr_settings_len, 1) ||
     FUNC_6(VAR_2.settings_delay_time, 0) ||
     FUNC_8(VAR_2.version2, VAR_3) ||
     FUNC_2(VAR_2.authenticator, 1)) {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid M7");




  return -1;

 }

 return 0;
}
