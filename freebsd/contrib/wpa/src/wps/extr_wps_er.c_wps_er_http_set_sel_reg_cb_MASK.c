
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ uuid; int state; } ;
union wps_event_data {TYPE_1__ set_sel_reg; } ;
struct wps_er_ap {TYPE_3__* er; int * http; scalar_t__ uuid; } ;
struct http_client {int dummy; } ;
typedef enum http_client_event { ____Placeholder_http_client_event } http_client_event ;
typedef int data ;
struct TYPE_6__ {TYPE_2__* wps; } ;
struct TYPE_5__ {int cb_ctx; int (* event_cb ) (int ,int ,union wps_event_data*) ;} ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (union wps_event_data*,int ,int) ;
 int FUNC_2 (int ,int ,union wps_event_data*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void *VAR_4, struct http_client *VAR_5,
           enum http_client_event VAR_6)
{
 struct wps_er_ap *VAR_7 = VAR_4;
 union wps_event_data VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));

 switch (VAR_6) {
 case 129:
  FUNC_3(VAR_0, "WPS ER: SetSelectedRegistrar OK");
  VAR_8.set_sel_reg.state = VAR_1;
  VAR_8.set_sel_reg.uuid = VAR_7->uuid;
  break;
 case 131:
 case 130:
 case 128:
  FUNC_3(VAR_0, "WPS ER: SetSelectedRegistrar failed");
  VAR_8.set_sel_reg.state = VAR_2;
  VAR_8.set_sel_reg.uuid = VAR_7->uuid;
  break;
 }
 FUNC_0(VAR_7->http);
 VAR_7->http = ((void*)0);

 if (VAR_8.set_sel_reg.uuid)
  VAR_7->er->wps->event_cb(VAR_7->er->wps->cb_ctx,
          VAR_3, &VAR_8);
}
