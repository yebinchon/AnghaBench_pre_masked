
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_event_ {TYPE_1__* addr; struct subscription* s; } ;
struct subscription {int sm; int event_queue; int last_event_failed; } ;
struct http_client {int dummy; } ;
typedef enum http_client_event { ____Placeholder_http_client_event } http_client_event ;
struct TYPE_2__ {int num_failures; int domain_and_port; } ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wps_event_*) ;
 int FUNC_2 (struct wps_event_*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, struct http_client *VAR_2,
     enum http_client_event VAR_3)
{
 struct wps_event_ *VAR_4 = VAR_1;
 struct subscription *VAR_5 = VAR_4->s;

 FUNC_4(VAR_0, "WPS UPnP: HTTP client callback: e=%p c=%p "
     "event=%d", VAR_4, VAR_2, VAR_3);
 switch (VAR_3) {
 case 129:
  FUNC_4(VAR_0,
      "WPS UPnP: Got event %p reply OK from %s",
      VAR_4, VAR_4->addr->domain_and_port);
  VAR_4->addr->num_failures = 0;
  VAR_5->last_event_failed = 0;
  FUNC_2(VAR_4);


  if (!FUNC_0(&VAR_5->event_queue))
   FUNC_3(VAR_5->sm);
  break;
 case 131:
  FUNC_4(VAR_0, "WPS UPnP: Event send failure");
  FUNC_1(VAR_4);
  break;
 case 130:
  FUNC_4(VAR_0, "WPS UPnP: Invalid reply");
  FUNC_1(VAR_4);
  break;
 case 128:
  FUNC_4(VAR_0, "WPS UPnP: Event send timeout");
  FUNC_1(VAR_4);
  break;
 }
}
