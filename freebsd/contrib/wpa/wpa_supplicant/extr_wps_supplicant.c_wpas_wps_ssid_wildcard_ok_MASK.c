
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {scalar_t__ scan_runs; int own_addr; } ;
struct wpa_ssid {int bssid; scalar_t__ bssid_set; int eap; } ;
struct wpa_bss {scalar_t__ beacon_ie_len; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 struct wpabuf* FUNC_3 (struct wpa_bss*,int ) ;
 struct wpabuf* FUNC_4 (struct wpa_bss*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*,int ,int) ;
 scalar_t__ FUNC_8 (struct wpabuf*) ;
 scalar_t__ FUNC_9 (struct wpabuf*) ;
 scalar_t__ FUNC_10 (struct wpabuf*,int,int ) ;

int FUNC_11(struct wpa_supplicant *VAR_4,
         struct wpa_ssid *VAR_5,
         struct wpa_bss *VAR_6)
{
 struct wpabuf *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (FUNC_0(&VAR_5->eap)) {
  VAR_7 = FUNC_3(VAR_6, VAR_2);
  if (VAR_7 && FUNC_8(VAR_7)) {

   VAR_8 = 1;
  }
 } else if (FUNC_1(&VAR_5->eap)) {
  VAR_7 = FUNC_3(VAR_6, VAR_2);
  if (VAR_7 &&
      (FUNC_7(VAR_7, VAR_4->own_addr, 1) ||
       VAR_4->scan_runs >= VAR_3)) {

   VAR_8 = 1;
  }
 }

 if (!VAR_8 && VAR_5->bssid_set &&
     FUNC_2(VAR_5->bssid, VAR_6->bssid, VAR_0) == 0) {

  VAR_8 = 1;
 }
 FUNC_6(VAR_7);

 return VAR_8;
}
