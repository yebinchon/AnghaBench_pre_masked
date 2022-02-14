
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vlan_description {scalar_t__* tagged; int untagged; scalar_t__ notempty; } ;
struct TYPE_4__ {int sec; } ;
struct sta_info {char* identity; char* radius_cui; int session_timeout_set; TYPE_2__ session_timeout; scalar_t__ acct_interim_interval; struct hostapd_sta_wpa_psk_short* psk; scalar_t__ vlan_id; int addr; } ;
struct hostapd_sta_wpa_psk_short {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_3__ {scalar_t__ wpa_psk_radius; scalar_t__ acct_interim_interval; int vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_1 (struct hostapd_data*,struct sta_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct hostapd_data*,struct sta_info*,struct vlan_description*) ;
 int FUNC_3 (struct hostapd_sta_wpa_psk_short*) ;
 int FUNC_4 (struct hostapd_data*,int ,int ,int ,char*,scalar_t__,...) ;
 int FUNC_5 (int ,struct vlan_description*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(struct hostapd_data *VAR_4, struct sta_info *VAR_5,
      int VAR_6, u32 VAR_7,
      u32 VAR_8,
      struct vlan_description *VAR_9,
      struct hostapd_sta_wpa_psk_short **VAR_10,
      char **VAR_11, char **VAR_12)
{
 if (VAR_9->notempty &&
     !FUNC_5(VAR_4->conf->vlan, VAR_9)) {
  FUNC_4(VAR_4, VAR_5->addr, VAR_2,
          VAR_1,
          "Invalid VLAN %d%s received from RADIUS server",
          VAR_9->untagged,
          VAR_9->tagged[0] ? "+" : "");
  return -1;
 }
 if (FUNC_2(VAR_4, VAR_5, VAR_9) < 0)
  return -1;
 if (VAR_5->vlan_id)
  FUNC_4(VAR_4, VAR_5->addr, VAR_2,
          VAR_1, "VLAN ID %d", VAR_5->vlan_id);

 FUNC_3(VAR_5->psk);
 if (VAR_4->conf->wpa_psk_radius != VAR_3) {
  VAR_5->psk = *VAR_10;
  *VAR_10 = ((void*)0);
 } else {
  VAR_5->psk = ((void*)0);
 }

 FUNC_6(VAR_5->identity);
 VAR_5->identity = *VAR_11;
 *VAR_11 = ((void*)0);

 FUNC_6(VAR_5->radius_cui);
 VAR_5->radius_cui = *VAR_12;
 *VAR_12 = ((void*)0);

 if (VAR_4->conf->acct_interim_interval == 0 && VAR_8)
  VAR_5->acct_interim_interval = VAR_8;
 if (VAR_6 == VAR_0) {
  VAR_5->session_timeout_set = 1;
  FUNC_7(&VAR_5->session_timeout);
  VAR_5->session_timeout.sec += VAR_7;
  FUNC_1(VAR_4, VAR_5, VAR_7);
 } else {
  VAR_5->session_timeout_set = 0;
  FUNC_0(VAR_4, VAR_5);
 }

 return 0;
}
