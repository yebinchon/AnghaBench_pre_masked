
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_credential {size_t ssid_len; size_t key_len; int key; void* encr_type; int auth_type; int ssid; } ;
struct hostapd_data {TYPE_1__* wps; } ;
typedef int cred ;
struct TYPE_2__ {int registrar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (char const*,int ,size_t) ;
 int FUNC_1 (struct wps_credential*,int ,int) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (int ,struct wps_credential*) ;

int FUNC_5(struct hostapd_data *VAR_6, const char *VAR_7,
     const char *VAR_8, const char *VAR_9, const char *VAR_10)
{
 struct wps_credential VAR_11;
 size_t VAR_12;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));

 VAR_12 = FUNC_2(VAR_7);
 if ((VAR_12 & 1) || VAR_12 > 2 * sizeof(VAR_11.ssid) ||
     FUNC_0(VAR_7, VAR_11.ssid, VAR_12 / 2))
  return -1;
 VAR_11.ssid_len = VAR_12 / 2;

 if (FUNC_3(VAR_8, "OPEN", 4) == 0)
  VAR_11.auth_type = VAR_0;
 else if (FUNC_3(VAR_8, "WPAPSK", 6) == 0)
  VAR_11.auth_type = VAR_2;
 else if (FUNC_3(VAR_8, "WPA2PSK", 7) == 0)
  VAR_11.auth_type = VAR_1;
 else
  return -1;

 if (VAR_9) {
  if (FUNC_3(VAR_9, "NONE", 4) == 0)
   VAR_11.encr_type = VAR_4;
  else if (FUNC_3(VAR_9, "TKIP", 4) == 0)
   VAR_11.encr_type = VAR_5;
  else if (FUNC_3(VAR_9, "CCMP", 4) == 0)
   VAR_11.encr_type = VAR_3;
  else
   return -1;
 } else
  VAR_11.encr_type = VAR_4;

 if (VAR_10) {
  VAR_12 = FUNC_2(VAR_10);
  if ((VAR_12 & 1) || VAR_12 > 2 * sizeof(VAR_11.key) ||
      FUNC_0(VAR_10, VAR_11.key, VAR_12 / 2))
   return -1;
  VAR_11.key_len = VAR_12 / 2;
 }

 return FUNC_4(VAR_6->wps->registrar, &VAR_11);
}
