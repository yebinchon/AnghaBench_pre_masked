
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_ssid_value {int dummy; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*,int *,struct wpa_ssid_value*) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 char* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,struct wpa_ssid_value*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct hostapd_data *VAR_2,
           char *VAR_3)
{
 struct wpa_ssid_value VAR_4;
 u8 VAR_5[VAR_0];
 char *VAR_6;

 if (FUNC_1(VAR_3, VAR_5)) {
  FUNC_4(VAR_1, "CTRL: REMOVE_NEIGHBOR: Bad BSSID");
  return -1;
 }

 VAR_6 = FUNC_2(VAR_3, "ssid=");
 if (!VAR_6 || FUNC_3(VAR_6 + 5, &VAR_4)) {
  FUNC_4(VAR_1,
      "CTRL: REMOVE_NEIGHBORr: Bad or missing SSID");
  return -1;
 }

 return FUNC_0(VAR_2, VAR_5, &VAR_4);
}
