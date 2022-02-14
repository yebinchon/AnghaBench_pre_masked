
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int val ;
typedef char u8 ;
typedef int u16 ;
struct wpa_supplicant {int wps_ap_iter; scalar_t__ wps_fragment_size; TYPE_1__* go_params; scalar_t__ ap_iface; } ;
struct TYPE_4__ {scalar_t__ fragment_size; } ;
struct wpa_ssid {int temporary; int p2p_group; int pbss; char* ssid; size_t ssid_len; TYPE_2__ eap; } ;
typedef int hash ;
struct TYPE_3__ {int ssid_len; char* ssid; int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,struct wpa_supplicant*,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,int,char*,...) ;
 char* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct wpa_ssid*,char*,char*,int ) ;
 int FUNC_8 (int ,char*,char*,int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (char*,int,char const*,int) ;
 int FUNC_11 (struct wpa_supplicant*) ;
 struct wpa_ssid* FUNC_12 (struct wpa_supplicant*,int ,char const*,char const*) ;
 int FUNC_13 (struct wpa_supplicant*,struct wpa_ssid*,char const*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_14 (unsigned int*) ;

__attribute__((used)) static int FUNC_15(struct wpa_supplicant *VAR_5,
     const u8 *VAR_6, const u8 *VAR_7,
     const char *VAR_8, int VAR_9, u16 VAR_10,
     const u8 *VAR_11,
     const u8 *VAR_12, size_t VAR_13, int VAR_14)
{
 struct wpa_ssid *VAR_15;
 char VAR_16[128 + 2 * VAR_2];
 unsigned int VAR_17 = 0;
 char VAR_18[2 * VAR_2 + 10];
 FUNC_11(VAR_5);
 if (VAR_7 && FUNC_1(VAR_7))
  VAR_7 = ((void*)0);
 VAR_15 = FUNC_12(VAR_5, 0, VAR_6, VAR_7);
 if (VAR_15 == ((void*)0)) {
  FUNC_9(VAR_1, "WPS: Could not add network");
  return -1;
 }
 VAR_15->temporary = 1;
 VAR_15->p2p_group = VAR_9;





 if (!VAR_9)
  VAR_15->pbss = 2;
 if (VAR_12) {
  VAR_15->ssid = FUNC_3(VAR_13);
  if (VAR_15->ssid) {
   FUNC_4(VAR_15->ssid, VAR_12, VAR_13);
   VAR_15->ssid_len = VAR_13;
  }
 }
 if (VAR_11) {
  FUNC_4(VAR_18, " pkhash=", 8);
  FUNC_10(VAR_18 + 8, sizeof(VAR_18) - 8,
        VAR_11,
        VAR_2);
 } else {
  VAR_18[0] = '\0';
 }
 if (VAR_8)
  FUNC_5(VAR_16, sizeof(VAR_16), "\"pin=%s dev_pw_id=%u%s\"",
       VAR_8, VAR_10, VAR_18);
 else if (VAR_8 == ((void*)0) && VAR_10 == VAR_0) {
  FUNC_5(VAR_16, sizeof(VAR_16), "\"dev_pw_id=%u%s\"",
       VAR_10, VAR_18);
 } else {
  if (FUNC_14(&VAR_17) < 0) {
   FUNC_9(VAR_1, "WPS: Could not generate PIN");
   return -1;
  }
  FUNC_5(VAR_16, sizeof(VAR_16), "\"pin=%08d dev_pw_id=%u%s\"",
       VAR_17, VAR_10, VAR_18);
 }
 if (FUNC_7(VAR_15, "phase1", VAR_16, 0) < 0) {
  FUNC_9(VAR_1, "WPS: Failed to set phase1 '%s'", VAR_16);
  return -1;
 }
 if (VAR_5->wps_fragment_size)
  VAR_15->eap.fragment_size = VAR_5->wps_fragment_size;
 FUNC_0(VAR_3, 0, VAR_4,
          VAR_5, ((void*)0));
 VAR_5->wps_ap_iter = 1;
 FUNC_13(VAR_5, VAR_15, VAR_7, VAR_14);
 return VAR_17;
}
