
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_mgmt {int dummy; } ;
struct hostapd_data {int msg_ctx; scalar_t__ ext_mgmt_frame_handling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct hostapd_data*,struct ieee80211_mgmt const*,size_t,int) ;
 int FUNC_1 (struct hostapd_data*,struct ieee80211_mgmt const*,size_t,int,int) ;
 int FUNC_2 (struct hostapd_data*,struct ieee80211_mgmt const*,size_t,int) ;
 int FUNC_3 (struct hostapd_data*,struct ieee80211_mgmt const*,size_t,int) ;
 int FUNC_4 (struct hostapd_data*,struct ieee80211_mgmt const*,size_t,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (int ,int ,char*,int,int,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*,size_t,int const*,size_t) ;

void FUNC_10(struct hostapd_data *VAR_3, const u8 *VAR_4, size_t VAR_5,
   u16 VAR_6, int VAR_7)
{
 const struct ieee80211_mgmt *VAR_8;
 VAR_8 = (const struct ieee80211_mgmt *) VAR_4;
 switch (VAR_6) {
 case 132:
  FUNC_8(VAR_0, "mgmt::auth cb");
  FUNC_2(VAR_3, VAR_8, VAR_5, VAR_7);
  break;
 case 133:
  FUNC_8(VAR_0, "mgmt::assoc_resp cb");
  FUNC_1(VAR_3, VAR_8, VAR_5, 0, VAR_7);
  break;
 case 128:
  FUNC_8(VAR_0, "mgmt::reassoc_resp cb");
  FUNC_1(VAR_3, VAR_8, VAR_5, 1, VAR_7);
  break;
 case 129:
  FUNC_8(VAR_1, "mgmt::proberesp cb ok=%d", VAR_7);
  break;
 case 131:
  FUNC_8(VAR_0, "mgmt::deauth cb");
  FUNC_3(VAR_3, VAR_8, VAR_5, VAR_7);
  break;
 case 130:
  FUNC_8(VAR_0, "mgmt::disassoc cb");
  FUNC_4(VAR_3, VAR_8, VAR_5, VAR_7);
  break;
 case 134:
  FUNC_8(VAR_0, "mgmt::action cb ok=%d", VAR_7);
  FUNC_0(VAR_3, VAR_8, VAR_5, VAR_7);
  break;
 default:
  FUNC_8(VAR_2, "unknown mgmt cb frame subtype %d", VAR_6);
  break;
 }
}
