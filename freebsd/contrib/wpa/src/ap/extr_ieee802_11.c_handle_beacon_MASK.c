
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee802_11_elems {int dummy; } ;
struct TYPE_3__ {int variable; } ;
struct TYPE_4__ {TYPE_1__ beacon; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct hostapd_frame_info {int dummy; } ;
struct hostapd_data {int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ieee80211_mgmt const*,struct ieee802_11_elems*,struct hostapd_frame_info*) ;
 int FUNC_1 (int ,size_t,struct ieee802_11_elems*,int ) ;
 int FUNC_2 (int ,char*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_2,
     const struct ieee80211_mgmt *VAR_3, size_t VAR_4,
     struct hostapd_frame_info *VAR_5)
{
 struct ieee802_11_elems VAR_6;

 if (VAR_4 < VAR_0 + sizeof(VAR_3->u.beacon)) {
  FUNC_2(VAR_1, "handle_beacon - too short payload (len=%lu)",
      (unsigned long) VAR_4);
  return;
 }

 (void) FUNC_1(VAR_3->u.beacon.variable,
          VAR_4 - (VAR_0 +
          sizeof(VAR_3->u.beacon)), &VAR_6,
          0);

 FUNC_0(VAR_2->iface, VAR_3, &VAR_6, VAR_5);
}
