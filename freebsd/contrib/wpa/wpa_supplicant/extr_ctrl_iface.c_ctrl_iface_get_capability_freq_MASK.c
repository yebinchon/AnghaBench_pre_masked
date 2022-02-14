
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_modes; TYPE_1__* modes; } ;
struct wpa_supplicant {TYPE_2__ hw; } ;
struct hostapd_channel_data {int flag; int freq; int chan; } ;
struct TYPE_3__ {int mode; int num_channels; struct hostapd_channel_data* channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (char*,int,char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_3,
       char *VAR_4, size_t VAR_5)
{
 struct hostapd_channel_data *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;

 VAR_10 = VAR_4;
 VAR_11 = VAR_10 + VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_3->hw.num_modes; VAR_9++) {
  switch (VAR_3->hw.modes[VAR_9].mode) {
  case 129:
   VAR_12 = "B";
   break;
  case 128:
   VAR_12 = "G";
   break;
  case 131:
   VAR_12 = "A";
   break;
  case 130:
   VAR_12 = "AD";
   break;
  default:
   continue;
  }
  VAR_7 = FUNC_0(VAR_10, VAR_11 - VAR_10, "Mode[%s] Channels:\n",
      VAR_12);
  if (FUNC_1(VAR_11 - VAR_10, VAR_7))
   return VAR_10 - VAR_4;
  VAR_10 += VAR_7;
  VAR_6 = VAR_3->hw.modes[VAR_9].channels;
  for (VAR_8 = 0; VAR_8 < VAR_3->hw.modes[VAR_9].num_channels; VAR_8++) {
   if (VAR_6[VAR_8].flag & VAR_0)
    continue;
   VAR_7 = FUNC_0(VAR_10, VAR_11 - VAR_10, " %d = %d MHz%s%s\n",
       VAR_6[VAR_8].chan, VAR_6[VAR_8].freq,
       VAR_6[VAR_8].flag & VAR_1 ?
       " (NO_IR)" : "",
       VAR_6[VAR_8].flag & VAR_2 ?
       " (DFS)" : "");

   if (FUNC_1(VAR_11 - VAR_10, VAR_7))
    return VAR_10 - VAR_4;
   VAR_10 += VAR_7;
  }
  VAR_7 = FUNC_0(VAR_10, VAR_11 - VAR_10, "\n");
  if (FUNC_1(VAR_11 - VAR_10, VAR_7))
   return VAR_10 - VAR_4;
  VAR_10 += VAR_7;
 }

 return VAR_10 - VAR_4;
}
