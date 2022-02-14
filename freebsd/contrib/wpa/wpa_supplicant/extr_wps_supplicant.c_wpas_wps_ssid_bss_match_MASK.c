
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {scalar_t__ scan_runs; int wps_pin_start_time; int own_addr; } ;
struct wpa_ssid {int key_mgmt; int eap; } ;
struct wpa_bss {int dummy; } ;
struct os_reltime {scalar_t__ sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct os_reltime*) ;
 struct wpabuf* FUNC_3 (struct wpa_bss*,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int ,int) ;
 int FUNC_7 (struct wpabuf*) ;

int FUNC_8(struct wpa_supplicant *VAR_5,
       struct wpa_ssid *VAR_6, struct wpa_bss *VAR_7)
{
 struct wpabuf *VAR_8;

 if (!(VAR_6->key_mgmt & VAR_1))
  return -1;

 VAR_8 = FUNC_3(VAR_7, VAR_2);
 if (FUNC_0(&VAR_6->eap)) {
  if (!VAR_8) {
   FUNC_4(VAR_0, "   skip - non-WPS AP");
   return 0;
  }

  if (!FUNC_7(VAR_8)) {
   FUNC_4(VAR_0, "   skip - WPS AP "
       "without active PBC Registrar");
   FUNC_5(VAR_8);
   return 0;
  }


  FUNC_4(VAR_0, "   selected based on WPS IE "
      "(Active PBC)");
  FUNC_5(VAR_8);
  return 1;
 }

 if (FUNC_1(&VAR_6->eap)) {
  if (!VAR_8) {
   FUNC_4(VAR_0, "   skip - non-WPS AP");
   return 0;
  }
  if (!FUNC_6(VAR_8, VAR_5->own_addr, 1)) {
   struct os_reltime VAR_9;

   FUNC_2(&VAR_5->wps_pin_start_time, &VAR_9);

   if (VAR_5->scan_runs < VAR_3 ||
       VAR_9.sec < VAR_4) {
    FUNC_4(VAR_0,
        "   skip - WPS AP without active PIN Registrar (scan_runs=%d age=%d)",
        VAR_5->scan_runs, (int) VAR_9.sec);
    FUNC_5(VAR_8);
    return 0;
   }
   FUNC_4(VAR_0, "   selected based on WPS IE");
  } else {
   FUNC_4(VAR_0, "   selected based on WPS IE "
       "(Authorized MAC or Active PIN)");
  }
  FUNC_5(VAR_8);
  return 1;
 }

 if (VAR_8) {
  FUNC_4(VAR_0, "   selected based on WPS IE");
  FUNC_5(VAR_8);
  return 1;
 }

 return -1;
}
