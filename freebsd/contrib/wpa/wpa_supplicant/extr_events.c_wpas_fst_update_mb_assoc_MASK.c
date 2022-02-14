
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assoc_info {int resp_ies_len; int beacon_ies_len; int const* beacon_ies; int const* resp_ies; } ;
union wpa_event_data {struct assoc_info assoc_info; } ;
typedef int u8 ;
struct wpa_supplicant {int * received_mb_ies; struct wpa_bss* current_bss; } ;
struct wpa_bss {int ie_len; int beacon_ie_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wpa_supplicant*,int const*,int) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1,
         union wpa_event_data *VAR_2)
{
}
