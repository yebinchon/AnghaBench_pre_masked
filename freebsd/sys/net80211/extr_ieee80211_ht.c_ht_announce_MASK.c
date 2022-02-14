
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_htcaps; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211com*,int,int) ;
 int FUNC_1 (struct ieee80211com*,char*,char const*) ;
 char** VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211com *VAR_4, enum ieee80211_phymode VAR_5)
{
 const char *VAR_6 = VAR_3[VAR_5];

 FUNC_1(VAR_4, "%s MCS 20MHz\n", VAR_6);
 FUNC_0(VAR_4, VAR_5, 0);
 if (VAR_4->ic_htcaps & VAR_1) {
  FUNC_1(VAR_4, "%s MCS 20MHz SGI\n", VAR_6);
  FUNC_0(VAR_4, VAR_5, 1);
 }
 if (VAR_4->ic_htcaps & VAR_0) {
  FUNC_1(VAR_4, "%s MCS 40MHz:\n", VAR_6);
  FUNC_0(VAR_4, VAR_5, 2);
 }
 if ((VAR_4->ic_htcaps & VAR_0) &&
     (VAR_4->ic_htcaps & VAR_2)) {
  FUNC_1(VAR_4, "%s MCS 40MHz SGI:\n", VAR_6);
  FUNC_0(VAR_4, VAR_5, 3);
 }
}
