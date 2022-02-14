
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {size_t num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct wpa_freq_range_list {int range; } ;
struct hostapd_hw_modes {int num_channels; TYPE_2__* channels; } ;
typedef int ranges ;
struct TYPE_4__ {int flag; unsigned int freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_freq_range_list*,unsigned int) ;
 scalar_t__ FUNC_1 (struct wpa_freq_range_list*,char*) ;
 int FUNC_2 (int**,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wpa_freq_range_list*,int ,int) ;

__attribute__((used)) static int * FUNC_5(struct wpa_supplicant *VAR_1, char *VAR_2)
{
 struct wpa_freq_range_list VAR_3;
 int *VAR_4 = ((void*)0);
 struct hostapd_hw_modes *VAR_5;
 u16 VAR_6;

 if (VAR_1->hw.modes == ((void*)0))
  return ((void*)0);

 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_1(&VAR_3, VAR_2) < 0)
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_1->hw.num_modes; VAR_6++) {
  int VAR_7;

  VAR_5 = &VAR_1->hw.modes[VAR_6];
  for (VAR_7 = 0; VAR_7 < VAR_5->num_channels; VAR_7++) {
   unsigned int VAR_8;

   if (VAR_5->channels[VAR_7].flag & VAR_0)
    continue;

   VAR_8 = VAR_5->channels[VAR_7].freq;
   if (!FUNC_0(&VAR_3, VAR_8))
    continue;

   FUNC_2(&VAR_4, VAR_8);
  }
 }

 FUNC_3(VAR_3.range);
 return VAR_4;
}
