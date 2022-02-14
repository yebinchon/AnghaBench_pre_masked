
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int er; int * http; int subscribed; } ;
struct http_client {int dummy; } ;
typedef enum http_client_event { ____Placeholder_http_client_event } http_client_event ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct wps_er_ap*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, struct http_client *VAR_2,
           enum http_client_event VAR_3)
{
 struct wps_er_ap *VAR_4 = VAR_1;

 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_0, "WPS ER: Unsubscribed from events");
  VAR_4->subscribed = 0;
  break;
 case 131:
 case 130:
 case 128:
  FUNC_1(VAR_0, "WPS ER: Failed to unsubscribe from "
      "events");
  break;
 }
 FUNC_0(VAR_4->http);
 VAR_4->http = ((void*)0);





 FUNC_2(VAR_4->er, VAR_4);
}
