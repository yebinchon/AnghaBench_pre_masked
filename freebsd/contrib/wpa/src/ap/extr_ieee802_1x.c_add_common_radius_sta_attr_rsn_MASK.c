
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sta_info {int wpa_sm; } ;
struct radius_msg {int dummy; } ;
struct hostapd_radius_attr {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int wpa; int wpa_group; scalar_t__ ieee80211w; int group_mgmt_cipher; scalar_t__ osen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hostapd_radius_attr*,int ) ;
 int FUNC_1 (struct radius_msg*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct hostapd_data *VAR_8,
       struct hostapd_radius_attr *VAR_9,
       struct sta_info *VAR_10,
       struct radius_msg *VAR_11)
{
 u32 VAR_12;
 int VAR_13, VAR_14;

 VAR_13 = FUNC_5(VAR_10->wpa_sm);
 VAR_14 = FUNC_3(VAR_10->wpa_sm);
 VAR_12 = FUNC_6(VAR_13, VAR_14);
 if (VAR_14 != -1 &&
     !FUNC_0(VAR_9,
         VAR_5) &&
     !FUNC_1(VAR_11, VAR_5,
           VAR_12)) {
  FUNC_7(VAR_0, "Could not add WLAN-Pairwise-Cipher");
  return -1;
 }

 VAR_12 = FUNC_6(((VAR_8->conf->wpa & 0x2) ||
         VAR_8->conf->osen) ?
        VAR_6 : VAR_7,
        VAR_8->conf->wpa_group);
 if (!FUNC_0(VAR_9,
         VAR_3) &&
     !FUNC_1(VAR_11, VAR_3,
           VAR_12)) {
  FUNC_7(VAR_0, "Could not add WLAN-Group-Cipher");
  return -1;
 }

 VAR_14 = FUNC_4(VAR_10->wpa_sm);
 VAR_12 = FUNC_2(VAR_14);
 if (VAR_14 != -1 &&
     !FUNC_0(VAR_9,
         VAR_2) &&
     !FUNC_1(VAR_11, VAR_2,
           VAR_12)) {
  FUNC_7(VAR_0, "Could not add WLAN-AKM-Suite");
  return -1;
 }
 return 0;
}
