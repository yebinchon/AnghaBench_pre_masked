
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_modes; int modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct wpa_driver_scan_params {int * freqs; } ;
struct hostapd_hw_modes {int num_channels; TYPE_2__* channels; } ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;
struct TYPE_4__ {int flag; int freq; } ;


 int VAR_0 ;
 struct hostapd_hw_modes* FUNC_0 (int ,int ,int) ;
 int * FUNC_1 (int,int) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1,
     enum hostapd_hw_mode VAR_2,
     struct wpa_driver_scan_params *VAR_3)
{

 struct hostapd_hw_modes *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_1->hw.modes, VAR_1->hw.num_modes, VAR_2);
 if (VAR_4 == ((void*)0)) {

  VAR_3->freqs = FUNC_2(sizeof(int));
  return;
 }

 VAR_3->freqs = FUNC_1(VAR_4->num_channels + 1, sizeof(int));
 if (VAR_3->freqs == ((void*)0))
  return;
 for (VAR_5 = 0, VAR_6 = 0; VAR_6 < VAR_4->num_channels; VAR_6++) {
  if (VAR_4->channels[VAR_6].flag & VAR_0)
   continue;
  VAR_3->freqs[VAR_5++] = VAR_4->channels[VAR_6].freq;
 }
}
