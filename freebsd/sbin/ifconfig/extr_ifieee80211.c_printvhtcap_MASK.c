
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int8_t ;
struct TYPE_2__ {int tx_highest; int tx_mcs_map; int rx_highest; int rx_mcs_map; } ;
struct ieee80211_ie_vhtcap {TYPE_1__ supp_mcs; int vht_cap_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, const u_int8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 FUNC_2("%s", VAR_1);
 if (VAR_0) {
  const struct ieee80211_ie_vhtcap *VAR_5 =
      (const struct ieee80211_ie_vhtcap *) VAR_2;
  uint32_t VAR_6 = FUNC_1(&VAR_5->vht_cap_info);

  FUNC_2("<cap 0x%08x", VAR_6);
  FUNC_2(" rx_mcs_map 0x%x",
      FUNC_0(&VAR_5->supp_mcs.rx_mcs_map));
  FUNC_2(" rx_highest %d",
      FUNC_0(&VAR_5->supp_mcs.rx_highest) & 0x1fff);
  FUNC_2(" tx_mcs_map 0x%x",
      FUNC_0(&VAR_5->supp_mcs.tx_mcs_map));
  FUNC_2(" tx_highest %d",
      FUNC_0(&VAR_5->supp_mcs.tx_highest) & 0x1fff);

  FUNC_2(">");
 }
}
