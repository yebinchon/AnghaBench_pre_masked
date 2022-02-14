
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int num_bssid_blacklist; int bssid_blacklist; } ;
struct parse_data {int dummy; } ;


 char* FUNC_0 (struct parse_data const*,int ,int ,char*) ;

__attribute__((used)) static char * FUNC_1(const struct parse_data *VAR_0,
            struct wpa_ssid *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->bssid_blacklist,
       VAR_1->num_bssid_blacklist,
       "bssid_blacklist");
}
