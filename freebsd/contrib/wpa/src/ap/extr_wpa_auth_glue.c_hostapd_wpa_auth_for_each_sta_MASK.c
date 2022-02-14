
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {struct wpa_state_machine* wpa_sm; struct sta_info* next; } ;
struct hostapd_data {struct sta_info* sta_list; } ;



__attribute__((used)) static int FUNC_0(
 void *VAR_0, int (*VAR_1)(struct wpa_state_machine *VAR_2, void *VAR_3),
 void *VAR_4)
{
 struct hostapd_data *VAR_5 = VAR_0;
 struct sta_info *VAR_6;

 for (VAR_6 = VAR_5->sta_list; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->wpa_sm && VAR_1(VAR_6->wpa_sm, VAR_4))
   return 1;
 }
 return 0;
}
