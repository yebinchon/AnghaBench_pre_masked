
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int iv_quiet_count_value; int iv_quiet_count; int iv_quiet_offset; int iv_quiet_duration; int iv_quiet_period; } ;
struct ieee80211_quiet_ie {int len; int tbttcount; void* offset; void* duration; int period; int quiet_ie; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static uint8_t *
FUNC_1(uint8_t *VAR_1, struct ieee80211vap *VAR_2, int VAR_3)
{
 struct ieee80211_quiet_ie *VAR_4 = (struct ieee80211_quiet_ie *) VAR_1;

 VAR_4->quiet_ie = VAR_0;
 VAR_4->len = 6;





 if (VAR_3) {
  if (VAR_2->iv_quiet_count_value == 1)
   VAR_2->iv_quiet_count_value = VAR_2->iv_quiet_count;
  else if (VAR_2->iv_quiet_count_value > 1)
   VAR_2->iv_quiet_count_value--;
 }

 if (VAR_2->iv_quiet_count_value == 0) {

  VAR_2->iv_quiet_count_value = 1;
 }

 VAR_4->tbttcount = VAR_2->iv_quiet_count_value;
 VAR_4->period = VAR_2->iv_quiet_period;
 VAR_4->duration = FUNC_0(VAR_2->iv_quiet_duration);
 VAR_4->offset = FUNC_0(VAR_2->iv_quiet_offset);
 return VAR_1 + sizeof(*VAR_4);
}
