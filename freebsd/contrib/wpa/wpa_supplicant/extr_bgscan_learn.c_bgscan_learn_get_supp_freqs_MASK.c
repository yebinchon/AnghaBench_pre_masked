
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct hostapd_hw_modes {int num_channels; TYPE_2__* channels; } ;
struct TYPE_4__ {int flag; int freq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int) ;
 int* FUNC_1 (int*,size_t,int) ;

__attribute__((used)) static int * FUNC_2(struct wpa_supplicant *VAR_1)
{
 struct hostapd_hw_modes *VAR_2;
 int VAR_3, VAR_4, *VAR_5 = ((void*)0), *VAR_6;
 size_t VAR_7 = 0;

 VAR_2 = VAR_1->hw.modes;
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1->hw.num_modes; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_2[VAR_3].num_channels; VAR_4++) {
   if (VAR_2[VAR_3].channels[VAR_4].flag & VAR_0)
    continue;

   if (FUNC_0(VAR_5, VAR_2[VAR_3].channels[VAR_4].freq))
    continue;
   VAR_6 = FUNC_1(VAR_5, VAR_7 + 2, sizeof(int));
   if (VAR_6 == ((void*)0))
    continue;

   VAR_5 = VAR_6;
   VAR_5[VAR_7] = VAR_2[VAR_3].channels[VAR_4].freq;
   VAR_7++;
   VAR_5[VAR_7] = 0;
  }
 }

 return VAR_5;
}
