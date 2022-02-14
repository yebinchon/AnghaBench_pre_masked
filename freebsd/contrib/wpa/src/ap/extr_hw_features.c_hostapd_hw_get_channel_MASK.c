
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_hw_modes {int dummy; } ;
struct hostapd_data {TYPE_1__* iface; } ;
struct TYPE_2__ {int num_hw_features; struct hostapd_hw_modes* hw_features; struct hostapd_hw_modes* current_mode; } ;


 int FUNC_0 (struct hostapd_hw_modes*,int) ;

int FUNC_1(struct hostapd_data *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 struct hostapd_hw_modes *VAR_4;

 if (VAR_0->iface->current_mode) {
  VAR_3 = FUNC_0(VAR_0->iface->current_mode, VAR_1);
  if (VAR_3)
   return VAR_3;
 }



 if (!VAR_0->iface->hw_features)
  return 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->iface->num_hw_features; VAR_2++) {
  VAR_4 = &VAR_0->iface->hw_features[VAR_2];
  VAR_3 = FUNC_0(VAR_4, VAR_1);
  if (VAR_3)
   return VAR_3;
 }
 return 0;
}
