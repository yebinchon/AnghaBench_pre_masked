
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hostapd_freq_params {int mode; int freq; int channel; int ht_enabled; int vht_enabled; int he_enabled; int sec_channel_offset; int center_freq1; int center_freq2; int bandwidth; } ;
struct he_capabilities {int dummy; } ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_freq_params*,int ,int) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct hostapd_freq_params *VAR_3,
       enum hostapd_hw_mode VAR_4,
       int VAR_5, int VAR_6, int VAR_7,
       int VAR_8, int VAR_9,
       int VAR_10,
       int VAR_11, int VAR_12,
       int VAR_13, u32 VAR_14,
       struct he_capabilities *VAR_15)
{
 if (!VAR_15)
  VAR_9 = 0;
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->mode = VAR_4;
 VAR_3->freq = VAR_5;
 VAR_3->channel = VAR_6;
 VAR_3->ht_enabled = VAR_7;
 VAR_3->vht_enabled = VAR_8;
 VAR_3->he_enabled = VAR_9;
 VAR_3->sec_channel_offset = VAR_10;
 VAR_3->center_freq1 = VAR_5 + VAR_10 * 10;
 VAR_3->center_freq2 = 0;
 VAR_3->bandwidth = VAR_10 ? 40 : 20;

 if (VAR_3->vht_enabled) switch (VAR_11) {
 case 128:
  if (VAR_13 ||
      (VAR_12 != 0 &&
       5000 + VAR_12 * 5 != VAR_3->center_freq1 &&
       2407 + VAR_12 * 5 != VAR_3->center_freq1))
   return -1;
  break;
 case 129:
  if (!(VAR_14 & VAR_2)) {
   FUNC_1(VAR_0,
       "80+80 channel width is not supported!");
   return -1;
  }
  if (VAR_13 == VAR_12 + 4 ||
      VAR_13 == VAR_12 - 4)
   return -1;
  VAR_3->center_freq2 = 5000 + VAR_13 * 5;

 case 130:
  VAR_3->bandwidth = 80;
  if ((VAR_11 == 130 &&
       VAR_13) ||
      (VAR_11 == 129 &&
       !VAR_13) ||
      !VAR_10)
   return -1;
  if (!VAR_12) {
   if (VAR_6 <= 48)
    VAR_12 = 42;
   else if (VAR_6 <= 64)
    VAR_12 = 58;
   else if (VAR_6 <= 112)
    VAR_12 = 106;
   else if (VAR_6 <= 128)
    VAR_12 = 122;
   else if (VAR_6 <= 144)
    VAR_12 = 138;
   else if (VAR_6 <= 161)
    VAR_12 = 155;
   VAR_3->center_freq1 = 5000 + VAR_12 * 5;
  } else {





   if (VAR_12 == VAR_6 + 6 ||
       VAR_12 == VAR_6 + 2 ||
       VAR_12 == VAR_6 - 2 ||
       VAR_12 == VAR_6 - 6)
    VAR_3->center_freq1 = 5000 + VAR_12 * 5;
   else
    return -1;
  }
  break;
 case 131:
  VAR_3->bandwidth = 160;
  if (!(VAR_14 & (VAR_1 |
      VAR_2))) {
   FUNC_1(VAR_0,
       "160MHZ channel width is not supported!");
   return -1;
  }
  if (VAR_13)
   return -1;
  if (!VAR_10)
   return -1;




  if (VAR_12 == VAR_6 + 14 ||
      VAR_12 == VAR_6 + 10 ||
      VAR_12 == VAR_6 + 6 ||
      VAR_12 == VAR_6 + 2 ||
      VAR_12 == VAR_6 - 2 ||
      VAR_12 == VAR_6 - 6 ||
      VAR_12 == VAR_6 - 10 ||
      VAR_12 == VAR_6 - 14)
   VAR_3->center_freq1 = 5000 + VAR_12 * 5;
  else
   return -1;
  break;
 }

 return 0;
}
