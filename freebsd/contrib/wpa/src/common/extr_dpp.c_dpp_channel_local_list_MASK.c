
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct hostapd_hw_modes {int num_channels; TYPE_1__* channels; } ;
struct dpp_authentication {int num_freq; int* freq; } ;
struct TYPE_2__ {unsigned int freq; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct dpp_authentication *VAR_4,
      struct hostapd_hw_modes *VAR_5,
      u16 VAR_6)
{
 u16 VAR_7;
 int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_4->num_freq = 0;

 if (!VAR_5 || !VAR_6) {
  VAR_4->freq[0] = 2412;
  VAR_4->freq[1] = 2437;
  VAR_4->freq[2] = 2462;
  VAR_4->num_freq = 3;
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_5[VAR_7].num_channels; VAR_8++) {
   VAR_10 = VAR_5[VAR_7].channels[VAR_8].freq;
   VAR_9 = VAR_5[VAR_7].channels[VAR_8].flag;
   if (VAR_9 & (VAR_1 |
        VAR_2 |
        VAR_3))
    continue;
   if (FUNC_0(VAR_4->freq, VAR_4->num_freq, VAR_10))
    continue;
   VAR_4->freq[VAR_4->num_freq++] = VAR_10;
   if (VAR_4->num_freq == VAR_0) {
    VAR_7 = VAR_6;
    break;
   }
  }
 }

 return VAR_4->num_freq == 0 ? -1 : 0;
}
