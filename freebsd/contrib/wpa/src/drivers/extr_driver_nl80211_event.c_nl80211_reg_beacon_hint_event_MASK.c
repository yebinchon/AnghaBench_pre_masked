
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initiator; } ;
union wpa_event_data {TYPE_1__ channel_list_changed; } ;
struct wpa_driver_nl80211_data {int ctx; } ;
struct nlattr {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,struct nlattr*) ;
 int FUNC_1 (union wpa_event_data*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_4(struct wpa_driver_nl80211_data *VAR_5,
        struct nlattr *VAR_6[])
{
 union wpa_event_data VAR_7;

 FUNC_2(VAR_1, "nl80211: Regulatory beacon hint");
 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.channel_list_changed.initiator = VAR_4;

 if (VAR_6[VAR_3])
  FUNC_0("before", VAR_6[VAR_3]);
 if (VAR_6[VAR_2])
  FUNC_0("after", VAR_6[VAR_2]);

 FUNC_3(VAR_5->ctx, VAR_0, &VAR_7);
}
