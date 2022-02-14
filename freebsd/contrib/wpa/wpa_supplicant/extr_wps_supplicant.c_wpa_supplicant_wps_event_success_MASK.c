
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int wps_success; int bssid; scalar_t__ extra_blacklist_count; scalar_t__ current_ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_2 (struct wpa_supplicant*,scalar_t__,int) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct wpa_supplicant *VAR_3)
{
 FUNC_1(VAR_3, VAR_0, VAR_1);
 VAR_3->wps_success = 1;
 FUNC_3(VAR_3);
 if (VAR_3->current_ssid)
  FUNC_2(VAR_3, VAR_3->current_ssid, 1);
 VAR_3->extra_blacklist_count = 0;






 FUNC_0(10, 0, VAR_2, VAR_3,
          ((void*)0));

 FUNC_4(VAR_3, VAR_3->bssid, 0);
}
