
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wmm_ac_ts_setup_params {int tsid; int direction; int user_priority; int nominal_msdu_size; int mean_data_rate; int minimum_phy_rate; int surplus_bandwidth_allowance; int fixed_nominal_msdu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int*) ;
 char* FUNC_2 (char*,char*,char**) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct wpa_supplicant*,struct wmm_ac_ts_setup_params*) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_4, char *VAR_5)
{
 char *VAR_6, *VAR_7 = ((void*)0);
 struct wmm_ac_ts_setup_params VAR_8 = {
  .tsid = 0xff,
  .direction = 0xff,
 };

 while ((VAR_6 = FUNC_2(VAR_5, " ", &VAR_7))) {
  if (FUNC_1(VAR_6, "tsid=%i", &VAR_8.tsid) == 1 ||
      FUNC_1(VAR_6, "up=%i", &VAR_8.user_priority) == 1 ||
      FUNC_1(VAR_6, "nominal_msdu_size=%i",
      &VAR_8.nominal_msdu_size) == 1 ||
      FUNC_1(VAR_6, "mean_data_rate=%i",
      &VAR_8.mean_data_rate) == 1 ||
      FUNC_1(VAR_6, "min_phy_rate=%i",
      &VAR_8.minimum_phy_rate) == 1 ||
      FUNC_1(VAR_6, "sba=%i",
      &VAR_8.surplus_bandwidth_allowance) == 1)
   continue;

  if (FUNC_0(VAR_6, "downlink") == 0) {
   VAR_8.direction = VAR_2;
  } else if (FUNC_0(VAR_6, "uplink") == 0) {
   VAR_8.direction = VAR_3;
  } else if (FUNC_0(VAR_6, "bidi") == 0) {
   VAR_8.direction = VAR_1;
  } else if (FUNC_0(VAR_6, "fixed_nominal_msdu") == 0) {
   VAR_8.fixed_nominal_msdu = 1;
  } else {
   FUNC_3(VAR_0,
       "CTRL: Invalid WMM_AC_ADDTS parameter: '%s'",
       VAR_6);
   return -1;
  }

 }

 return FUNC_4(VAR_4, &VAR_8);
}
