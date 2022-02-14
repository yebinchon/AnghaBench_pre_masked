
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct hostapd_hw_modes {int num_channels; TYPE_1__* channels; } ;
struct TYPE_2__ {int flag; scalar_t__ freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hostapd_hw_modes *VAR_4,
          u16 VAR_5, unsigned int VAR_6)
{
 u16 VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_4 || !VAR_5)
  return 1;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_4[VAR_7].num_channels; VAR_8++) {
   if ((unsigned int) VAR_4[VAR_7].channels[VAR_8].freq !=
       VAR_6)
    continue;
   VAR_9 = VAR_4[VAR_7].channels[VAR_8].flag;
   if (!(VAR_9 & (VAR_0 |
          VAR_1 |
          VAR_2)))
    return 1;
  }
 }

 FUNC_0(VAR_3, "DPP: Peer channel %u MHz not supported", VAR_6);
 return 0;
}
