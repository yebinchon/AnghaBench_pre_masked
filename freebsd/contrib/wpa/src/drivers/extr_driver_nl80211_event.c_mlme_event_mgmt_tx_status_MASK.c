
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t data_len; int ack; int const* data; int dst; int stype; int type; } ;
union wpa_event_data {TYPE_1__ tx_status; } ;
typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct wpa_driver_nl80211_data {scalar_t__ send_action_cookie; int ctx; int nlmode; } ;
struct nlattr {int dummy; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 int FUNC_5 (union wpa_event_data*,int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_8(struct wpa_driver_nl80211_data *VAR_2,
          struct nlattr *VAR_3, const u8 *VAR_4,
          size_t VAR_5, struct nlattr *VAR_6)
{
 union wpa_event_data VAR_7;
 const struct ieee80211_hdr *VAR_8;
 u16 VAR_9;

 FUNC_6(VAR_1, "nl80211: Frame TX status event");
 if (!FUNC_2(VAR_2->nlmode)) {
  u64 VAR_10;

  if (!VAR_3)
   return;

  VAR_10 = FUNC_4(VAR_3);
  FUNC_6(VAR_1, "nl80211: Action TX status:"
      " cookie=0x%llx%s (ack=%d)",
      (long long unsigned int) VAR_10,
      VAR_10 == VAR_2->send_action_cookie ?
      " (match)" : " (unknown)", VAR_6 != ((void*)0));
  if (VAR_10 != VAR_2->send_action_cookie)
   return;
 }

 VAR_8 = (const struct ieee80211_hdr *) VAR_4;
 VAR_9 = FUNC_3(VAR_8->frame_control);

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.tx_status.type = FUNC_1(VAR_9);
 VAR_7.tx_status.stype = FUNC_0(VAR_9);
 VAR_7.tx_status.dst = VAR_8->addr1;
 VAR_7.tx_status.data = VAR_4;
 VAR_7.tx_status.data_len = VAR_5;
 VAR_7.tx_status.ack = VAR_6 != ((void*)0);
 FUNC_7(VAR_2->ctx, VAR_0, &VAR_7);
}
