
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_bss_load_ie {int chan_load; int aac; int sta_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, const uint8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 FUNC_1("%s", VAR_1);
 if (VAR_0) {
  const struct ieee80211_bss_load_ie *VAR_5 =
      (const struct ieee80211_bss_load_ie *) VAR_2;
  FUNC_1("<sta count %d, chan load %d, aac %d>",
      FUNC_0(&VAR_5->sta_count),
      VAR_5->chan_load,
      VAR_5->aac);
 }
}
