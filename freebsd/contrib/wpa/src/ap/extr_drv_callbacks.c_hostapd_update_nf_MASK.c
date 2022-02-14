
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {scalar_t__ lowest_nf; int chans_surveyed; } ;
struct hostapd_channel_data {scalar_t__ min_nf; int survey_list; } ;
struct freq_survey {scalar_t__ nf; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct hostapd_iface *VAR_0,
         struct hostapd_channel_data *VAR_1,
         struct freq_survey *VAR_2)
{
 if (!VAR_0->chans_surveyed) {
  VAR_1->min_nf = VAR_2->nf;
  VAR_0->lowest_nf = VAR_2->nf;
 } else {
  if (FUNC_0(&VAR_1->survey_list))
   VAR_1->min_nf = VAR_2->nf;
  else if (VAR_2->nf < VAR_1->min_nf)
   VAR_1->min_nf = VAR_2->nf;
  if (VAR_2->nf < VAR_0->lowest_nf)
   VAR_0->lowest_nf = VAR_2->nf;
 }
}
