
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct wpa_ssid {int frequency; } ;
struct hostapd_hw_modes {int mode; scalar_t__ vht_capab; } ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_1,
       const struct wpa_ssid *VAR_2)
{
 enum hostapd_hw_mode VAR_3;
 struct hostapd_hw_modes *VAR_4 = ((void*)0);
 u8 VAR_5;
 int VAR_6;

 VAR_3 = FUNC_0(VAR_2->frequency, &VAR_5);
 if (VAR_3 == VAR_0)
  return 0;
 for (VAR_6 = 0; VAR_1->hw.modes && VAR_6 < VAR_1->hw.num_modes; VAR_6++) {
  if (VAR_1->hw.modes[VAR_6].mode == VAR_3) {
   VAR_4 = &VAR_1->hw.modes[VAR_6];
   break;
  }
 }

 if (!VAR_4)
  return 0;

 return VAR_4->vht_capab != 0;
}
