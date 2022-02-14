
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_data {TYPE_2__* iface; } ;
struct hostapd_channel_data {int flag; int freq; int chan; } ;
struct TYPE_4__ {TYPE_1__* conf; } ;
struct TYPE_3__ {scalar_t__ acs_exclude_dfs; int acs_ch_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int**,int ) ;

__attribute__((used)) static void FUNC_2(struct hostapd_data *VAR_2,
          struct hostapd_hw_modes *VAR_3,
          int VAR_4,
          int **VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_channels; VAR_6++) {
  struct hostapd_channel_data *VAR_7 = &VAR_3->channels[VAR_6];

  if ((VAR_4 ||
       FUNC_0(&VAR_2->iface->conf->acs_ch_list,
           VAR_7->chan)) &&
      !(VAR_7->flag & VAR_0) &&
      !(VAR_2->iface->conf->acs_exclude_dfs &&
        (VAR_7->flag & VAR_1)))
   FUNC_1(VAR_5, VAR_7->freq);
 }
}
