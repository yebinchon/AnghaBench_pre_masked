
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hostapd_hw_modes {int num_channels; TYPE_1__* channels; } ;
typedef enum chan_allowed { ____Placeholder_chan_allowed } chan_allowed ;
struct TYPE_2__ {scalar_t__ chan; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum chan_allowed FUNC_0(struct hostapd_hw_modes *VAR_5, u8 VAR_6,
           unsigned int *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_channels; VAR_8++) {
  if (VAR_5->channels[VAR_8].chan == VAR_6)
   break;
 }

 if (VAR_8 == VAR_5->num_channels ||
     (VAR_5->channels[VAR_8].flag & VAR_1))
  return VAR_3;

 if (VAR_7)
  *VAR_7 = VAR_5->channels[VAR_8].flag;

 if (VAR_5->channels[VAR_8].flag & VAR_2)
  return VAR_4;

 return VAR_0;
}
