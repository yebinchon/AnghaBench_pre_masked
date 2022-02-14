
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_ssid_value {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int* radio_measurements; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_data*,int *,struct wpa_ssid_value*,struct wpabuf*,struct wpabuf*,struct wpabuf*,int) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,struct wpa_ssid_value*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpabuf*) ;
 struct wpabuf* FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct hostapd_data *VAR_3, char *VAR_4)
{
 struct wpa_ssid_value VAR_5;
 u8 VAR_6[VAR_0];
 struct wpabuf *VAR_7, *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 char *VAR_11;
 int VAR_12;

 if (!(VAR_3->conf->radio_measurements[0] &
       VAR_2)) {
  FUNC_5(VAR_1,
      "CTRL: SET_NEIGHBOR: Neighbor report is not enabled");
  return -1;
 }

 if (FUNC_1(VAR_4, VAR_6)) {
  FUNC_5(VAR_1, "CTRL: SET_NEIGHBOR: Bad BSSID");
  return -1;
 }

 VAR_11 = FUNC_3(VAR_4, "ssid=");
 if (!VAR_11 || FUNC_4(VAR_11 + 5, &VAR_5)) {
  FUNC_5(VAR_1,
      "CTRL: SET_NEIGHBOR: Bad or missing SSID");
  return -1;
 }
 VAR_4 = FUNC_2(VAR_11 + 6, VAR_11[5] == '"' ? '"' : ' ');
 if (!VAR_4)
  return -1;

 VAR_11 = FUNC_3(VAR_4, "nr=");
 if (!VAR_11) {
  FUNC_5(VAR_1,
      "CTRL: SET_NEIGHBOR: Missing Neighbor Report element");
  return -1;
 }

 VAR_4 = FUNC_2(VAR_11, ' ');
 if (VAR_4)
  *VAR_4++ = '\0';

 VAR_7 = FUNC_7(VAR_11 + 3);
 if (!VAR_7) {
  FUNC_5(VAR_1,
      "CTRL: SET_NEIGHBOR: Bad Neighbor Report element");
  return -1;
 }

 if (!VAR_4)
  goto set;

 VAR_11 = FUNC_3(VAR_4, "lci=");
 if (VAR_11) {
  VAR_4 = FUNC_2(VAR_11, ' ');
  if (VAR_4)
   *VAR_4++ = '\0';
  VAR_8 = FUNC_7(VAR_11 + 4);
  if (!VAR_8) {
   FUNC_5(VAR_1,
       "CTRL: SET_NEIGHBOR: Bad LCI subelement");
   FUNC_6(VAR_7);
   return -1;
  }
 }

 if (!VAR_4)
  goto set;

 VAR_11 = FUNC_3(VAR_4, "civic=");
 if (VAR_11) {
  VAR_4 = FUNC_2(VAR_11, ' ');
  if (VAR_4)
   *VAR_4++ = '\0';
  VAR_9 = FUNC_7(VAR_11 + 6);
  if (!VAR_9) {
   FUNC_5(VAR_1,
       "CTRL: SET_NEIGHBOR: Bad civic subelement");
   FUNC_6(VAR_7);
   FUNC_6(VAR_8);
   return -1;
  }
 }

 if (!VAR_4)
  goto set;

 if (FUNC_3(VAR_4, "stat"))
  VAR_10 = 1;

set:
 VAR_12 = FUNC_0(VAR_3, VAR_6, &VAR_5, VAR_7, VAR_8, VAR_9,
       VAR_10);

 FUNC_6(VAR_7);
 FUNC_6(VAR_8);
 FUNC_6(VAR_9);

 return VAR_12;
}
