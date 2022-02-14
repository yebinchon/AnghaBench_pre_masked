
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int num_bssid_whitelist; int bssid_whitelist; } ;
struct parse_data {int dummy; } ;


 int FUNC_0 (struct parse_data const*,int,char const*,int *,int *,char*,int,int) ;

__attribute__((used)) static int FUNC_1(const struct parse_data *VAR_0,
         struct wpa_ssid *VAR_1, int VAR_2,
         const char *VAR_3)
{
 return FUNC_0(VAR_0, VAR_2, VAR_3,
       &VAR_1->bssid_whitelist,
       &VAR_1->num_bssid_whitelist,
       "bssid_whitelist", 1, 1);
}
