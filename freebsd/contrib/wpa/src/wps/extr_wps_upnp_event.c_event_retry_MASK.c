
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_event_ {int list; TYPE_1__* addr; int retry; struct subscription* s; } ;
struct upnp_wps_device_sm {int dummy; } ;
struct subscription {int last_event_failed; int event_queue; struct upnp_wps_device_sm* sm; int addr_list; } ;
struct TYPE_2__ {int domain_and_port; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wps_event_*) ;
 int FUNC_4 (struct wps_event_*) ;
 int FUNC_5 (struct upnp_wps_device_sm*) ;
 int FUNC_6 (int ,char*,struct wps_event_*,...) ;

__attribute__((used)) static void FUNC_7(struct wps_event_ *VAR_1, int VAR_2)
{
 struct subscription *VAR_3 = VAR_1->s;
 struct upnp_wps_device_sm *VAR_4 = VAR_3->sm;

 FUNC_6(VAR_0, "WPS UPnP: Retry event %p for subscription %p",
     VAR_1, VAR_3);
 FUNC_3(VAR_1);


 if (VAR_2) {
  VAR_1->retry++;
  FUNC_6(VAR_0, "WPS UPnP: Try address %d", VAR_1->retry);
 }
 if (VAR_1->retry >= FUNC_2(&VAR_3->addr_list)) {
  FUNC_6(VAR_0, "WPS UPnP: Giving up on sending event "
      "for %s", VAR_1->addr->domain_and_port);
  FUNC_4(VAR_1);
  VAR_3->last_event_failed = 1;
  if (!FUNC_1(&VAR_3->event_queue))
   FUNC_5(VAR_3->sm);
  return;
 }
 FUNC_0(&VAR_3->event_queue, &VAR_1->list);
 FUNC_5(VAR_4);
}
