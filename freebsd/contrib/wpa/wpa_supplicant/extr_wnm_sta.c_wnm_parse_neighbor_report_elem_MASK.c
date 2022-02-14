
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct neighbor_report {int tsf_present; int country_present; int preference; int preference_present; int bss_term_present; int bearing_present; int rm_capab_present; TYPE_1__* mul_bssid; int rm_capab; TYPE_1__* meas_pilot; void* rel_height; int distance; void* bearing; void* bss_term_dur; int bss_term_tsf; int country; void* beacon_int; void* tsf_offset; } ;
struct multiple_bssid {int dummy; } ;
struct measurement_pilot {int dummy; } ;
struct TYPE_2__ {int measurement_pilot; int max_bssid_indicator; int subelems; int subelem_len; } ;


 int VAR_0 ;
 void* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int const*,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct neighbor_report *VAR_1,
        u8 VAR_2, u8 VAR_3, const u8 *VAR_4)
{
 switch (VAR_2) {
 case 128:
  if (VAR_3 < 2 + 2) {
   FUNC_6(VAR_0, "WNM: Too short TSF");
   break;
  }
  VAR_1->tsf_offset = FUNC_0(VAR_4);
  VAR_1->beacon_int = FUNC_0(VAR_4 + 2);
  VAR_1->tsf_present = 1;
  break;
 case 132:
  if (VAR_3 < 2) {
   FUNC_6(VAR_0, "WNM: Too short condensed "
       "country string");
   break;
  }
  FUNC_4(VAR_1->country, VAR_4, 2);
  VAR_1->country_present = 1;
  break;
 case 133:
  if (VAR_3 < 1) {
   FUNC_6(VAR_0, "WNM: Too short BSS transition "
       "candidate");
   break;
  }
  VAR_1->preference = VAR_4[0];
  VAR_1->preference_present = 1;
  break;
 case 134:
  if (VAR_3 < 10) {
   FUNC_6(VAR_0,
       "WNM: Too short BSS termination duration");
   break;
  }
  VAR_1->bss_term_tsf = FUNC_2(VAR_4);
  VAR_1->bss_term_dur = FUNC_0(VAR_4 + 8);
  VAR_1->bss_term_present = 1;
  break;
 case 135:
  if (VAR_3 < 8) {
   FUNC_6(VAR_0, "WNM: Too short neighbor "
       "bearing");
   break;
  }
  VAR_1->bearing = FUNC_0(VAR_4);
  VAR_1->distance = FUNC_1(VAR_4 + 2);
  VAR_1->rel_height = FUNC_0(VAR_4 + 2 + 4);
  VAR_1->bearing_present = 1;
  break;
 case 131:
  if (VAR_3 < 1) {
   FUNC_6(VAR_0, "WNM: Too short measurement "
       "pilot");
   break;
  }
  FUNC_3(VAR_1->meas_pilot);
  VAR_1->meas_pilot = FUNC_5(sizeof(struct measurement_pilot));
  if (VAR_1->meas_pilot == ((void*)0))
   break;
  VAR_1->meas_pilot->measurement_pilot = VAR_4[0];
  VAR_1->meas_pilot->subelem_len = VAR_3 - 1;
  FUNC_4(VAR_1->meas_pilot->subelems, VAR_4 + 1, VAR_3 - 1);
  break;
 case 129:
  if (VAR_3 < 5) {
   FUNC_6(VAR_0, "WNM: Too short RRM enabled "
       "capabilities");
   break;
  }
  FUNC_4(VAR_1->rm_capab, VAR_4, 5);
  VAR_1->rm_capab_present = 1;
  break;
 case 130:
  if (VAR_3 < 1) {
   FUNC_6(VAR_0, "WNM: Too short multiple BSSID");
   break;
  }
  FUNC_3(VAR_1->mul_bssid);
  VAR_1->mul_bssid = FUNC_5(sizeof(struct multiple_bssid));
  if (VAR_1->mul_bssid == ((void*)0))
   break;
  VAR_1->mul_bssid->max_bssid_indicator = VAR_4[0];
  VAR_1->mul_bssid->subelem_len = VAR_3 - 1;
  FUNC_4(VAR_1->mul_bssid->subelems, VAR_4 + 1, VAR_3 - 1);
  break;
 }
}
