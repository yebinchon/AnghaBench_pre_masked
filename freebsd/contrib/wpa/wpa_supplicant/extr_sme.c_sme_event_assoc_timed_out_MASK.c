
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union wpa_event_data {int dummy; } wpa_event_data ;
struct wpa_supplicant {int pending_bssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int ) ;

void FUNC_3(struct wpa_supplicant *VAR_1,
          union wpa_event_data *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, "SME: Association timed out");
 FUNC_2(VAR_1, VAR_1->pending_bssid);
 FUNC_1(VAR_1);
}
