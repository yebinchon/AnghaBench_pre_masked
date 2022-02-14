
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_global {int dummy; } ;
struct hostapd_hw_modes {scalar_t__ mode; int num_channels; TYPE_1__* channels; } ;
struct TYPE_2__ {int chan; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct wpa_global*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct wpa_global *VAR_7,
         struct hostapd_hw_modes *VAR_8, u8 VAR_9, int *VAR_10)
{
 int VAR_11;
 unsigned int VAR_12;

 VAR_12 = (VAR_8->mode == VAR_4 ? 5000 : 2407) +
  VAR_9 * 5;
 if (FUNC_0(VAR_7, VAR_12))
  return VAR_5;

 for (VAR_11 = 0; VAR_11 < VAR_8->num_channels; VAR_11++) {
  if (VAR_8->channels[VAR_11].chan == VAR_9) {
   if (VAR_10)
    *VAR_10 = VAR_8->channels[VAR_11].flag;
   if (VAR_8->channels[VAR_11].flag &
       (VAR_1 |
        VAR_3))
    return VAR_5;
   if (VAR_8->channels[VAR_11].flag & VAR_2)
    return VAR_6;
   return VAR_0;
  }
 }

 return VAR_5;
}
