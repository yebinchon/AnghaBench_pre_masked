
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int group_mgmt_cipher; } ;
struct parse_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char const*) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(const struct parse_data *VAR_3,
           struct wpa_ssid *VAR_4, int VAR_5,
           const char *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 == -1)
  return -1;

 if (VAR_7 & ~VAR_2) {
  FUNC_1(VAR_0,
      "Line %d: not allowed group management cipher (0x%x).",
      VAR_5, VAR_7);
  return -1;
 }

 if (VAR_4->group_mgmt_cipher == VAR_7)
  return 1;
 FUNC_1(VAR_1, "group_mgmt: 0x%x", VAR_7);
 VAR_4->group_mgmt_cipher = VAR_7;
 return 0;
}
