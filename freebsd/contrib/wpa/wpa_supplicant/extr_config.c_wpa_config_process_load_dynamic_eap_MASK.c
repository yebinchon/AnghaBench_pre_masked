
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {int dummy; } ;
struct global_parse_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(
 const struct global_parse_data *VAR_2, struct wpa_config *VAR_3,
 int VAR_4, const char *VAR_5)
{
 int VAR_6;
 FUNC_1(VAR_0, "load_dynamic_eap=%s", VAR_5);
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == -2) {
  FUNC_1(VAR_0, "This EAP type was already loaded - not "
      "reloading.");
 } else if (VAR_6) {
  FUNC_1(VAR_1, "Line %d: Failed to load dynamic EAP "
      "method '%s'.", VAR_4, VAR_5);
  return -1;
 }

 return 0;
}
