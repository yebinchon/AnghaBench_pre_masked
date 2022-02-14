
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ieee80211_ath_ie {int ath_capability; int ath_defkeyix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_9, const u_int8_t *VAR_10, size_t VAR_11, int VAR_12)
{

 FUNC_1("%s", VAR_9);
 if (VAR_8) {
  const struct ieee80211_ath_ie *VAR_13 =
   (const struct ieee80211_ath_ie *)VAR_10;

  FUNC_1("<");
  if (VAR_13->ath_capability & VAR_5)
   FUNC_1("DTURBO,");
  if (VAR_13->ath_capability & VAR_3)
   FUNC_1("COMP,");
  if (VAR_13->ath_capability & VAR_4)
   FUNC_1("FF,");
  if (VAR_13->ath_capability & VAR_7)
   FUNC_1("XR,");
  if (VAR_13->ath_capability & VAR_0)
   FUNC_1("AR,");
  if (VAR_13->ath_capability & VAR_2)
   FUNC_1("BURST,");
  if (VAR_13->ath_capability & VAR_6)
   FUNC_1("WME,");
  if (VAR_13->ath_capability & VAR_1)
   FUNC_1("BOOST,");
  FUNC_1("0x%x>", FUNC_0(VAR_13->ath_defkeyix));
 }
}
