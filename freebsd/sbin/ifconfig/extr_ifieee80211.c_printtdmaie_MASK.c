
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ieee80211_tdma_param {int tdma_version; int tdma_slot; int tdma_slotcnt; int tdma_bintval; int* tdma_inuse; int tdma_slotlen; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, const u_int8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 FUNC_1("%s", VAR_1);
 if (VAR_0 && VAR_3 >= sizeof(struct ieee80211_tdma_param)) {
  const struct ieee80211_tdma_param *VAR_5 =
     (const struct ieee80211_tdma_param *) VAR_2;


  FUNC_1("<v%u slot:%u slotcnt:%u slotlen:%u bintval:%u inuse:0x%x>",
      VAR_5->tdma_version, VAR_5->tdma_slot, VAR_5->tdma_slotcnt,
      FUNC_0(&VAR_5->tdma_slotlen), VAR_5->tdma_bintval,
      VAR_5->tdma_inuse[0]);
 }
}
