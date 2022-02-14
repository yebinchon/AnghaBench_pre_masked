
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union wpa_event_data {int dummy; } wpa_event_data ;
struct wpa_supplicant {struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union wpa_event_data*,int ,int) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,union wpa_event_data*) ;
 struct wpa_ssid* FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 int FUNC_5 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_6(struct wpa_supplicant *VAR_2)
{
 struct wpa_ssid *VAR_3;
 union wpa_event_data VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
  return;

 if (VAR_2->current_ssid == ((void*)0)) {
  VAR_2->current_ssid = VAR_3;
  FUNC_5(VAR_2);
 }
 FUNC_4(VAR_2);
 FUNC_1(VAR_2, VAR_1, "Already associated with a configured "
  "network - generating associated event");
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(VAR_2, VAR_0, &VAR_4);
}
