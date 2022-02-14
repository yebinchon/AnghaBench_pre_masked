
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_config {int local_pwr_constraint; scalar_t__ airtime_mode; size_t num_bss; int * bss; int airtime_update_interval; scalar_t__ spectrum_mgmt_required; scalar_t__ ieee80211d; scalar_t__ ieee80211h; int * country; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct hostapd_config*,int) ;
 scalar_t__ FUNC_1 (struct hostapd_config*,size_t) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct hostapd_config *VAR_3, int VAR_4)
{
 size_t VAR_5;

 if (VAR_4 && VAR_3->ieee80211d &&
     (!VAR_3->country[0] || !VAR_3->country[1])) {
  FUNC_2(VAR_1, "Cannot enable IEEE 802.11d without "
      "setting the country_code");
  return -1;
 }

 if (VAR_4 && VAR_3->ieee80211h && !VAR_3->ieee80211d) {
  FUNC_2(VAR_1, "Cannot enable IEEE 802.11h without "
      "IEEE 802.11d enabled");
  return -1;
 }

 if (VAR_4 && VAR_3->local_pwr_constraint != -1 &&
     !VAR_3->ieee80211d) {
  FUNC_2(VAR_1, "Cannot add Power Constraint element without Country element");
  return -1;
 }

 if (VAR_4 && VAR_3->spectrum_mgmt_required &&
     VAR_3->local_pwr_constraint == -1) {
  FUNC_2(VAR_1, "Cannot set Spectrum Management bit without Country and Power Constraint elements");
  return -1;
 }
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (FUNC_1(VAR_3, VAR_5))
   return -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_bss; VAR_5++) {
  if (FUNC_0(VAR_3->bss[VAR_5], VAR_3, VAR_4))
   return -1;
 }

 return 0;
}
