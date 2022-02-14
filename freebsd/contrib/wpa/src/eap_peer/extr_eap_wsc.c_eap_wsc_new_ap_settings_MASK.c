
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_credential {size_t ssid_len; size_t key_len; int key; int encr_type; int auth_type; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,int ,size_t) ;
 int FUNC_1 (struct wps_credential*,int ,int) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 char* FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct wps_credential *VAR_8,
       const char *VAR_9)
{
 const char *VAR_10, *VAR_11;
 size_t VAR_12;

 FUNC_1(VAR_8, 0, sizeof(*VAR_8));

 VAR_10 = FUNC_5(VAR_9, "new_ssid=");
 if (VAR_10 == ((void*)0))
  return 0;
 VAR_10 += 9;
 VAR_11 = FUNC_2(VAR_10, ' ');
 if (VAR_11 == ((void*)0))
  VAR_12 = FUNC_3(VAR_10);
 else
  VAR_12 = VAR_11 - VAR_10;
 if ((VAR_12 & 1) || VAR_12 > 2 * sizeof(VAR_8->ssid) ||
     FUNC_0(VAR_10, VAR_8->ssid, VAR_12 / 2)) {
  FUNC_6(VAR_0, "EAP-WSC: Invalid new_ssid");
  return -1;
 }
 VAR_8->ssid_len = VAR_12 / 2;

 VAR_10 = FUNC_5(VAR_9, "new_auth=");
 if (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_0, "EAP-WSC: Missing new_auth");
  return -1;
 }
 if (FUNC_4(VAR_10 + 9, "OPEN", 4) == 0)
  VAR_8->auth_type = VAR_1;
 else if (FUNC_4(VAR_10 + 9, "WPAPSK", 6) == 0)
  VAR_8->auth_type = VAR_3;
 else if (FUNC_4(VAR_10 + 9, "WPA2PSK", 7) == 0)
  VAR_8->auth_type = VAR_2;
 else {
  FUNC_6(VAR_0, "EAP-WSC: Unknown new_auth");
  return -1;
 }

 VAR_10 = FUNC_5(VAR_9, "new_encr=");
 if (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_0, "EAP-WSC: Missing new_encr");
  return -1;
 }
 if (FUNC_4(VAR_10 + 9, "NONE", 4) == 0)
  VAR_8->encr_type = VAR_5;




 else if (FUNC_4(VAR_10 + 9, "TKIP", 4) == 0)
  VAR_8->encr_type = VAR_6;
 else if (FUNC_4(VAR_10 + 9, "CCMP", 4) == 0)
  VAR_8->encr_type = VAR_4;
 else {
  FUNC_6(VAR_0, "EAP-WSC: Unknown new_encr");
  return -1;
 }

 VAR_10 = FUNC_5(VAR_9, "new_key=");
 if (VAR_10 == ((void*)0))
  return 0;
 VAR_10 += 8;
 VAR_11 = FUNC_2(VAR_10, ' ');
 if (VAR_11 == ((void*)0))
  VAR_12 = FUNC_3(VAR_10);
 else
  VAR_12 = VAR_11 - VAR_10;
 if ((VAR_12 & 1) || VAR_12 > 2 * sizeof(VAR_8->key) ||
     FUNC_0(VAR_10, VAR_8->key, VAR_12 / 2)) {
  FUNC_6(VAR_0, "EAP-WSC: Invalid new_key");
  return -1;
 }
 VAR_8->key_len = VAR_12 / 2;

 return 1;
}
