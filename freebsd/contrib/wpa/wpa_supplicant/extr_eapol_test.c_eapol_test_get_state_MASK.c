
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int wpa_state; } ;
struct eapol_test_data {struct wpa_supplicant* wpa_s; } ;
typedef enum wpa_states { ____Placeholder_wpa_states } wpa_states ;



__attribute__((used)) static enum wpa_states FUNC_0(void *VAR_0)
{
 struct eapol_test_data *VAR_1 = VAR_0;
 struct wpa_supplicant *VAR_2 = VAR_1->wpa_s;

 return VAR_2->wpa_state;
}
