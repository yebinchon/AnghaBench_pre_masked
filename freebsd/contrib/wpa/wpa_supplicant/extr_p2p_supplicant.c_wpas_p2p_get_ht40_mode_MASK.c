
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpa_supplicant {int dummy; } ;
struct oper_class_map {scalar_t__ p2p; scalar_t__ min_chan; scalar_t__ max_chan; scalar_t__ inc; scalar_t__ mode; scalar_t__ bw; scalar_t__ op_class; } ;
struct hostapd_hw_modes {int dummy; } ;
typedef enum chan_allowed { ____Placeholder_chan_allowed } chan_allowed ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct oper_class_map* VAR_5 ;
 int FUNC_0 (struct wpa_supplicant*,struct hostapd_hw_modes*,scalar_t__,scalar_t__) ;

int FUNC_1(struct wpa_supplicant *VAR_6,
      struct hostapd_hw_modes *VAR_7, u8 VAR_8)
{
 int VAR_9;
 enum chan_allowed VAR_10;

 for (VAR_9 = 0; VAR_5[VAR_9].op_class; VAR_9++) {
  const struct oper_class_map *VAR_11 = &VAR_5[VAR_9];
  u8 VAR_12;

  if (VAR_11->p2p == VAR_4)
   continue;

  for (VAR_12 = VAR_11->min_chan; VAR_12 <= VAR_11->max_chan; VAR_12 += VAR_11->inc) {
   if (VAR_11->mode != VAR_3 ||
       (VAR_11->bw != VAR_2 && VAR_11->bw != VAR_1) ||
       VAR_12 != VAR_8)
    continue;
   VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_12, VAR_11->bw);
   if (VAR_10 == VAR_0)
    return (VAR_11->bw == VAR_1) ? -1 : 1;
  }
 }
 return 0;
}
