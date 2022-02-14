
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_wmm_ac_params {int dummy; } ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_data {int parameter_set_count; TYPE_2__* iface; TYPE_1__* iconf; } ;
struct hostapd_channel_data {scalar_t__ freq; int wmm_rules; scalar_t__ wmm_rules_valid; } ;
struct TYPE_4__ {scalar_t__ freq; struct hostapd_wmm_ac_params* prev_wmm; struct hostapd_hw_modes* current_mode; } ;
struct TYPE_3__ {struct hostapd_wmm_ac_params* wmm_ac_params; } ;


 scalar_t__ FUNC_0 (struct hostapd_wmm_ac_params*,struct hostapd_wmm_ac_params*,int) ;
 int FUNC_1 (struct hostapd_wmm_ac_params*,struct hostapd_wmm_ac_params*,int) ;
 int FUNC_2 (struct hostapd_wmm_ac_params*,struct hostapd_wmm_ac_params*,int ) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_0,
          struct hostapd_wmm_ac_params *VAR_1)
{
 struct hostapd_hw_modes *VAR_2 = VAR_0->iface->current_mode;
 int VAR_3;

 FUNC_1(VAR_1, VAR_0->iconf->wmm_ac_params,
    sizeof(VAR_0->iconf->wmm_ac_params));

 for (VAR_3 = 0; VAR_2 && VAR_3 < VAR_2->num_channels; VAR_3++) {
  struct hostapd_channel_data *VAR_4 = &VAR_2->channels[VAR_3];

  if (VAR_4->freq != VAR_0->iface->freq)
   continue;

  if (VAR_4->wmm_rules_valid)
   FUNC_2(VAR_0->iconf->wmm_ac_params,
       VAR_1, VAR_4->wmm_rules);
  break;
 }





 if (FUNC_0(VAR_1, VAR_0->iface->prev_wmm,
        sizeof(VAR_0->iconf->wmm_ac_params)) != 0) {
  FUNC_1(VAR_0->iface->prev_wmm, VAR_1,
     sizeof(VAR_0->iconf->wmm_ac_params));
  VAR_0->parameter_set_count++;
 }
}
