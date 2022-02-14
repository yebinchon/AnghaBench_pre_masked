
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {scalar_t__ acs_num_completed_scans; scalar_t__ chans_surveyed; TYPE_1__* current_mode; } ;
struct hostapd_channel_data {int flag; scalar_t__ min_nf; int survey_list; } ;
struct TYPE_2__ {int num_channels; struct hostapd_channel_data* channels; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_channel_data*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hostapd_iface *VAR_1)
{
 int VAR_2;
 struct hostapd_channel_data *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->current_mode->num_channels; VAR_2++) {
  VAR_3 = &VAR_1->current_mode->channels[VAR_2];

  if (VAR_3->flag & VAR_0)
   FUNC_0(VAR_3);

  FUNC_1(&VAR_3->survey_list);
  VAR_3->flag |= VAR_0;
  VAR_3->min_nf = 0;
 }

 VAR_1->chans_surveyed = 0;
 VAR_1->acs_num_completed_scans = 0;
}
