
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int freq; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_0(struct hostapd_hw_modes *VAR_12, int VAR_13,
     int VAR_14, int VAR_15)
{
 int VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_12->num_channels; VAR_16++) {
  struct hostapd_channel_data *VAR_17 = &VAR_12->channels[VAR_16];
  if (VAR_17->freq - 10 >= VAR_13 && VAR_17->freq + 70 <= VAR_14)
   VAR_17->flag |= VAR_1;

  if (VAR_17->freq - 30 >= VAR_13 && VAR_17->freq + 50 <= VAR_14)
   VAR_17->flag |= VAR_6;

  if (VAR_17->freq - 50 >= VAR_13 && VAR_17->freq + 30 <= VAR_14)
   VAR_17->flag |= VAR_8;

  if (VAR_17->freq - 70 >= VAR_13 && VAR_17->freq + 10 <= VAR_14)
   VAR_17->flag |= VAR_9;

  if (VAR_15 >= 160) {
   if (VAR_17->freq - 10 >= VAR_13 && VAR_17->freq + 150 <= VAR_14)
    VAR_17->flag |= VAR_0;

   if (VAR_17->freq - 30 >= VAR_13 && VAR_17->freq + 130 <= VAR_14)
    VAR_17->flag |= VAR_5;

   if (VAR_17->freq - 50 >= VAR_13 && VAR_17->freq + 110 <= VAR_14)
    VAR_17->flag |= VAR_7;

   if (VAR_17->freq - 70 >= VAR_13 && VAR_17->freq + 90 <= VAR_14)
    VAR_17->flag |= VAR_10;

   if (VAR_17->freq - 90 >= VAR_13 && VAR_17->freq + 70 <= VAR_14)
    VAR_17->flag |= VAR_11;

   if (VAR_17->freq - 110 >= VAR_13 && VAR_17->freq + 50 <= VAR_14)
    VAR_17->flag |= VAR_2;

   if (VAR_17->freq - 130 >= VAR_13 && VAR_17->freq + 30 <= VAR_14)
    VAR_17->flag |= VAR_3;

   if (VAR_17->freq - 150 >= VAR_13 && VAR_17->freq + 10 <= VAR_14)
    VAR_17->flag |= VAR_4;
  }
 }
}
