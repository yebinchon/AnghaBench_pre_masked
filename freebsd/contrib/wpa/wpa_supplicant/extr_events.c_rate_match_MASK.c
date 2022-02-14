
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct wpa_bss {scalar_t__ freq; } ;
struct hostapd_hw_modes {int num_channels; scalar_t__ mode; int num_rates; int* rates; TYPE_2__* channels; } ;
typedef int scan_ie ;
struct TYPE_4__ {int freq; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (struct hostapd_hw_modes const*) ;
 int FUNC_1 (struct hostapd_hw_modes const*) ;
 int* FUNC_2 (struct wpa_bss*,int const) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_6, struct wpa_bss *VAR_7,
        int VAR_8)
{
 const struct hostapd_hw_modes *VAR_9 = ((void*)0), *VAR_10;
 const u8 VAR_11[2] = { VAR_5, VAR_4 };
 const u8 *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 if (VAR_7->freq == 0)
  return 1;

 VAR_10 = VAR_6->hw.modes;
 if (VAR_10 == ((void*)0)) {





  return 1;
 }

 for (VAR_13 = 0; VAR_13 < VAR_6->hw.num_modes; VAR_13++) {
  for (VAR_14 = 0; VAR_14 < VAR_10[VAR_13].num_channels; VAR_14++) {
   int VAR_16 = VAR_10[VAR_13].channels[VAR_14].freq;
   if (VAR_16 == VAR_7->freq) {
    if (VAR_9 &&
        VAR_9->mode == VAR_2)
     break;

    VAR_9 = &VAR_10[VAR_13];
    break;
   }
  }
 }

 if (VAR_9 == ((void*)0))
  return 0;

 for (VAR_13 = 0; VAR_13 < (int) sizeof(VAR_11); VAR_13++) {
  VAR_12 = FUNC_2(VAR_7, VAR_11[VAR_13]);
  if (VAR_12 == ((void*)0))
   continue;

  for (VAR_14 = 2; VAR_14 < VAR_12[1] + 2; VAR_14++) {
   int VAR_17 = !!(VAR_12[VAR_14] & 0x80);
   int VAR_18 = (VAR_12[VAR_14] & 0x7f) * 5;
   if (VAR_17 && ((VAR_12[VAR_14] & 0x7f) ==
     VAR_0)) {
    if (!FUNC_0(VAR_9)) {
     if (VAR_8)
      FUNC_3(VAR_6, VAR_3,
       "   hardware does not support HT PHY");
     return 0;
    }
    continue;
   }


   if (VAR_17 && ((VAR_12[VAR_14] & 0x7f) ==
     VAR_1)) {
    if (!FUNC_1(VAR_9)) {
     if (VAR_8)
      FUNC_3(VAR_6, VAR_3,
       "   hardware does not support VHT PHY");
     return 0;
    }
    continue;
   }

   if (!VAR_17)
    continue;


   for (VAR_15 = 0; VAR_15 < VAR_9->num_rates; VAR_15++) {
    if (VAR_9->rates[VAR_15] == VAR_18)
     break;
   }
   if (VAR_15 == VAR_9->num_rates) {





    if (VAR_8)
     FUNC_3(VAR_6, VAR_3,
      "   hardware does not support required rate %d.%d Mbps (freq=%d mode==%d num_rates=%d)",
      VAR_18 / 10, VAR_18 % 10,
      VAR_7->freq, VAR_9->mode, VAR_9->num_rates);
    return 0;
   }
  }
 }

 return 1;
}
