
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int key_wrap_auth; int e_snonce1; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;

int FUNC_4(const struct wpabuf *VAR_1, int VAR_2)
{
 struct wps_parse_attr VAR_3;

 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS-STRICT: No TLVs in M5 encrypted "
      "settings");
  return -1;
 }
 if (FUNC_1(VAR_1, &VAR_3) < 0) {
  FUNC_0(VAR_0, "WPS-STRICT: Failed to parse attributes "
      "in M5 encrypted settings");
  return -1;
 }

 if (FUNC_2(VAR_3.e_snonce1, 1) ||
     FUNC_3(VAR_3.key_wrap_auth, 1)) {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid M5 encrypted "
      "settings");




  return -1;

 }

 return 0;
}
