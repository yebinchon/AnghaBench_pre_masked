
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int locally_generated; int reason_code; } ;
union wpa_event_data {TYPE_1__ deauth_info; } ;
struct TYPE_4__ {int flags; } ;
struct wpa_driver_nl80211_data {int ctx; scalar_t__ ignore_next_local_disconnect; TYPE_2__ capa; } ;
struct nlattr {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_driver_nl80211_data*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (union wpa_event_data*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_5(struct wpa_driver_nl80211_data *VAR_4,
      struct nlattr *VAR_5, struct nlattr *VAR_6,
      struct nlattr *VAR_7)
{
 union wpa_event_data VAR_8;
 unsigned int VAR_9 = VAR_7 == ((void*)0);

 if (VAR_4->capa.flags & VAR_3) {




  FUNC_3(VAR_1, "nl80211: Ignore disconnect "
      "event when using userspace SME");
  return;
 }

 if (VAR_4->ignore_next_local_disconnect) {
  VAR_4->ignore_next_local_disconnect = 0;
  if (VAR_9) {
   FUNC_3(VAR_1, "nl80211: Ignore disconnect "
       "event triggered during reassociation");
   return;
  }
  FUNC_3(VAR_2, "nl80211: Was expecting local "
      "disconnect but got another disconnect "
      "event first");
 }

 FUNC_3(VAR_1, "nl80211: Disconnect event");
 FUNC_0(VAR_4);
 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 if (VAR_5)
  VAR_8.deauth_info.reason_code = FUNC_1(VAR_5);
 VAR_8.deauth_info.locally_generated = VAR_7 == ((void*)0);
 FUNC_4(VAR_4->ctx, VAR_0, &VAR_8);
}
