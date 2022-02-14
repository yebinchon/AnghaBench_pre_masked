
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_wpa_psk {int vlan_id; int group; struct hostapd_wpa_psk* next; int keyid; int psk; int addr; } ;
struct hostapd_ssid {struct hostapd_wpa_psk* wpa_psk; int ssid_len; int ssid; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct hostapd_wpa_psk*) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,char const*,int) ;
 int FUNC_12 (char*) ;
 struct hostapd_wpa_psk* FUNC_13 (int) ;
 int FUNC_14 (char*,int ,int ,int,int ,int ) ;
 char* FUNC_15 (char*,char*,char**) ;
 int FUNC_16 (int ,char*,...) ;

__attribute__((used)) static int FUNC_17(const char *VAR_3,
           struct hostapd_ssid *VAR_4)
{
 FILE *VAR_5;
 char VAR_6[128], *VAR_7;
 const char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 char *VAR_11;
 char *VAR_12;
 char *VAR_13;
 int VAR_14 = 0, VAR_15 = 0, VAR_16, VAR_17;
 u8 VAR_18[VAR_0];
 struct hostapd_wpa_psk *VAR_19;

 if (!VAR_3)
  return 0;

 VAR_5 = FUNC_3(VAR_3, "r");
 if (!VAR_5) {
  FUNC_16(VAR_1, "WPA PSK file '%s' not found.", VAR_3);
  return -1;
 }

 while (FUNC_2(VAR_6, sizeof(VAR_6), VAR_5)) {
  int VAR_20 = 0;

  VAR_14++;

  if (VAR_6[0] == '#')
   continue;
  VAR_7 = VAR_6;
  while (*VAR_7 != '\0') {
   if (*VAR_7 == '\n') {
    *VAR_7 = '\0';
    break;
   }
   VAR_7++;
  }
  if (VAR_6[0] == '\0')
   continue;

  VAR_9 = ((void*)0);
  VAR_8 = ((void*)0);
  while ((VAR_11 = FUNC_15(VAR_6, " ", &VAR_9))) {
   if (!FUNC_9(VAR_11, '='))
    break;
   VAR_10 = ((void*)0);
   VAR_12 = FUNC_15(VAR_11, "=", &VAR_10);
   if (!VAR_12)
    break;
   VAR_13 = FUNC_15(VAR_11, "", &VAR_10);
   if (!VAR_13)
    VAR_13 = "";
   if (!FUNC_10(VAR_12, "keyid")) {
    VAR_8 = VAR_13;
   } else if (!FUNC_10(VAR_12, "vlanid")) {
    VAR_20 = FUNC_0(VAR_13);
   } else {
    FUNC_16(VAR_1,
        "Unrecognized '%s=%s' on line %d in '%s'",
        VAR_12, VAR_13, VAR_14, VAR_3);
    VAR_15 = -1;
    break;
   }
  }

  if (VAR_15 == -1)
   break;

  if (!VAR_11)
   VAR_11 = "";
  if (FUNC_5(VAR_11, VAR_18)) {
   FUNC_16(VAR_1, "Invalid MAC address '%s' on "
       "line %d in '%s'", VAR_11, VAR_14, VAR_3);
   VAR_15 = -1;
   break;
  }

  VAR_19 = FUNC_13(sizeof(*VAR_19));
  if (VAR_19 == ((void*)0)) {
   FUNC_16(VAR_1, "WPA PSK allocation failed");
   VAR_15 = -1;
   break;
  }
  VAR_19->vlan_id = VAR_20;
  if (FUNC_6(VAR_18))
   VAR_19->group = 1;
  else
   FUNC_8(VAR_19->addr, VAR_18, VAR_0);

  VAR_7 = FUNC_15(VAR_6, "", &VAR_9);
  if (!VAR_7) {
   FUNC_16(VAR_1, "No PSK on line %d in '%s'",
       VAR_14, VAR_3);
   FUNC_7(VAR_19);
   VAR_15 = -1;
   break;
  }

  VAR_17 = 0;
  VAR_16 = FUNC_12(VAR_7);
  if (VAR_16 == 64 && FUNC_4(VAR_7, VAR_19->psk, VAR_2) == 0)
   VAR_17 = 1;
  else if (VAR_16 >= 8 && VAR_16 < 64) {
   FUNC_14(VAR_7, VAR_4->ssid, VAR_4->ssid_len,
        4096, VAR_19->psk, VAR_2);
   VAR_17 = 1;
  }
  if (!VAR_17) {
   FUNC_16(VAR_1, "Invalid PSK '%s' on line %d in "
       "'%s'", VAR_7, VAR_14, VAR_3);
   FUNC_7(VAR_19);
   VAR_15 = -1;
   break;
  }

  if (VAR_8) {
   VAR_16 = FUNC_11(VAR_19->keyid, VAR_8, sizeof(VAR_19->keyid));
   if ((size_t) VAR_16 >= sizeof(VAR_19->keyid)) {
    FUNC_16(VAR_1,
        "PSK keyid too long on line %d in '%s'",
        VAR_14, VAR_3);
    FUNC_7(VAR_19);
    VAR_15 = -1;
    break;
   }
  }

  VAR_19->next = VAR_4->wpa_psk;
  VAR_4->wpa_psk = VAR_19;
 }

 FUNC_1(VAR_5);

 return VAR_15;
}
