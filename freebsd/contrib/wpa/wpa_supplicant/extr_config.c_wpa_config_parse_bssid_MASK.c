
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int bssid_set; int bssid; } ;
struct parse_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(const struct parse_data *VAR_3,
      struct wpa_ssid *VAR_4, int VAR_5,
      const char *VAR_6)
{
 if (VAR_6[0] == '\0' || FUNC_1(VAR_6, "\"\"") == 0 ||
     FUNC_1(VAR_6, "any") == 0) {
  VAR_4->bssid_set = 0;
  FUNC_3(VAR_2, "BSSID any");
  return 0;
 }
 if (FUNC_0(VAR_6, VAR_4->bssid)) {
  FUNC_3(VAR_1, "Line %d: Invalid BSSID '%s'.",
      VAR_5, VAR_6);
  return -1;
 }
 VAR_4->bssid_set = 1;
 FUNC_2(VAR_2, "BSSID", VAR_4->bssid, VAR_0);
 return 0;
}
