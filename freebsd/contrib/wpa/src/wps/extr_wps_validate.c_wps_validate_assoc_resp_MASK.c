
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int * version2; int response_type; int version; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int *,int) ;

int FUNC_5(const struct wpabuf *VAR_1)
{
 struct wps_parse_attr VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS-STRICT: No WPS IE in "
      "(Re)Association Response frame");
  return -1;
 }
 if (FUNC_1(VAR_1, &VAR_2) < 0) {
  FUNC_0(VAR_0, "WPS-STRICT: Failed to parse WPS IE in "
      "(Re)Association Response frame");
  return -1;
 }

 VAR_3 = VAR_2.version2 != ((void*)0);
 if (FUNC_3(VAR_2.version, 1) ||
     FUNC_2(VAR_2.response_type, 1) ||
     FUNC_4(VAR_2.version2, VAR_3)) {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid (Re)Association "
      "Response frame");
  return -1;
 }

 return 0;
}
