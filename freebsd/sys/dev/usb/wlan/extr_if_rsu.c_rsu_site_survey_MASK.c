
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsu_softc {int sc_extra_scan; int sc_dev; scalar_t__ sc_active_scan; } ;
struct r92s_fw_cmd_sitesurvey {void* ssidlen; int ssid; void* active; void* limit; } ;
struct ieee80211_scan_ssid {int len; int ssid; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct rsu_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct r92s_fw_cmd_sitesurvey*,int ,int) ;
 int FUNC_7 (char*) ;
 int VAR_3 ;
 int FUNC_8 (struct rsu_softc*,int ,struct r92s_fw_cmd_sitesurvey*,int) ;

__attribute__((used)) static int
FUNC_9(struct rsu_softc *VAR_4, struct ieee80211_scan_ssid *VAR_5)
{
 struct r92s_fw_cmd_sitesurvey VAR_6;

 FUNC_0(VAR_4);

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));

 if (VAR_4->sc_active_scan)
  VAR_6.active = FUNC_2(1);
 VAR_6.limit = FUNC_2(48);

 if (VAR_5 != ((void*)0)) {
  VAR_4->sc_extra_scan = 1;
  VAR_6.ssidlen = FUNC_2(VAR_5->len);
  FUNC_5(VAR_6.ssid, VAR_5->ssid, VAR_5->len);
 }
 return (FUNC_8(VAR_4, VAR_0, &VAR_6, sizeof(VAR_6)));
}
