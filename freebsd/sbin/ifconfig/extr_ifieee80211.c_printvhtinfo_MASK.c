
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ieee80211_ie_vht_operation {int chan_width; int center_freq_seg1_idx; int center_freq_seg2_idx; int basic_mcs_set; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, const u_int8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 FUNC_1("%s", VAR_1);
 if (VAR_0) {
  const struct ieee80211_ie_vht_operation *VAR_5 =
      (const struct ieee80211_ie_vht_operation *) VAR_2;

  FUNC_1("<chw %d freq1_idx %d freq2_idx %d basic_mcs_set 0x%04x>",
      VAR_5->chan_width,
      VAR_5->center_freq_seg1_idx,
      VAR_5->center_freq_seg2_idx,
      FUNC_0(&VAR_5->basic_mcs_set));
 }
}
