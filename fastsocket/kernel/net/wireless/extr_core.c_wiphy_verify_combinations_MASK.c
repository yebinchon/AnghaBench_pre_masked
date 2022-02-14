
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct wiphy {int n_iface_combinations; int software_iftypes; int interface_modes; struct ieee80211_iface_combination* iface_combinations; } ;
struct ieee80211_iface_combination {int max_interfaces; int num_different_channels; int n_limits; TYPE_1__* limits; scalar_t__ radar_detect_widths; } ;
struct TYPE_2__ {int types; int max; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_3)
{
 const struct ieee80211_iface_combination *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->n_iface_combinations; VAR_5++) {
  u32 VAR_7 = 0;
  u16 VAR_8 = 0;

  VAR_4 = &VAR_3->iface_combinations[VAR_5];





  if (FUNC_1((VAR_4->max_interfaces < 2) && !VAR_4->radar_detect_widths))
   return -VAR_1;


  if (FUNC_1(!VAR_4->num_different_channels))
   return -VAR_1;





  if (FUNC_1(VAR_4->num_different_channels >
    VAR_0))
   return -VAR_1;


  if (FUNC_1(VAR_4->radar_detect_widths &&
       (VAR_4->num_different_channels > 1)))
   return -VAR_1;

  if (FUNC_1(!VAR_4->n_limits))
   return -VAR_1;

  for (VAR_6 = 0; VAR_6 < VAR_4->n_limits; VAR_6++) {
   u16 VAR_9 = VAR_4->limits[VAR_6].types;





   if (FUNC_1(VAR_9 & VAR_8))
    return -VAR_1;
   VAR_8 |= VAR_9;

   if (FUNC_1(!VAR_4->limits[VAR_6].max))
    return -VAR_1;


   if (FUNC_1(VAR_3->software_iftypes & VAR_9))
    return -VAR_1;


   if (FUNC_1(VAR_9 & FUNC_0(VAR_2) &&
        VAR_4->limits[VAR_6].max > 1))
    return -VAR_1;

   VAR_7 += VAR_4->limits[VAR_6].max;




   if (FUNC_1((VAR_3->interface_modes & VAR_9) != VAR_9))
    return -VAR_1;
  }


  if (FUNC_1(VAR_7 < VAR_4->max_interfaces))
   return -VAR_1;
 }

 return 0;
}
