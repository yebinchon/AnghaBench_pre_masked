
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ieee80211_ap_chan_report_ie {int i_class; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, const u_int8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 FUNC_0("%s", VAR_1);
 if (VAR_0) {
  const struct ieee80211_ap_chan_report_ie *VAR_5 =
      (const struct ieee80211_ap_chan_report_ie *) VAR_2;
  const char *VAR_6 = "";
  int VAR_7;

  FUNC_0("<class %u, chan:[", VAR_5->i_class);

  for (VAR_7 = 3; VAR_7 < VAR_3; VAR_7++) {
   FUNC_0("%s%u", VAR_6, VAR_2[VAR_7]);
   VAR_6 = ",";
  }
  FUNC_0("]>");
 }
}
