
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_ssid_value {int ssid_len; int ssid; } ;
typedef struct wpa_ssid_value u8 ;
struct TYPE_2__ {scalar_t__ prev_bssid_set; } ;
struct wpa_supplicant {size_t disallow_aps_bssid_count; size_t disallow_aps_ssid_count; scalar_t__ wpa_state; int reassociate; int own_disconnect_req; TYPE_1__ sme; int bssid; struct wpa_ssid* current_ssid; struct wpa_ssid_value* disallow_aps_ssid; struct wpa_ssid_value* disallow_aps_bssid; } ;
struct wpa_ssid {scalar_t__ mode; int ssid_len; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct wpa_supplicant*,int ) ;
 int FUNC_1 (struct wpa_supplicant*,int ,int ) ;
 scalar_t__ FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,struct wpa_ssid_value*) ;
 int FUNC_4 (struct wpa_ssid_value*) ;
 int FUNC_5 (struct wpa_ssid_value*,struct wpa_ssid_value*,int) ;
 struct wpa_ssid_value* FUNC_6 (struct wpa_ssid_value*,size_t,int) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int ,char*,struct wpa_ssid_value*,size_t) ;
 int FUNC_10 (int ,char*,int ,int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct wpa_supplicant*,int ) ;
 int FUNC_13 (struct wpa_supplicant*,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct wpa_supplicant *VAR_7, char *VAR_8)
{
 char *VAR_9;
 u8 VAR_10[VAR_0], *VAR_11 = ((void*)0), *VAR_12;
 struct wpa_ssid_value *VAR_13 = ((void*)0), *VAR_14;
 size_t VAR_15 = 0, VAR_16 = 0;
 struct wpa_ssid *VAR_17;







 VAR_9 = VAR_8;
 while (VAR_9) {
  if (*VAR_9 == '\0')
   break;
  if (FUNC_8(VAR_9, "bssid ", 6) == 0) {
   int VAR_18;
   VAR_9 += 6;
   VAR_18 = FUNC_3(VAR_9, VAR_10);
   if (VAR_18 < 0) {
    FUNC_4(VAR_13);
    FUNC_4(VAR_11);
    FUNC_11(VAR_1, "Invalid disallow_aps "
        "BSSID value '%s'", VAR_9);
    return -1;
   }
   VAR_9 += VAR_18;
   VAR_12 = FUNC_6(VAR_11, VAR_15 + 1, VAR_0);
   if (VAR_12 == ((void*)0)) {
    FUNC_4(VAR_13);
    FUNC_4(VAR_11);
    return -1;
   }
   VAR_11 = VAR_12;
   FUNC_5(VAR_11 + VAR_15 * VAR_0, VAR_10, VAR_0);
   VAR_15++;
  } else if (FUNC_8(VAR_9, "ssid ", 5) == 0) {
   char *VAR_19;
   VAR_9 += 5;

   VAR_19 = VAR_9;
   while (*VAR_19) {
    if (*VAR_19 == '\0' || *VAR_19 == ' ')
     break;
    VAR_19++;
   }

   VAR_14 = FUNC_6(VAR_13, VAR_16 + 1,
           sizeof(struct wpa_ssid_value));
   if (VAR_14 == ((void*)0)) {
    FUNC_4(VAR_13);
    FUNC_4(VAR_11);
    return -1;
   }
   VAR_13 = VAR_14;

   if ((VAR_19 - VAR_9) & 0x01 ||
       VAR_19 - VAR_9 > 2 * VAR_2 ||
       FUNC_2(VAR_9, VAR_13[VAR_16].ssid,
           (VAR_19 - VAR_9) / 2) < 0) {
    FUNC_4(VAR_13);
    FUNC_4(VAR_11);
    FUNC_11(VAR_1, "Invalid disallow_aps "
        "SSID value '%s'", VAR_9);
    return -1;
   }
   VAR_13[VAR_16].ssid_len = (VAR_19 - VAR_9) / 2;
   FUNC_10(VAR_1, "disallow_aps SSID",
       VAR_13[VAR_16].ssid,
       VAR_13[VAR_16].ssid_len);
   VAR_16++;
   VAR_9 = VAR_19;
  } else {
   FUNC_11(VAR_1, "Unexpected disallow_aps value "
       "'%s'", VAR_9);
   FUNC_4(VAR_13);
   FUNC_4(VAR_11);
   return -1;
  }

  VAR_9 = FUNC_7(VAR_9, ' ');
  if (VAR_9)
   VAR_9++;
 }

 FUNC_9(VAR_1, "disallow_aps_bssid", VAR_11, VAR_15 * VAR_0);
 FUNC_4(VAR_7->disallow_aps_bssid);
 VAR_7->disallow_aps_bssid = VAR_11;
 VAR_7->disallow_aps_bssid_count = VAR_15;

 FUNC_11(VAR_1, "disallow_aps_ssid_count %d", (int) VAR_16);
 FUNC_4(VAR_7->disallow_aps_ssid);
 VAR_7->disallow_aps_ssid = VAR_13;
 VAR_7->disallow_aps_ssid_count = VAR_16;

 if (!VAR_7->current_ssid || VAR_7->wpa_state < VAR_6)
  return 0;

 VAR_17 = VAR_7->current_ssid;
 if (VAR_17->mode != VAR_5 && VAR_17->mode != VAR_4)
  return 0;

 if (!FUNC_0(VAR_7, VAR_7->bssid) &&
     !FUNC_1(VAR_7, VAR_17->ssid, VAR_17->ssid_len))
  return 0;

 FUNC_11(VAR_1, "Disconnect and try to find another network "
     "because current AP was marked disallowed");




 VAR_7->reassociate = 1;
 VAR_7->own_disconnect_req = 1;
 FUNC_12(VAR_7, VAR_3);
 FUNC_13(VAR_7, 0, 0);

 return 0;
}
