
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_wmm_rule {int max_txop; int min_aifs; int min_cwmax; int min_cwmin; } ;
struct hostapd_wmm_ac_params {int admission_control_mandatory; int txop_limit; void* aifs; void* cwmax; void* cwmin; } ;


 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(const struct hostapd_wmm_ac_params *VAR_1,
    struct hostapd_wmm_ac_params *VAR_2,
    const struct hostapd_wmm_rule *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2[VAR_4].cwmin = FUNC_0(VAR_1[VAR_4].cwmin, VAR_3[VAR_4].min_cwmin);
  VAR_2[VAR_4].cwmax = FUNC_0(VAR_1[VAR_4].cwmax, VAR_3[VAR_4].min_cwmax);
  VAR_2[VAR_4].aifs = FUNC_0(VAR_1[VAR_4].aifs, VAR_3[VAR_4].min_aifs);
  VAR_2[VAR_4].txop_limit =
   FUNC_1(VAR_1[VAR_4].txop_limit, VAR_3[VAR_4].max_txop);
  VAR_2[VAR_4].admission_control_mandatory =
   VAR_1[VAR_4].admission_control_mandatory;
 }
}
