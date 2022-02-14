
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_meshconf_ie {scalar_t__ conf_pselid; scalar_t__ conf_pmetid; scalar_t__ conf_ccid; scalar_t__ conf_syncid; scalar_t__ conf_authid; int conf_form; int conf_cap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_6, const uint8_t *VAR_7, size_t VAR_8, int VAR_9)
{

 FUNC_0("%s", VAR_6);
 if (VAR_5) {
  const struct ieee80211_meshconf_ie *VAR_10 =
   (const struct ieee80211_meshconf_ie *)VAR_7;
  FUNC_0("<PATH:");
  if (VAR_10->conf_pselid == VAR_3)
   FUNC_0("HWMP");
  else
   FUNC_0("UNKNOWN");
  FUNC_0(" LINK:");
  if (VAR_10->conf_pmetid == VAR_2)
   FUNC_0("AIRTIME");
  else
   FUNC_0("UNKNOWN");
  FUNC_0(" CONGESTION:");
  if (VAR_10->conf_ccid == VAR_1)
   FUNC_0("DISABLED");
  else
   FUNC_0("UNKNOWN");
  FUNC_0(" SYNC:");
  if (VAR_10->conf_syncid == VAR_4)
   FUNC_0("NEIGHOFF");
  else
   FUNC_0("UNKNOWN");
  FUNC_0(" AUTH:");
  if (VAR_10->conf_authid == VAR_0)
   FUNC_0("DISABLED");
  else
   FUNC_0("UNKNOWN");
  FUNC_0(" FORM:0x%x CAPS:0x%x>", VAR_10->conf_form,
      VAR_10->conf_cap);
 }
}
