
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int reassociate; int disconnected; int current_ssid; } ;
struct wpa_ssid {int disabled; scalar_t__ owe_transition_bss_select_count; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpa_ssid*,int) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_0,
           struct wpa_ssid *VAR_1)
{
 if (!VAR_1 || !VAR_1->disabled || VAR_1->disabled == 2)
  return;

 VAR_1->disabled = 0;
 VAR_1->owe_transition_bss_select_count = 0;
 FUNC_0(VAR_0, VAR_1, 1);
 FUNC_1(VAR_0, VAR_1);





 if (!VAR_0->current_ssid && !VAR_0->disconnected)
  VAR_0->reassociate = 1;
}
