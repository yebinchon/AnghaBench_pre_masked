
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hostapd_hw_modes {int num_channels; TYPE_1__* channels; } ;
struct TYPE_2__ {int freq; int flag; } ;


 int VAR_0 ;

int FUNC_0(int VAR_1, const struct hostapd_hw_modes *VAR_2,
       u16 VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_2 || !VAR_3)
  return (VAR_1 >= 5260 && VAR_1 <= 5320) ||
   (VAR_1 >= 5500 && VAR_1 <= 5700);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_2[VAR_4].num_channels; VAR_5++) {
   if (VAR_2[VAR_4].channels[VAR_5].freq == VAR_1 &&
       (VAR_2[VAR_4].channels[VAR_5].flag & VAR_0))
    return 1;
  }
 }

 return 0;
}
