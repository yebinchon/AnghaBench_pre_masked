
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_modes; TYPE_1__* modes; } ;
struct wpa_supplicant {TYPE_2__ hw; } ;
struct hostapd_channel_data {int flag; int chan; } ;
struct TYPE_3__ {int mode; int num_channels; struct hostapd_channel_data* channels; } ;


 int VAR_0 ;




 int FUNC_0 (char*,int,char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1,
           char *VAR_2, size_t VAR_3)
{
 struct hostapd_channel_data *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;

 VAR_8 = VAR_2;
 VAR_9 = VAR_8 + VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_1->hw.num_modes; VAR_7++) {
  switch (VAR_1->hw.modes[VAR_7].mode) {
  case 129:
   VAR_10 = "B";
   break;
  case 128:
   VAR_10 = "G";
   break;
  case 131:
   VAR_10 = "A";
   break;
  case 130:
   VAR_10 = "AD";
   break;
  default:
   continue;
  }
  VAR_5 = FUNC_0(VAR_8, VAR_9 - VAR_8, "Mode[%s] Channels:", VAR_10);
  if (FUNC_1(VAR_9 - VAR_8, VAR_5))
   return VAR_8 - VAR_2;
  VAR_8 += VAR_5;
  VAR_4 = VAR_1->hw.modes[VAR_7].channels;
  for (VAR_6 = 0; VAR_6 < VAR_1->hw.modes[VAR_7].num_channels; VAR_6++) {
   if (VAR_4[VAR_6].flag & VAR_0)
    continue;
   VAR_5 = FUNC_0(VAR_8, VAR_9 - VAR_8, " %d", VAR_4[VAR_6].chan);
   if (FUNC_1(VAR_9 - VAR_8, VAR_5))
    return VAR_8 - VAR_2;
   VAR_8 += VAR_5;
  }
  VAR_5 = FUNC_0(VAR_8, VAR_9 - VAR_8, "\n");
  if (FUNC_1(VAR_9 - VAR_8, VAR_5))
   return VAR_8 - VAR_2;
  VAR_8 += VAR_5;
 }

 return VAR_8 - VAR_2;
}
