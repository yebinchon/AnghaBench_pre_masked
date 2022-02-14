
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_rate_data {int flags; int rate; } ;
struct hostapd_iface {size_t num_rates; TYPE_1__* conf; struct hostapd_rate_data* current_rates; struct hostapd_rate_data* basic_rates; } ;
struct hostapd_hw_modes {int mode; int num_rates; int * rates; } ;
struct TYPE_2__ {int* basic_rates; int* supported_rates; int require_ht; int ieee80211n; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*,int ) ;
 struct hostapd_rate_data* FUNC_1 (int,int) ;
 int FUNC_2 (struct hostapd_rate_data*) ;
 struct hostapd_rate_data* FUNC_3 (int) ;
 int FUNC_4 (struct hostapd_rate_data*,int*,int) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct hostapd_iface *VAR_3,
     struct hostapd_hw_modes *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 int VAR_7[] = { 60, 120, 240, -1 };
 int VAR_8[] = { 10, 20, -1 };
 int VAR_9[] = { 10, 20, 55, 110, -1 };
 int *VAR_10;

 if (VAR_3->conf->basic_rates)
  VAR_10 = VAR_3->conf->basic_rates;
 else switch (VAR_4->mode) {
 case 131:
  VAR_10 = VAR_7;
  break;
 case 129:
  VAR_10 = VAR_8;
  break;
 case 128:
  VAR_10 = VAR_9;
  break;
 case 130:
  return 0;
 default:
  return -1;
 }

 VAR_5 = 0;
 while (VAR_10[VAR_5] >= 0)
  VAR_5++;
 if (VAR_5)
  VAR_5++;
 FUNC_2(VAR_3->basic_rates);
 VAR_3->basic_rates = FUNC_3(VAR_5 * sizeof(int));
 if (VAR_3->basic_rates)
  FUNC_4(VAR_3->basic_rates, VAR_10, VAR_5 * sizeof(int));

 FUNC_2(VAR_3->current_rates);
 VAR_3->num_rates = 0;

 VAR_3->current_rates =
  FUNC_1(VAR_4->num_rates, sizeof(struct hostapd_rate_data));
 if (!VAR_3->current_rates) {
  FUNC_5(VAR_2, "Failed to allocate memory for rate "
      "table.");
  return -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->num_rates; VAR_5++) {
  struct hostapd_rate_data *VAR_11;

  if (VAR_3->conf->supported_rates &&
      !FUNC_0(VAR_3->conf->supported_rates,
     VAR_4->rates[VAR_5]))
   continue;

  VAR_11 = &VAR_3->current_rates[VAR_3->num_rates];
  VAR_11->rate = VAR_4->rates[VAR_5];
  if (FUNC_0(VAR_10, VAR_11->rate)) {
   VAR_11->flags |= VAR_0;
   VAR_6++;
  }
  FUNC_5(VAR_1, "RATE[%d] rate=%d flags=0x%x",
      VAR_3->num_rates, VAR_11->rate, VAR_11->flags);
  VAR_3->num_rates++;
 }

 if ((VAR_3->num_rates == 0 || VAR_6 == 0) &&
     (!VAR_3->conf->ieee80211n || !VAR_3->conf->require_ht)) {
  FUNC_5(VAR_2, "No rates remaining in supported/basic "
      "rate sets (%d,%d).",
      VAR_3->num_rates, VAR_6);
  return -1;
 }

 return 0;
}
