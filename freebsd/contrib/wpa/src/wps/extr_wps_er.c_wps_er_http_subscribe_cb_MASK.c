
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_er_ap {int subscribed; int * http; TYPE_1__* er; } ;
struct http_client {int dummy; } ;
typedef enum http_client_event { ____Placeholder_http_client_event } http_client_event ;
struct TYPE_2__ {int wps; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct http_client*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,struct wps_er_ap*,int ) ;
 int FUNC_4 (TYPE_1__*,struct wps_er_ap*) ;
 int FUNC_5 (struct wps_er_ap*,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_2, struct http_client *VAR_3,
         enum http_client_event VAR_4)
{
 struct wps_er_ap *VAR_5 = VAR_2;

 switch (VAR_4) {
 case 129:
  FUNC_2(VAR_0, "WPS ER: Subscribed to events");
  VAR_5->subscribed = 1;
  FUNC_5(VAR_5, FUNC_1(VAR_3, "SID"));
  FUNC_4(VAR_5->er, VAR_5);
  FUNC_3(VAR_5->er->wps, VAR_5, VAR_1);
  break;
 case 131:
 case 130:
 case 128:
  FUNC_2(VAR_0, "WPS ER: Failed to subscribe to events");
  break;
 }
 FUNC_0(VAR_5->http);
 VAR_5->http = ((void*)0);
}
