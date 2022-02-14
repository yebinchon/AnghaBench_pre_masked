
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int dummy; } ;
struct ieee80211_wme_info {int wme_len; int* wme_oui; scalar_t__ wme_info; int wme_version; int wme_subtype; int wme_type; int wme_id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iwi_softc*,int ,struct ieee80211_wme_info*,int) ;
 int FUNC_2 (struct ieee80211_wme_info*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct iwi_softc *VAR_5)
{
 struct ieee80211_wme_info VAR_6;

 FUNC_2(&VAR_6, 0, sizeof VAR_6);
 VAR_6.wme_id = VAR_0;
 VAR_6.wme_len = sizeof (struct ieee80211_wme_info) - 2;
 VAR_6.wme_oui[0] = 0x00;
 VAR_6.wme_oui[1] = 0x50;
 VAR_6.wme_oui[2] = 0xf2;
 VAR_6.wme_type = VAR_3;
 VAR_6.wme_subtype = VAR_2;
 VAR_6.wme_version = VAR_4;
 VAR_6.wme_info = 0;

 FUNC_0(("Setting WME IE (len=%u)\n", VAR_6.wme_len));
 return FUNC_1(VAR_5, VAR_1, &VAR_6, sizeof VAR_6);
}
