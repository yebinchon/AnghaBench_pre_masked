
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ieee80211_wme_info {int wme_version; int wme_info; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, const u_int8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 FUNC_0("%s", VAR_1);
 if (VAR_0) {
  const struct ieee80211_wme_info *VAR_5 =
      (const struct ieee80211_wme_info *) VAR_2;
  FUNC_0("<version 0x%x info 0x%x>",
      VAR_5->wme_version, VAR_5->wme_info);
 }
}
